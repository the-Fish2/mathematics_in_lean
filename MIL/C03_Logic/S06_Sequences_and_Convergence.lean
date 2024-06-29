import MIL.Common
import Mathlib.Data.Real.Basic

namespace C03S06

def ConvergesTo (s : ℕ → ℝ) (a : ℝ) :=
  ∀ ε > 0, ∃ N, ∀ n ≥ N, |s n - a| < ε

example : (fun x y : ℝ ↦ (x + y) ^ 2) = fun x y : ℝ ↦ x ^ 2 + 2 * x * y + y ^ 2 := by
  ext u v
  ring

example (a b : ℝ) : |a| = |a - b + b| := by
  congr
  ring

example {a : ℝ} (h : 1 < a) : a < a * a := by
  convert (mul_lt_mul_right _).2 h
  · rw [one_mul]
  exact lt_trans zero_lt_one h

theorem convergesTo_const (a : ℝ) : ConvergesTo (fun x : ℕ ↦ a) a := by
  intro ε εpos
  use 0
  intro n nge
  rw [sub_self, abs_zero]
  apply εpos

theorem convergesTo_add {s t : ℕ → ℝ} {a b : ℝ}
      (cs : ConvergesTo s a) (ct : ConvergesTo t b) :
    ConvergesTo (fun n ↦ s n + t n) (a + b) := by
  intro ε εpos
  dsimp
  have ε2pos : 0 < ε / 2 := by linarith
  rcases cs (ε / 2) ε2pos with ⟨Ns, hs⟩
  rcases ct (ε / 2) ε2pos with ⟨Nt, ht⟩
  use max Ns Nt
  intro n hn
  have ngeNs : n ≥ Ns := le_of_max_le_left hn
  have ngeNt : n ≥ Nt := le_of_max_le_right hn
  have h1 : |s n + t n - (a + b)| = |s n - a + (t n - b)| := by
    congr
    ring
  rw [h1]
  calc
    |s n - a + (t n - b)|
    _ ≤ |s n - a| + |t n - b| := abs_add _ _
    _ < ε / 2 + ε / 2 := add_lt_add (hs n ngeNs) (ht n ngeNt)
    _ = ε := by linarith

/--/ |s n - a| + |t n - b| -/

theorem convergesTo_mul_const {s : ℕ → ℝ} {a : ℝ} (c : ℝ) (cs : ConvergesTo s a) :
    ConvergesTo (fun n ↦ c * s n) (c * a) := by
  by_cases h : c = 0
  · convert convergesTo_const 0
    · rw [h]
      ring
    rw [h]
    ring
  have acpos : 0 < |c| := abs_pos.mpr h
  intro ε εpos
  dsimp
  have ε2pos : 0 < ε / |c| := div_pos (εpos) (acpos)
  rcases cs (ε / |c|) ε2pos with ⟨Ns, hs⟩
  use Ns
  intro n hn
  calc
    |c * s n - c * a|
    _ = |c * (s n - a)| := by rw [← mul_sub]
    _ = |c| * |s n - a| := by rw[abs_mul]
    _ < |c| * (ε/|c|) := (mul_lt_mul_of_pos_left (hs n hn) (acpos))
    _ = |c| / |c| * ε := by rw[mul_comm_div]
    _ = 1 * ε := by rw[div_self (abs_ne_zero.2 h)]
    _ = ε := by rw[one_mul]

theorem exists_abs_le_of_convergesTo {s: ℕ → ℝ} {a : ℝ} (cs : ConvergesTo s a) :
    ∃ N b, ∀ n, N ≤ n → |s n| < b := by
  rcases cs 1 zero_lt_one with ⟨N, h⟩
  use N, |a| + 1
  intro n hn
  calc |s n|
    _ = |s n + 0| := by
      congr
      rw [add_zero]
    _ = |s n - a + a| := by
      rw [← sub_self a, sub_eq_neg_add, ← add_assoc , add_comm (s n) (-a), neg_add_eq_sub]
    _ ≤ |s n - a| + |a| := abs_add (s n - a) (a)
    _ < 1 + |a| := add_lt_add_right (h n hn) (|a|)
    _ = |a| + 1 := by rw[add_comm]


theorem aux {s t : ℕ → ℝ} {a : ℝ} (cs : ConvergesTo s a) (ct : ConvergesTo t 0) :
    ConvergesTo (fun n ↦ s n * t n) 0 := by
  intro ε εpos
  dsimp
  rcases exists_abs_le_of_convergesTo cs with ⟨N₀, B, h₀⟩
  have Bpos : 0 < B := lt_of_le_of_lt (abs_nonneg _) (h₀ N₀ (le_refl _))
  have pos₀ : ε / B > 0 := div_pos εpos Bpos
  rcases ct _ pos₀ with ⟨N₁, h₁⟩
  use max N₀ N₁
  intro n hn
  have ngeNs : n ≥ N₀ := le_of_max_le_left hn
  have ngeNt : n ≥ N₁ := le_of_max_le_right hn
  calc |s n * t n - 0|
    _ = |s n * t n - s n * 0| := by rw[mul_zero]
    _ = |s n * (t n - 0)| := by rw[mul_sub]
    _ = |s n| * |(t n - 0)| := by rw[abs_mul]
    _ < B * (ε/B) := (mul_lt_mul'' (h₀ n ngeNs) (h₁ n ngeNt) (abs_nonneg (s n)) (abs_nonneg (t n - 0)))
    _ = B / B * ε := by rw[mul_comm_div]
    _ = 1 * ε := by rw[div_self (ne_of_gt Bpos)]
    _ = ε := by rw[one_mul]

theorem convergesTo_mul {s t : ℕ → ℝ} {a b : ℝ}
      (cs : ConvergesTo s a) (ct : ConvergesTo t b) :
    ConvergesTo (fun n ↦ s n * t n) (a * b) := by
  have h₁ : ConvergesTo (fun n ↦ s n * (t n + -b)) 0 := by
    apply aux cs
    convert convergesTo_add ct (convergesTo_const (-b))
    ring
  have := convergesTo_add h₁ (convergesTo_mul_const b cs)
  convert convergesTo_add h₁ (convergesTo_mul_const b cs) using 1
  · ext; ring
  ring

theorem convergesTo_unique {s : ℕ → ℝ} {a b : ℝ}
      (sa : ConvergesTo s a) (sb : ConvergesTo s b) :
    a = b := by
  by_contra abne
  have : |a - b| > 0 := by
    apply lt_of_le_of_ne
    · apply abs_nonneg
    intro h''
    apply abne
    apply eq_of_abs_sub_eq_zero h''.symm
  let ε := |a - b| / 2
  have εpos : ε > 0 := by
    change |a - b| / 2 > 0
    linarith
  rcases sa ε εpos with ⟨Na, hNa⟩
  rcases sb ε εpos with ⟨Nb, hNb⟩
  let N := max Na Nb
  have absa : |s N - a| < ε := by
    apply hNa
    apply le_max_left
  have absb : |s N - b| < ε := by
    apply hNb
    apply le_max_right
  have : |a - b| < |a - b| := by
    calc |a - b|
      _ = |-b + a| := by ring_nf
      _ = |-b + a + s N - s N| := by ring_nf
      _ = |s N - b - s N + a| := by ring_nf
      _ = |s N - b + -(s N - a)| := by ring_nf
      _ ≤ |s N - b| + |-(s N - a)| := abs_add (s N - b) (-(s N - a))
      _ = |s N - b| + |s N - a| := by rw [abs_neg]
      _ < ε + ε := add_lt_add absb absa
      _ = (|a - b|/2) + (|a - b|/2) := by simp
      _ = |a - b| := by simp
  exact lt_irrefl _ this

section
variable {α : Type*} [LinearOrder α]

def ConvergesTo' (s : α → ℝ) (a : ℝ) :=
  ∀ ε > 0, ∃ N, ∀ n ≥ N, |s n - a| < ε

end

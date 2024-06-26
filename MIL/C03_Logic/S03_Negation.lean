import MIL.Common
import Mathlib.Data.Real.Basic

namespace C03S03

section
variable (a b : ℝ)

example (h : a < b) : ¬b < a := by
  intro h'
  have : a < a := lt_trans h h'
  apply lt_irrefl a this

def FnUb (f : ℝ → ℝ) (a : ℝ) : Prop :=
  ∀ x, f x ≤ a

def FnLb (f : ℝ → ℝ) (a : ℝ) : Prop :=
  ∀ x, a ≤ f x

def FnHasUb (f : ℝ → ℝ) :=
  ∃ a, FnUb f a

def FnHasLb (f : ℝ → ℝ) :=
  ∃ a, FnLb f a

variable (f : ℝ → ℝ)

example (h : ∀ a, ∃ x, f x > a) : ¬FnHasUb f := by
  intro fnub
  rcases fnub with ⟨a, fnuba⟩
  rcases h a with ⟨x, hx⟩
  have : f x ≤ a := fnuba x
  linarith

example (h : ∀ a, ∃ x, f x < a) : ¬FnHasLb f := by
  intro z
  rcases z with ⟨a, fnlba⟩
  rcases h a with ⟨b, h2⟩
  have : f b ≥ a := fnlba b
  linarith

example : ¬FnHasUb fun x ↦ x := by
  -- rintro ⟨a, ha⟩
  -- -- simp at ha
  -- -- Confused: I understand how to prove this mathematically (ie assume there is an upper bound, prove ub + 1 can be reached by the code) but I'm not sure how to implement this - return soon!
  -- have cont: a ≤ a + 1
  -- -- linarith
  sorry

#check (not_le_of_gt : a > b → ¬a ≤ b)
#check (not_lt_of_ge : a ≥ b → ¬a < b)
#check (lt_of_not_ge : ¬a ≥ b → a < b)
#check (le_of_not_gt : ¬a > b → a ≤ b)

example (h : Monotone f) (h' : f a < f b) : a < b := by
  apply lt_of_not_ge
  intro h2
  apply h at h2
  linarith
  -- this one took a while.... still not entirely sure why rcases wasn't working here on h

example (h : a ≤ b) (h' : f b < f a) : ¬Monotone f := by
  intro h''
  --it looks like rcases doesn't work on Monotone f
  apply not_le_of_gt at h'
  apply h'' at h
  linarith

example : ¬∀ {f : ℝ → ℝ}, Monotone f → ∀ {a b}, f a ≤ f b → a ≤ b := by
  intro h
  let f := fun x : ℝ ↦ (0 : ℝ)
  have monof : Monotone f := by
    intro a b aleb
    apply le_refl
    -- simp only [le_refl]
    -- linarith
  have h' : f 1 ≤ f 0 := le_refl _
  have h'': 1 ≤ 0 := h monof h'
  apply not_lt_of_ge at h''
  -- have h''' : 0 < 1 := zero_lt_one
  linarith

example (x : ℝ) (h : ∀ ε > 0, x < ε) : x ≤ 0 := by
  apply le_of_not_gt
  intro h'
  let e := x/2
  have e_pos : e > 0 := half_pos h'
  have x_lt_e : x < x/2 := h e e_pos
  have e_lt_x : x/2 < x := half_lt_self h'
  linarith
end

section
variable {α : Type*} (P : α → Prop) (Q : Prop)

example (h : ¬∃ x, P x) : ∀ x, ¬P x := by
  intro a b
  apply h
  use a

example (h : ∀ x, ¬P x) : ¬∃ x, P x := by
  intro a
  rcases a with ⟨w, p⟩
  have h' : ¬ P w := h w
  exact h' p

example (h : ¬∀ x, P x) : ∃ x, ¬P x := by
  -- proved below by exercise
  sorry

example (h : ∃ x, ¬P x) : ¬∀ x, P x := by
  intro a
  rcases h with ⟨w, h⟩
  apply h
  apply a

example (h : ¬∀ x, P x) : ∃ x, ¬P x := by
  by_contra h'
  apply h
  intro x
  show P x
  by_contra h''
  exact h' ⟨x, h''⟩

example (h : ¬¬Q) : Q := by
  by_contra h'
  exact h h'

example (h : Q) : ¬¬Q := by
  intro h'
  exact h' h
  -- why does exact h h' not work? probably because you need the neg symbol first...

end

section
variable (f : ℝ → ℝ)

example (h : ¬FnHasUb f) : ∀ a, ∃ x, f x > a := by
  intro a
  by_contra x
  apply h
  use a
  intro b
  apply le_of_not_gt
  intro h
  apply x
  use b

example (h : ¬∀ a, ∃ x, f x > a) : FnHasUb f := by
  push_neg at h
  exact h

example (h : ¬FnHasUb f) : ∀ a, ∃ x, f x > a := by
  dsimp only [FnHasUb, FnUb] at h
  push_neg at h
  exact h

example (h : ¬Monotone f) : ∃ x y, x ≤ y ∧ f y < f x := by
-- Took first line from solution.
  rw [Monotone] at h
  push_neg at h
  exact h

example (h : ¬FnHasUb f) : ∀ a, ∃ x, f x > a := by
  contrapose! h
  exact h

example (x : ℝ) (h : ∀ ε > 0, x ≤ ε) : x ≤ 0 := by
  contrapose! h
  use x / 2
  constructor <;> linarith

end

section
variable (a : ℕ)

example (h : 0 < 0) : a > 37 := by
  exfalso
  apply lt_irrefl 0 h

example (h : 0 < 0) : a > 37 :=
  absurd h (lt_irrefl 0)

example (h : 0 < 0) : a > 37 := by
  have h' : ¬0 < 0 := lt_irrefl 0
  contradiction

end

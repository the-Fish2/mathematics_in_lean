import MIL.Common
import Mathlib.Data.Real.Basic

namespace C02S04

section
variable (a b c d : ℝ)

#check (min_le_left a b : min a b ≤ a)
#check (min_le_right a b : min a b ≤ b)
#check (le_min : c ≤ a → c ≤ b → c ≤ min a b)

example : min a b = min b a := by
  apply le_antisymm
  · show min a b ≤ min b a
    apply le_min
    apply min_le_right
    apply min_le_left
  · show min b a ≤ min a b
    apply le_min
    · apply min_le_right
    apply min_le_left

example : min a b = min b a := by
  have h : ∀ x y : ℝ, min x y ≤ min y x := by
    intro x y
    apply le_min
    apply min_le_right
    apply min_le_left
  apply le_antisymm
  apply h
  apply h

example : min a b = min b a := by
  apply le_antisymm
  repeat
    apply le_min
    apply min_le_right
    apply min_le_left

example : max a b = max b a := by
  apply le_antisymm
  repeat'
    apply max_le
    apply le_max_right
    apply le_max_left


example : min (min a b) c = min a (min b c) := by
  have h : ∀ x y z : ℝ, min (min x y) z ≤ x := by
    intro x y z
    calc
      min (min x y) z ≤ (min x y) := by apply min_le_left (min x y) z
      _ ≤ x := by apply min_le_left

  have h2 : ∀ x y z : ℝ, min (min x y) z ≤ y := by
    intro x y z
    calc
      min (min x y) z ≤ (min x y) := by apply min_le_left (min x y) z
      _ ≤ y := by apply min_le_right

  have h3 : ∀ x y z : ℝ, min x (min y z) ≤ y := by
    intro x y z
    calc
      min x (min y z) ≤ (min y z) := by apply min_le_right x (min y z)
      _ ≤ y := by apply min_le_left

  have h4 : ∀ x y z : ℝ, min x (min y z) ≤ z := by
    intro x y z
    calc
      min x (min y z) ≤ (min y z) := by apply min_le_right x (min y z)
      _ ≤ z := by apply min_le_right

  apply le_antisymm

  apply le_min
  apply h a b c
  apply le_min
  apply h2 a b c
  apply min_le_right

  apply le_min
  apply le_min
  apply min_le_left
  apply h3 a b c
  apply h4 a b c

theorem aux : min a b + c ≤ min (a + c) (b + c) := by
  apply le_min
  apply add_le_add_right
  apply min_le_left
  apply add_le_add_right
  apply min_le_right

example : min a b + c = min (a + c) (b + c) := by
  apply le_antisymm
  apply aux
  -- min (a + c) (b + c) ≤ min a b + c
  -- min ( a + c ) ( b + c ) - c ≤ min a b
  -- h: min ( a + c ) ( b + c ) -c
  --    ≤ min ( a + c - c ) (b + c - c ) := by aux
  --    ≤ min a b := by aux
  -- exact h
  sorry


#check (abs_add : ∀ a b : ℝ, |a + b| ≤ |a| + |b|)

example : |a| - |b| ≤ |a - b| := by
  have h := abs_add (a - b) b
  rw [sub_add_cancel] at h
  linarith
end

section
variable (w x y z : ℕ)

example (h₀ : x ∣ y) (h₁ : y ∣ z) : x ∣ z :=
  dvd_trans h₀ h₁

example : x ∣ y * x * z := by
  apply dvd_mul_of_dvd_left
  apply dvd_mul_left

example : x ∣ x ^ 2 := by
   apply dvd_mul_left

example (h : x ∣ w) : x ∣ y * (x * z) + x ^ 2 + w ^ 2 := by
  apply dvd_add
  · apply dvd_add
    rw [← mul_assoc]
    apply dvd_mul_of_dvd_left
    apply dvd_mul_left
    apply dvd_mul_left
  rw [pow_two]
  apply dvd_mul_of_dvd_left
  apply h
end

section
variable (m n : ℕ)

#check (Nat.gcd_zero_right n : Nat.gcd n 0 = n)
#check (Nat.gcd_zero_left n : Nat.gcd 0 n = n)
#check (Nat.lcm_zero_right n : Nat.lcm n 0 = 0)
#check (Nat.lcm_zero_left n : Nat.lcm 0 n = 0)

example : Nat.gcd m n = Nat.gcd n m := by
--  apply Nat.gcd_comm -- I guessed the theorem correctly! :D
  apply _root_.dvd_antisymm
  apply Nat.dvd_gcd
  apply Nat.gcd_dvd_right
  apply Nat.gcd_dvd_left

  apply Nat.dvd_gcd
  apply Nat.gcd_dvd_right
  apply Nat.gcd_dvd_left

end

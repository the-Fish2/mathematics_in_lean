import Mathlib
import GeneratingFunctions.PowerSeriesExtra

section
open PowerSeries

variable (a: ℕ → ℝ)
variable (A : ℝ⟦X⟧)
variable (ha_base_case : a 0 = 0)
variable (ha_recursion : ∀ n, a (n+1) = 2*(a n) + 1)
variable (A_def : A = mk a)

theorem A_generating_function : A = X * (1-(1:ℝ)•X)⁻¹ * (1-(2:ℝ)•X)⁻¹ := by
  have constantCoeff_A_eq_zero : constantCoeff ℝ A = 0 := by simp [A_def, ha_base_case]

  let AdivX := divX A constantCoeff_A_eq_zero

  /- LHS of Eq (1.1.1): $\sum_{n \ge 0} a_{n+1}x^n = A(x)/x$. -/
  have LHS_eq_1_1_1 : mk (fun n => a (n+1)) = AdivX := by
    ext n
    simp[AdivX, coeff_divX, A_def]

  /- RHS of Eq (1.1.1): $\sum_{n \ge 0} (2a_n + 1)x^n = 2A(x) + \frac{1}{1-x}$. -/
  have RHS_eq_1_1_1 : mk (fun n => 2*(a n) + 1) = (2:ℝ)•A + (1-(1:ℝ)•X)⁻¹ := by
    ext n
    simp [A_def]
    have : (X:ℝ⟦X⟧) = (1 : ℝ) ⬝ X := by simp
    rw [this, ← geometricSeries_eq_closed_form (1:ℝ)]
    ext n
    simp [geometricSeries]

  /- Equating the two sides of Eq (1.1.1) -/
  have LHS_eq_RHS : AdivX = (2:ℝ)•A + (1-(1:ℝ)•X)⁻¹ := by
    rw [← LHS_eq_1_1_1, ← RHS_eq_1_1_1]
    ext n
    simp [coeff_mk, ha_recursion]

  /- Multiplying both sides by X. -/
  have : A = X*((2:ℝ)•A + (1-(1:ℝ)•X)⁻¹) := by
    calc A = X * AdivX := by simp
         _ = X * ( (2: ℝ )⬝ A + (1 - (1 : ℝ ) ⬝ X⁻¹  ))
    simp_rw [← LHS_eq_RHS, AdivX, ← eq_mulX_divX]

  /- Subtract 2*X*A. -/
  have : (1-(2:ℝ)•X) * A = X*(1-(1:ℝ)•X)⁻¹ := by
    rw [mul_sub_right_distrib]
    nth_rewrite 1 [this]
    simp [left_distrib, smul_mul_eq_mul_smul]

  /- Conclude -/
  calc A = (1-(2:ℝ)•X)⁻¹ * (1-(2:ℝ)•X) * A := by simp
       _ = (1-(2:ℝ)•X)⁻¹ * X * (1-(1:ℝ)•X)⁻¹ := by rw [mul_assoc, this, ← mul_assoc]
        _ = X * (1-(1:ℝ)•X)⁻¹ * (1-(2:ℝ)•X)⁻¹ := by ring

theorem partial_fraction_expansion : (1-(1:ℝ)•(X:ℝ⟦X⟧))⁻¹ * (1-(2:ℝ)•X)⁻¹ = 2 • (1-(2:ℝ)•X)⁻¹ - (1-(1:ℝ)•X)⁻¹ := by
  sorry

theorem a_formula : a n = 2^n - 1 := by
  set P : ℝ⟦X⟧ := 2 • (1-(2:ℝ)•X)⁻¹ with hP
  set Q : ℝ⟦X⟧ := (1-(1:ℝ)•X)⁻¹ with hQ

  cases n with
  | zero => simp [ha_base_case]
  | succ n => {
    have hA_partial_fraction : A = (X * (P-Q)) := by
      rw [A_generating_function a A ha_base_case ha_recursion A_def]
      rw [mul_assoc, partial_fraction_expansion]

    have hP_coeff : (coeff ℝ) n P = 2^(n+1) := by
      rw [hP, ← geometricSeries_eq_closed_form 2]
      rw [coeff_smul, geometricSeries, coeff_mk]
      ring

    have hQ_coeff : (coeff ℝ) n Q = 1 := by
      rw [hQ, ← geometricSeries_eq_closed_form 1, geometricSeries, coeff_mk]
      ring

    calc a (n+1) = (coeff ℝ) (n+1) A := by simp [A_def]
           _ = (coeff ℝ) (n+1) (X * (P-Q)) := by rw [hA_partial_fraction]
           _ = (coeff ℝ) n (P - Q) := by rw [coeff_succ_X_mul]
           _ = 2^(n+1) - 1 := by simp [hP_coeff, hQ_coeff]
  }

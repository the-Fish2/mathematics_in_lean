import MIL.Common
import Mathlib.Data.Set.Lattice
import Mathlib.Data.Set.Function
import Mathlib.Analysis.SpecialFunctions.Log.Basic

section

variable {α β : Type*}
variable (f : α → β)
variable (s t : Set α)
variable (u v : Set β)

open Function
open Set

example : f ⁻¹' (u ∩ v) = f ⁻¹' u ∩ f ⁻¹' v := by
  ext
  rfl

example : f '' (s ∪ t) = f '' s ∪ f '' t := by
  ext y; constructor
  · rintro ⟨x, xs | xt, rfl⟩
    · left
      use x, xs
    right
    use x, xt
  rintro (⟨x, xs, rfl⟩ | ⟨x, xt, rfl⟩)
  · use x, Or.inl xs
  use x, Or.inr xt

example : s ⊆ f ⁻¹' (f '' s) := by
  intro x xs
  show f x ∈ f '' s
  use x, xs

example : f '' s ⊆ v ↔ s ⊆ f ⁻¹' v := by
  constructor <;> intros h j k
  apply h
  use j, k
  rcases k with ⟨k1, k2, rfl⟩
  apply h
  exact k2

example (h : Injective f) : f ⁻¹' (f '' s) ⊆ s := by
  intro x k
  rcases k with ⟨y, h1, h2⟩
  apply h at h2
  rw [h2] at h1
  exact h1

example : f '' (f ⁻¹' u) ⊆ u := by
  intro x h
  rcases h with ⟨y, h1, rfl⟩
  exact h1

example (h : Surjective f) : u ⊆ f '' (f ⁻¹' u) := by
  intro x k
  rcases h x with ⟨y, h1⟩
  use y
  constructor
  show f y ∈ u
  rw [h1]
  exact k
  exact h1

example (h : s ⊆ t) : f '' s ⊆ f '' t := by
  intro x ⟨a, h1, h2⟩
  use a
  constructor
  apply h
  exact h1
  exact h2

example (h : u ⊆ v) : f ⁻¹' u ⊆ f ⁻¹' v := by
  intros x hu
  show f x ∈ v
  apply h
  exact hu

example : f ⁻¹' (u ∪ v) = f ⁻¹' u ∪ f ⁻¹' v := by
  ext x
  rfl
  -- constructor <;> rintro (hu | hv)
  -- left; exact hu
  -- right; exact hv
  -- left; exact hu
  -- right; exact hv


example : f '' (s ∩ t) ⊆ f '' s ∩ f '' t := by
  intro x ⟨a, h1, h2⟩
  rcases h1 with ⟨xs, xt⟩
  constructor <;> use a

example (h : Injective f) : f '' s ∩ f '' t ⊆ f '' (s ∩ t) := by
  intro x ⟨⟨a, hsa, hax⟩, ⟨b, htb, hbx⟩⟩
  use a
  constructor
  rw [← hbx] at hax
  apply h at hax
  rw [← hax] at htb
  constructor
  exact hsa
  exact htb
  exact hax

example : f '' s \ f '' t ⊆ f '' (s \ t) := by
  intro x ⟨⟨a, has, hax⟩ , hb⟩
  use a
  constructor
  constructor
  exact has
  intro h; apply hb; use a; exact hax

example : f ⁻¹' u \ f ⁻¹' v ⊆ f ⁻¹' (u \ v) := by
  intro x ⟨xu, xv⟩
  constructor
  exact xu
  exact xv

example : f '' s ∩ v = f '' (s ∩ f ⁻¹' v) := by
  ext x
  constructor
  rintro ⟨⟨a, as, rfl⟩, xv⟩
  use a, ⟨as, xv⟩
  -- constructor; constructor; exact as; exact xv; rfl
  rintro ⟨a, ⟨as, av⟩, rfl⟩
  constructor
  use a, as
  use av

example : f '' (s ∩ f ⁻¹' u) ⊆ f '' s ∩ u := by
  rintro x ⟨a, ⟨as, au⟩, ax⟩
  constructor <;> rw [← ax]
  use a
  exact au

-- note: consistent theme of me using constructors and then using individual parts
-- vs in solutions, they just use exact <> and something
-- will work on implementing that in last two

example : s ∩ f ⁻¹' u ⊆ f ⁻¹' (f '' s ∩ u) := by
  rintro x ⟨xs, xu⟩
  exact ⟨⟨x, xs, rfl⟩, xu⟩
  -- --show f x ∈ f '' s ∩ u
  -- constructor
  -- use x
  -- exact xu

example : s ∪ f ⁻¹' u ⊆ f ⁻¹' (f '' s ∪ u) := by
  rintro x (hs | hu)
  left; exact ⟨x, hs, rfl⟩
  right; exact hu

variable {I : Type*} (A : I → Set α) (B : I → Set β)

example : (f '' ⋃ i, A i) = ⋃ i, f '' A i := by
  ext x; simp
  constructor
  intro ⟨a, ⟨i, ai⟩, h2⟩
  rw [← h2]
  use i
  use a
  intro ⟨a, b, ⟨hba, hbx⟩⟩
  use b
  constructor
  use a
  exact hbx

example : (f '' ⋂ i, A i) ⊆ ⋂ i, f '' A i := by
  sorry

example (i : I) (injf : Injective f) : (⋂ i, f '' A i) ⊆ f '' ⋂ i, A i := by
  sorry

example : (f ⁻¹' ⋃ i, B i) = ⋃ i, f ⁻¹' B i := by
  sorry

example : (f ⁻¹' ⋂ i, B i) = ⋂ i, f ⁻¹' B i := by
  sorry

example : InjOn f s ↔ ∀ x₁ ∈ s, ∀ x₂ ∈ s, f x₁ = f x₂ → x₁ = x₂ :=
  Iff.refl _

end

section

open Set Real

example : InjOn log { x | x > 0 } := by
  intro x xpos y ypos
  intro e
  -- log x = log y
  calc
    x = exp (log x) := by rw [exp_log xpos]
    _ = exp (log y) := by rw [e]
    _ = y := by rw [exp_log ypos]


example : range exp = { y | y > 0 } := by
  ext y; constructor
  · rintro ⟨x, rfl⟩
    apply exp_pos
  intro ypos
  use log y
  rw [exp_log ypos]

example : InjOn sqrt { x | x ≥ 0 } := by
  sorry

example : InjOn (fun x ↦ x ^ 2) { x : ℝ | x ≥ 0 } := by
  sorry

example : sqrt '' { x | x ≥ 0 } = { y | y ≥ 0 } := by
  sorry

example : (range fun x ↦ x ^ 2) = { y : ℝ | y ≥ 0 } := by
  sorry

end

section
variable {α β : Type*} [Inhabited α]

#check (default : α)

variable (P : α → Prop) (h : ∃ x, P x)

#check Classical.choose h

example : P (Classical.choose h) :=
  Classical.choose_spec h

noncomputable section

open Classical

def inverse (f : α → β) : β → α := fun y : β ↦
  if h : ∃ x, f x = y then Classical.choose h else default

theorem inverse_spec {f : α → β} (y : β) (h : ∃ x, f x = y) : f (inverse f y) = y := by
  rw [inverse, dif_pos h]
  exact Classical.choose_spec h

variable (f : α → β)

open Function

example : Injective f ↔ LeftInverse (inverse f) f :=
  sorry

example : Surjective f ↔ RightInverse (inverse f) f :=
  sorry

end

section
variable {α : Type*}
open Function

theorem Cantor : ∀ f : α → Set α, ¬Surjective f := by
  intro f surjf
  let S := { i | i ∉ f i }
  rcases surjf S with ⟨j, h⟩
  have h₁ : j ∉ f j := by
    intro h'
    have : j ∉ f j := by rwa [h] at h'
    contradiction
  have h₂ : j ∈ S
  sorry
  have h₃ : j ∉ S
  sorry
  contradiction

-- COMMENTS: TODO: improve this
end

// Lean compiler output
// Module: MIL
// Imports: Init MIL.C01_Introduction.S01_Getting_Started MIL.C01_Introduction.S02_Overview MIL.C02_Basics.S01_Calculating MIL.C02_Basics.S02_Proving_Identities_in_Algebraic_Structures MIL.C02_Basics.S03_Using_Theorems_and_Lemmas MIL.C02_Basics.S04_More_on_Order_and_Divisibility MIL.C02_Basics.S05_Proving_Facts_about_Algebraic_Structures MIL.C03_Logic.S01_Implication_and_the_Universal_Quantifier MIL.C03_Logic.S02_The_Existential_Quantifier MIL.C03_Logic.S03_Negation MIL.C03_Logic.S04_Conjunction_and_Iff MIL.C03_Logic.S05_Disjunction MIL.C03_Logic.S06_Sequences_and_Convergence MIL.C04_Sets_and_Functions.S01_Sets MIL.C04_Sets_and_Functions.S02_Functions MIL.C04_Sets_and_Functions.S03_The_Schroeder_Bernstein_Theorem MIL.C05_Elementary_Number_Theory.S01_Irrational_Roots MIL.C05_Elementary_Number_Theory.S02_Induction_and_Recursion MIL.C05_Elementary_Number_Theory.S03_Infinitely_Many_Primes MIL.C06_Structures.S01_Structures MIL.C06_Structures.S02_Algebraic_Structures MIL.C06_Structures.S03_Building_the_Gaussian_Integers MIL.C07_Hierarchies.S01_Basics MIL.C07_Hierarchies.S02_Morphisms MIL.C07_Hierarchies.S03_Subobjects MIL.C08_Groups_and_Rings.S01_Groups MIL.C08_Groups_and_Rings.S02_Rings MIL.C09_Topology.S01_Filters MIL.C09_Topology.S02_Metric_Spaces MIL.C09_Topology.S03_Topological_Spaces MIL.C10_Differential_Calculus.S01_Elementary_Differential_Calculus MIL.C10_Differential_Calculus.S02_Differential_Calculus_in_Normed_Spaces MIL.C11_Integration_and_Measure_Theory.S01_Elementary_Integration MIL.C11_Integration_and_Measure_Theory.S02_Measure_Theory MIL.C11_Integration_and_Measure_Theory.S03_Integration MIL.Common
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C01__Introduction_S01__Getting__Started(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C01__Introduction_S02__Overview(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C02__Basics_S01__Calculating(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C02__Basics_S02__Proving__Identities__in__Algebraic__Structures(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C02__Basics_S03__Using__Theorems__and__Lemmas(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C02__Basics_S04__More__on__Order__and__Divisibility(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C02__Basics_S05__Proving__Facts__about__Algebraic__Structures(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C03__Logic_S01__Implication__and__the__Universal__Quantifier(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C03__Logic_S02__The__Existential__Quantifier(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C03__Logic_S03__Negation(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C03__Logic_S04__Conjunction__and__Iff(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C03__Logic_S05__Disjunction(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C03__Logic_S06__Sequences__and__Convergence(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C04__Sets__and__Functions_S01__Sets(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C04__Sets__and__Functions_S02__Functions(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C04__Sets__and__Functions_S03__The__Schroeder__Bernstein__Theorem(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C05__Elementary__Number__Theory_S01__Irrational__Roots(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C05__Elementary__Number__Theory_S02__Induction__and__Recursion(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C05__Elementary__Number__Theory_S03__Infinitely__Many__Primes(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C06__Structures_S01__Structures(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C06__Structures_S02__Algebraic__Structures(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C06__Structures_S03__Building__the__Gaussian__Integers(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C07__Hierarchies_S01__Basics(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C07__Hierarchies_S02__Morphisms(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C07__Hierarchies_S03__Subobjects(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C08__Groups__and__Rings_S01__Groups(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C08__Groups__and__Rings_S02__Rings(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C09__Topology_S01__Filters(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C09__Topology_S02__Metric__Spaces(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C09__Topology_S03__Topological__Spaces(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C10__Differential__Calculus_S01__Elementary__Differential__Calculus(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C10__Differential__Calculus_S02__Differential__Calculus__in__Normed__Spaces(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C11__Integration__and__Measure__Theory_S01__Elementary__Integration(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C11__Integration__and__Measure__Theory_S02__Measure__Theory(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_C11__Integration__and__Measure__Theory_S03__Integration(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_Common(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_MIL(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C01__Introduction_S01__Getting__Started(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C01__Introduction_S02__Overview(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C02__Basics_S01__Calculating(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C02__Basics_S02__Proving__Identities__in__Algebraic__Structures(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C02__Basics_S03__Using__Theorems__and__Lemmas(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C02__Basics_S04__More__on__Order__and__Divisibility(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C02__Basics_S05__Proving__Facts__about__Algebraic__Structures(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C03__Logic_S01__Implication__and__the__Universal__Quantifier(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C03__Logic_S02__The__Existential__Quantifier(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C03__Logic_S03__Negation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C03__Logic_S04__Conjunction__and__Iff(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C03__Logic_S05__Disjunction(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C03__Logic_S06__Sequences__and__Convergence(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C04__Sets__and__Functions_S01__Sets(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C04__Sets__and__Functions_S02__Functions(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C04__Sets__and__Functions_S03__The__Schroeder__Bernstein__Theorem(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C05__Elementary__Number__Theory_S01__Irrational__Roots(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C05__Elementary__Number__Theory_S02__Induction__and__Recursion(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C05__Elementary__Number__Theory_S03__Infinitely__Many__Primes(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C06__Structures_S01__Structures(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C06__Structures_S02__Algebraic__Structures(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C06__Structures_S03__Building__the__Gaussian__Integers(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C07__Hierarchies_S01__Basics(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C07__Hierarchies_S02__Morphisms(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C07__Hierarchies_S03__Subobjects(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C08__Groups__and__Rings_S01__Groups(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C08__Groups__and__Rings_S02__Rings(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C09__Topology_S01__Filters(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C09__Topology_S02__Metric__Spaces(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C09__Topology_S03__Topological__Spaces(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C10__Differential__Calculus_S01__Elementary__Differential__Calculus(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C10__Differential__Calculus_S02__Differential__Calculus__in__Normed__Spaces(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C11__Integration__and__Measure__Theory_S01__Elementary__Integration(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C11__Integration__and__Measure__Theory_S02__Measure__Theory(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_C11__Integration__and__Measure__Theory_S03__Integration(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_Common(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

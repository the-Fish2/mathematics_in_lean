// Lean compiler output
// Module: MIL.C04_Sets_and_Functions.S01_Sets
// Imports: Init Mathlib.Data.Set.Lattice Mathlib.Data.Nat.Prime Mathlib.Data.Nat.Parity MIL.Common
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
LEAN_EXPORT lean_object* l_primes;
LEAN_EXPORT lean_object* l_evens;
LEAN_EXPORT lean_object* l_odds;
static lean_object* _init_l_evens() {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_odds() {
_start:
{
return lean_box(0);
}
}
static lean_object* _init_l_primes() {
_start:
{
return lean_box(0);
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Set_Lattice(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Prime(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Parity(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_Common(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_MIL_C04__Sets__and__Functions_S01__Sets(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Set_Lattice(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Prime(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Parity(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_Common(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_evens = _init_l_evens();
l_odds = _init_l_odds();
l_primes = _init_l_primes();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

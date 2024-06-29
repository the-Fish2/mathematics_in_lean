// Lean compiler output
// Module: MIL.C06_Structures.S01_Structures
// Imports: Init MIL.Common Mathlib.Algebra.BigOperators.Ring Mathlib.Data.Real.Basic
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
static lean_object* l_C06S01_myPoint1___closed__2;
LEAN_EXPORT lean_object* l_C06S01_Point_smul___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_C06S01_Point_addAlt_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_C06S01_Point_add_x27(lean_object*, lean_object*);
lean_object* lean_sorry(uint8_t);
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_1003_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_C06S01_myPoint1;
LEAN_EXPORT lean_object* l_C06S01_Point_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_C06S01_StandardTwoSimplex_weightedAverage(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_C06S01_Point_addAlt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_C06S01_StandardTwoSimplex_swapXy(lean_object*);
extern lean_object* l___private_Mathlib_Data_Real_Basic_0__Real_one;
static lean_object* l_C06S01_myPoint1___closed__3;
LEAN_EXPORT lean_object* l_C06S01_StandardTwoSimplex_weightedAverage___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_C06S01_Point_smul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_C06S01_myPoint2;
static lean_object* l_C06S01_myPoint1___closed__1;
lean_object* l_Nat_cast___at_Real_natCast___spec__2(lean_object*);
static lean_object* l_C06S01_myPoint1___closed__4;
LEAN_EXPORT lean_object* l_C06S01_myPoint3;
lean_object* l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(lean_object*, lean_object*);
static lean_object* _init_l_C06S01_myPoint1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = l_Nat_cast___at_Real_natCast___spec__2(x_1);
return x_2;
}
}
static lean_object* _init_l_C06S01_myPoint1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Mathlib_Data_Real_Basic_0__Real_one;
x_2 = lean_alloc_closure((void*)(l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_1003_), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_C06S01_myPoint1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = l_Nat_cast___at_Real_natCast___spec__2(x_1);
return x_2;
}
}
static lean_object* _init_l_C06S01_myPoint1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_C06S01_myPoint1___closed__1;
x_2 = l_C06S01_myPoint1___closed__2;
x_3 = l_C06S01_myPoint1___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_C06S01_myPoint1() {
_start:
{
lean_object* x_1; 
x_1 = l_C06S01_myPoint1___closed__4;
return x_1;
}
}
static lean_object* _init_l_C06S01_myPoint2() {
_start:
{
lean_object* x_1; 
x_1 = l_C06S01_myPoint1___closed__4;
return x_1;
}
}
static lean_object* _init_l_C06S01_myPoint3() {
_start:
{
lean_object* x_1; 
x_1 = l_C06S01_myPoint1___closed__4;
return x_1;
}
}
LEAN_EXPORT lean_object* l_C06S01_Point_add(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_6, x_7);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_9, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_8);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_C06S01_Point_add_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_6, x_7);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_9, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_8);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_C06S01_Point_addAlt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_2, 2);
x_10 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_3, x_7);
x_11 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_4, x_8);
x_12 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_5, x_9);
lean_ctor_set(x_2, 2, x_12);
lean_ctor_set(x_2, 1, x_11);
lean_ctor_set(x_2, 0, x_10);
return x_2;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_3, x_13);
x_17 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_4, x_14);
x_18 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_5, x_15);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_18);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_C06S01_Point_addAlt_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_2, 2);
x_10 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_3, x_7);
x_11 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_4, x_8);
x_12 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_5, x_9);
lean_ctor_set(x_2, 2, x_12);
lean_ctor_set(x_2, 1, x_11);
lean_ctor_set(x_2, 0, x_10);
return x_2;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_3, x_13);
x_17 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_4, x_14);
x_18 = l_Real_definition____x40_Mathlib_Data_Real_Basic___hyg_826_(x_5, x_15);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_18);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_C06S01_Point_smul(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = 0;
x_4 = lean_sorry(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_C06S01_Point_smul___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_C06S01_Point_smul(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_C06S01_StandardTwoSimplex_swapXy(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_ctor_set(x_1, 1, x_3);
lean_ctor_set(x_1, 0, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_5);
lean_ctor_set(x_8, 2, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_C06S01_StandardTwoSimplex_weightedAverage(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = 0;
x_7 = lean_sorry(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_C06S01_StandardTwoSimplex_weightedAverage___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_C06S01_StandardTwoSimplex_weightedAverage(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_MIL_Common(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Algebra_BigOperators_Ring(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Real_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_MIL_C06__Structures_S01__Structures(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_MIL_Common(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_BigOperators_Ring(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Real_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_C06S01_myPoint1___closed__1 = _init_l_C06S01_myPoint1___closed__1();
lean_mark_persistent(l_C06S01_myPoint1___closed__1);
l_C06S01_myPoint1___closed__2 = _init_l_C06S01_myPoint1___closed__2();
lean_mark_persistent(l_C06S01_myPoint1___closed__2);
l_C06S01_myPoint1___closed__3 = _init_l_C06S01_myPoint1___closed__3();
lean_mark_persistent(l_C06S01_myPoint1___closed__3);
l_C06S01_myPoint1___closed__4 = _init_l_C06S01_myPoint1___closed__4();
lean_mark_persistent(l_C06S01_myPoint1___closed__4);
l_C06S01_myPoint1 = _init_l_C06S01_myPoint1();
lean_mark_persistent(l_C06S01_myPoint1);
l_C06S01_myPoint2 = _init_l_C06S01_myPoint2();
lean_mark_persistent(l_C06S01_myPoint2);
l_C06S01_myPoint3 = _init_l_C06S01_myPoint3();
lean_mark_persistent(l_C06S01_myPoint3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ub_xy.h
//
// Code generation for function 'ub_xy'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void b_ub_xy(const emlrtStack *sp,
             const coder::array<real_T, 2U> &lr_case_data_price,
             const coder::array<real_T, 1U> &lr_case_data_dmd,
             const coder::array<real_T, 1U> &lr_case_data_fix,
             const coder::array<real_T, 1U> &lr_case_q, real_T lr_case_max_try,
             const coder::array<real_T, 2U> &lr_case_bar_J,
             const coder::array<real_T, 2U> &lr_case_I,
             coder::array<boolean_T, 2U> &location, real_T *obj,
             coder::array<real_T, 2U> &plan);

void c_ub_xy(const emlrtStack *sp,
             const coder::array<real_T, 2U> &lr_case_data_price,
             const coder::array<real_T, 1U> &lr_case_data_dmd,
             const coder::array<real_T, 1U> &lr_case_data_fix,
             const coder::array<real_T, 1U> &lr_case_q, real_T lr_case_max_try,
             const coder::array<real_T, 2U> &lr_case_bar_J,
             const coder::array<real_T, 2U> &lr_case_I,
             coder::array<boolean_T, 2U> &location, real_T *obj,
             coder::array<real_T, 2U> &plan);

void ub_xy(const emlrtStack *sp,
           const coder::array<real_T, 2U> &lr_case_data_price,
           const coder::array<real_T, 1U> &lr_case_data_dmd,
           const coder::array<real_T, 1U> &lr_case_data_fix,
           const coder::array<real_T, 1U> &lr_case_q, real_T lr_case_max_try,
           const coder::array<real_T, 2U> &lr_case_bar_J,
           const coder::array<real_T, 2U> &lr_case_I,
           coder::array<boolean_T, 2U> &location, boolean_T flag_fast,
           real_T *obj, coder::array<real_T, 2U> &plan,
           coder::array<real_T, 1U> &trans_cost);

// End of code generation (ub_xy.h)

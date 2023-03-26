//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ub_ils.h
//
// Code generation for function 'ub_ils'
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
void ub_ils(const emlrtStack *sp,
            const coder::array<real_T, 2U> &lr_case_data_price,
            const coder::array<real_T, 1U> &lr_case_data_dmd,
            const coder::array<real_T, 1U> &lr_case_data_fix,
            const coder::array<real_T, 1U> &lr_case_q, real_T lr_case_max_try,
            const coder::array<real_T, 2U> &lr_case_bar_J,
            const coder::array<real_T, 2U> &lr_case_I, real_T ub,
            coder::array<boolean_T, 2U> &location, real_T lr_para_theta_sa,
            real_T lr_para_eta_ils, real_T *best_nb_ub, real_T *current_ub,
            coder::array<boolean_T, 2U> &current_loc);

// End of code generation (ub_ils.h)

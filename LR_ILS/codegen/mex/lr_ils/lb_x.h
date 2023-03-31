//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lb_x.h
//
// Code generation for function 'lb_x'
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
void b_lb_x(const emlrtStack &sp,
            const coder::array<real_T, 2U> &lr_case_data_price,
            const coder::array<real_T, 1U> &lr_case_data_dmd,
            const coder::array<real_T, 1U> &lr_case_q, real_T lr_case_max_try,
            const coder::array<real_T, 2U> &lr_case_bar_J,
            const coder::array<real_T, 2U> &lr_case_I,
            const coder::array<real_T, 2U> &lr_case_mu,
            coder::array<real_T, 1U> &trans_cost,
            coder::array<real_T, 2U> &plan);

void lb_x(const emlrtStack &sp,
          const coder::array<real_T, 2U> &lr_case_data_price,
          const coder::array<real_T, 1U> &lr_case_data_dmd,
          const coder::array<real_T, 1U> &lr_case_q, real_T lr_case_max_try,
          const coder::array<real_T, 2U> &lr_case_bar_J,
          const coder::array<real_T, 2U> &lr_case_I,
          const coder::array<real_T, 2U> &lr_case_mu, boolean_T flag_fast,
          coder::array<real_T, 1U> &trans_cost, coder::array<real_T, 2U> &plan);

// End of code generation (lb_x.h)

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
void greedy_build(const emlrtStack *sp, const coder::array<real_T, 2U> &b_I,
                  real_T max_try, const coder::array<real_T, 2U> &bar_J,
                  const coder::array<real_T, 2U> &data_price,
                  const coder::array<real_T, 1U> &data_dmd,
                  const coder::array<real_T, 2U> &mu,
                  const coder::array<real_T, 1U> &q,
                  coder::array<real_T, 1U> &trans_cost,
                  coder::array<real_T, 2U> &plan);

// End of code generation (lb_x.h)

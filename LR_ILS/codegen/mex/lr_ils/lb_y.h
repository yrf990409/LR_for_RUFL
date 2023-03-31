//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lb_y.h
//
// Code generation for function 'lb_y'
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
void lb_y(const emlrtStack &sp,
          const coder::array<real_T, 1U> &lr_case_data_fix,
          const coder::array<real_T, 2U> &lr_case_bar_J,
          const coder::array<real_T, 2U> &lr_case_mu,
          coder::array<real_T, 2U> &cost_for_fac,
          coder::array<boolean_T, 2U> &location);

// End of code generation (lb_y.h)

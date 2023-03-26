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
#include "lb_x_types.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void lb_x(const emlrtStack *sp, const struct0_T *lr_case, boolean_T flag_fast,
          coder::array<real_T, 1U> &trans_cost, coder::array<real_T, 2U> &plan);

// End of code generation (lb_x.h)

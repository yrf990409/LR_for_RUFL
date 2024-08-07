//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lb_x_types.h
//
// Code generation for function 'lb_x'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"

// Type Definitions
struct struct1_T {
  coder::array<real_T, 2U> price;
  coder::array<real_T, 1U> dmd;
  coder::array<real_T, 1U> fix;
};

struct struct0_T {
  struct1_T data;
  real_T rho;
  coder::array<real_T, 1U> q;
  real_T max_try;
  real_T cus_num;
  real_T node_num;
  real_T fac_num;
  coder::array<real_T, 2U> bar_J;
  coder::array<real_T, 2U> b_I;
  coder::array<real_T, 2U> mu;
};

// End of code generation (lb_x_types.h)

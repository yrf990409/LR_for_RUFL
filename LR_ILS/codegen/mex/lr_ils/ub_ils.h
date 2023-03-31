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

// Type Declarations
struct struct1_T;

// Function Declarations
real_T ub_ils(const emlrtStack &sp, const struct1_T *lr_case, real_T ub,
              coder::array<boolean_T, 2U> &location, real_T lr_para_theta_sa,
              real_T lr_para_eta_ils, coder::array<boolean_T, 2U> &current_loc,
              real_T &current_ub);

// End of code generation (ub_ils.h)

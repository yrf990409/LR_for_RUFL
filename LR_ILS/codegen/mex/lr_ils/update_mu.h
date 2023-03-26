//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// update_mu.h
//
// Code generation for function 'update_mu'
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
void update_mu(const emlrtStack *sp,
               const coder::array<real_T, 2U> &lr_case_bar_J,
               const coder::array<real_T, 2U> &lr_case_I,
               const coder::array<real_T, 2U> &lr_case_mu, real_T lr_para_alpha,
               real_T lr_para_theta_lr, real_T lr_para_kappa_lb,
               boolean_T lr_para_square, real_T lb, real_T ub,
               const coder::array<real_T, 2U> &plan_lb,
               const coder::array<boolean_T, 2U> &location, real_T *cnt_step,
               coder::array<real_T, 2U> &mu, real_T *alpha);

// End of code generation (update_mu.h)

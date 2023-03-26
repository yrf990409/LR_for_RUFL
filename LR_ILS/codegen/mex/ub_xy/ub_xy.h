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
#include "ub_xy_types.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
emlrtCTX emlrtGetRootTLSGlobal();

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

void ub_xy(const emlrtStack *sp, const struct0_T *lr_case,
           coder::array<boolean_T, 2U> &location, boolean_T flag_fast,
           real_T *obj, coder::array<real_T, 2U> &plan,
           coder::array<real_T, 1U> &trans_cost);

// End of code generation (ub_xy.h)

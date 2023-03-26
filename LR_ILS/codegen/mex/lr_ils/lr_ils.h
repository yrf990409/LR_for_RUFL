//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lr_ils.h
//
// Code generation for function 'lr_ils'
//

#pragma once

// Include files
#include "lr_ils_types.h"
#include "rtwtypes.h"
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

void lr_ils(const emlrtStack *sp, struct0_T *lr_para, struct1_T *lr_case,
            struct3_T *lr_result);

// End of code generation (lr_ils.h)

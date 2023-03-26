//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ub_xy_terminate.cpp
//
// Code generation for function 'ub_xy_terminate'
//

// Include files
#include "ub_xy_terminate.h"
#include "_coder_ub_xy_mex.h"
#include "rt_nonfinite.h"
#include "ub_xy_data.h"

// Function Definitions
void ub_xy_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void ub_xy_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (ub_xy_terminate.cpp)

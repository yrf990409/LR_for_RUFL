//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lr_ils_terminate.cpp
//
// Code generation for function 'lr_ils_terminate'
//

// Include files
#include "lr_ils_terminate.h"
#include "_coder_lr_ils_mex.h"
#include "lr_ils_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

// Function Definitions
void lr_ils_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  timeKeeper_free();
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void lr_ils_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (lr_ils_terminate.cpp)

//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lb_x_terminate.cpp
//
// Code generation for function 'lb_x_terminate'
//

// Include files
#include "lb_x_terminate.h"
#include "_coder_lb_x_mex.h"
#include "lb_x_data.h"
#include "rt_nonfinite.h"

// Function Definitions
void lb_x_atexit()
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

void lb_x_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (lb_x_terminate.cpp)

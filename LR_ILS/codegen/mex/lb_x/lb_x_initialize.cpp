//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lb_x_initialize.cpp
//
// Code generation for function 'lb_x_initialize'
//

// Include files
#include "lb_x_initialize.h"
#include "_coder_lb_x_mex.h"
#include "lb_x_data.h"
#include "rt_nonfinite.h"

// Function Declarations
static void lb_x_once();

// Function Definitions
static void lb_x_once()
{
  mex_InitInfAndNan();
}

void lb_x_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    lb_x_once();
  }
}

// End of code generation (lb_x_initialize.cpp)

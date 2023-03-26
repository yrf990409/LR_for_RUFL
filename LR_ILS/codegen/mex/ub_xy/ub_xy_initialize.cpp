//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ub_xy_initialize.cpp
//
// Code generation for function 'ub_xy_initialize'
//

// Include files
#include "ub_xy_initialize.h"
#include "_coder_ub_xy_mex.h"
#include "rt_nonfinite.h"
#include "ub_xy_data.h"

// Function Declarations
static void ub_xy_once();

// Function Definitions
static void ub_xy_once()
{
  mex_InitInfAndNan();
}

void ub_xy_initialize()
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
    ub_xy_once();
  }
}

// End of code generation (ub_xy_initialize.cpp)

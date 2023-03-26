//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lr_ils_initialize.cpp
//
// Code generation for function 'lr_ils_initialize'
//

// Include files
#include "lr_ils_initialize.h"
#include "_coder_lr_ils_mex.h"
#include "lr_ils_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

// Function Declarations
static void lr_ils_once();

// Function Definitions
static void lr_ils_once()
{
  mex_InitInfAndNan();
  timeKeeper_free();
}

void lr_ils_initialize()
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
    lr_ils_once();
  }
}

// End of code generation (lr_ils_initialize.cpp)

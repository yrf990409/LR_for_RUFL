//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sum.cpp
//
// Code generation for function 'sum'
//

// Include files
#include "sum.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo cb_emlrtRSI{
    20,    // lineNo
    "sum", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/sum.m" // pathName
};

static emlrtRSInfo db_emlrtRSI{
    99,        // lineNo
    "sumprod", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" // pathName
};

static emlrtRSInfo eb_emlrtRSI{
    74,                      // lineNo
    "combineVectorElements", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    107,                // lineNo
    "blockedSummation", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo gb_emlrtRSI{
    22,                    // lineNo
    "sumMatrixIncludeNaN", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo hb_emlrtRSI{
    42,                 // lineNo
    "sumMatrixColumns", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    57,                 // lineNo
    "sumMatrixColumns", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

// Function Definitions
namespace coder {
real_T sum(const emlrtStack *sp, const ::coder::array<real_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_st.site = &db_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  if (x.size(0) == 0) {
    y = 0.0;
  } else {
    d_st.site = &fb_emlrtRSI;
    e_st.site = &gb_emlrtRSI;
    if (x.size(0) < 4096) {
      f_st.site = &hb_emlrtRSI;
      y = sumColumnB(&f_st, x, x.size(0));
    } else {
      int32_T inb;
      int32_T nfb;
      int32_T nleft;
      nfb = static_cast<int32_T>(static_cast<uint32_T>(x.size(0)) >> 12);
      inb = nfb << 12;
      nleft = x.size(0) - inb;
      y = sumColumnB4(x, 1);
      for (int32_T ib{2}; ib <= nfb; ib++) {
        y += sumColumnB4(x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        f_st.site = &ib_emlrtRSI;
        y += sumColumnB(&f_st, x, nleft, inb + 1);
      }
    }
  }
  return y;
}

} // namespace coder

// End of code generation (sum.cpp)

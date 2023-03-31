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
static emlrtRSInfo rb_emlrtRSI{
    20,    // lineNo
    "sum", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/sum.m" // pathName
};

static emlrtRSInfo sb_emlrtRSI{
    99,        // lineNo
    "sumprod", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" // pathName
};

static emlrtRSInfo tb_emlrtRSI{
    74,                      // lineNo
    "combineVectorElements", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "combineVectorElements.m" // pathName
};

static emlrtRSInfo ub_emlrtRSI{
    107,                // lineNo
    "blockedSummation", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo vb_emlrtRSI{
    22,                    // lineNo
    "sumMatrixIncludeNaN", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo wb_emlrtRSI{
    42,                 // lineNo
    "sumMatrixColumns", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo xb_emlrtRSI{
    57,                 // lineNo
    "sumMatrixColumns", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumMatrixIncludeNaN.m" // pathName
};

static emlrtRSInfo ec_emlrtRSI{
    99,                 // lineNo
    "blockedSummation", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

static emlrtRSInfo se_emlrtRSI{
    42,        // lineNo
    "sumprod", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" // pathName
};

static emlrtRSInfo te_emlrtRSI{
    106,                   // lineNo
    "applyToMultipleDims", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "applyToMultipleDims.m" // pathName
};

static emlrtRSInfo ue_emlrtRSI{
    63,                               // lineNo
    "function_handle/parenReference", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "function_handle.m" // pathName
};

static emlrtRSInfo ve_emlrtRSI{
    38,                                                             // lineNo
    "@(x)sumprod(op,x,coder.internal.indexInt(1),varargin{2:end})", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "sumprod.m" // pathName
};

// Function Definitions
namespace coder {
real_T b_sum(const emlrtStack &sp, const ::coder::array<real_T, 2U> &x)
{
  array<real_T, 1U> b_x;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  real_T y;
  int32_T vlen;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &rb_emlrtRSI;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  b_st.site = &se_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  e_st.site = &ve_emlrtRSI;
  f_st.site = &sb_emlrtRSI;
  g_st.site = &tb_emlrtRSI;
  vlen = x.size(0) * x.size(1);
  if (vlen == 0) {
    y = 0.0;
  } else {
    h_st.site = &ub_emlrtRSI;
    i_st.site = &vb_emlrtRSI;
    if (vlen < 4096) {
      b_x = x.reshape(vlen);
      j_st.site = &wb_emlrtRSI;
      y = sumColumnB(j_st, b_x, vlen);
    } else {
      int32_T inb;
      int32_T nfb;
      int32_T nleft;
      nfb = vlen / 4096;
      inb = nfb << 12;
      nleft = vlen - inb;
      b_x = x.reshape(vlen);
      y = sumColumnB4(b_x, 1);
      for (int32_T ib{2}; ib <= nfb; ib++) {
        b_x = x.reshape(vlen);
        y += sumColumnB4(b_x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        b_x = x.reshape(vlen);
        j_st.site = &xb_emlrtRSI;
        y += sumColumnB(j_st, b_x, nleft, inb + 1);
      }
    }
  }
  return y;
}

real_T sum(const emlrtStack &sp, const ::coder::array<real_T, 2U> &x)
{
  array<real_T, 1U> c_x;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &rb_emlrtRSI;
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
  b_st.site = &sb_emlrtRSI;
  c_st.site = &tb_emlrtRSI;
  if (x.size(1) == 0) {
    y = 0.0;
  } else {
    d_st.site = &ec_emlrtRSI;
    e_st.site = &vb_emlrtRSI;
    if (x.size(1) < 4096) {
      int32_T b_x;
      b_x = x.size(1);
      c_x = x.reshape(b_x);
      f_st.site = &wb_emlrtRSI;
      y = sumColumnB(f_st, c_x, x.size(1));
    } else {
      int32_T b_x;
      int32_T inb;
      int32_T nfb;
      int32_T nleft;
      nfb = static_cast<int32_T>(static_cast<uint32_T>(x.size(1)) >> 12);
      inb = nfb << 12;
      nleft = x.size(1) - inb;
      b_x = x.size(1);
      c_x = x.reshape(b_x);
      y = sumColumnB4(c_x, 1);
      if (nfb >= 2) {
        b_x = x.size(1);
      }
      for (int32_T ib{2}; ib <= nfb; ib++) {
        c_x = x.reshape(b_x);
        y += sumColumnB4(c_x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        b_x = x.size(1);
        c_x = x.reshape(b_x);
        f_st.site = &xb_emlrtRSI;
        y += sumColumnB(f_st, c_x, nleft, inb + 1);
      }
    }
  }
  return y;
}

real_T sum(const emlrtStack &sp, const ::coder::array<real_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &rb_emlrtRSI;
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
  b_st.site = &sb_emlrtRSI;
  c_st.site = &tb_emlrtRSI;
  if (x.size(0) == 0) {
    y = 0.0;
  } else {
    d_st.site = &ub_emlrtRSI;
    e_st.site = &vb_emlrtRSI;
    if (x.size(0) < 4096) {
      f_st.site = &wb_emlrtRSI;
      y = sumColumnB(f_st, x, x.size(0));
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
        f_st.site = &xb_emlrtRSI;
        y += sumColumnB(f_st, x, nleft, inb + 1);
      }
    }
  }
  return y;
}

} // namespace coder

// End of code generation (sum.cpp)

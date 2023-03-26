//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// nullAssignment.cpp
//
// Code generation for function 'nullAssignment'
//

// Include files
#include "nullAssignment.h"
#include "eml_int_forloop_overflow_check.h"
#include "lb_x_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo p_emlrtRSI{
    17,               // lineNo
    "nullAssignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo q_emlrtRSI{
    169,                      // lineNo
    "onearg_null_assignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    172,                      // lineNo
    "onearg_null_assignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRSInfo s_emlrtRSI{
    132,        // lineNo
    "num_true", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtRTEInfo f_emlrtRTEI{
    184,                      // lineNo
    9,                        // colNo
    "onearg_null_assignment", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    17,               // lineNo
    9,                // colNo
    "nullAssignment", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void nullAssignment(const emlrtStack *sp, ::coder::array<real_T, 2U> &x,
                    const ::coder::array<boolean_T, 2U> &idx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T k;
  int32_T k0;
  int32_T nxin;
  int32_T nxout;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &o_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  k = idx.size(1);
  while ((k >= 1) && (!idx[k - 1])) {
    k--;
  }
  if (k > x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  st.site = &p_emlrtRSI;
  nxin = x.size(1);
  b_st.site = &q_emlrtRSI;
  nxout = 0;
  k0 = idx.size(1);
  c_st.site = &s_emlrtRSI;
  if (idx.size(1) > 2147483646) {
    d_st.site = &m_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (k = 0; k < k0; k++) {
    nxout += idx[k];
  }
  nxout = x.size(1) - nxout;
  k0 = -1;
  b_st.site = &r_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &m_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < nxin; k++) {
    if ((k + 1 > idx.size(1)) || (!idx[k])) {
      k0++;
      x[k0] = x[k];
    }
  }
  if (nxout > x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (nxout < 1) {
    nxout = 0;
  }
  x.set_size(&cb_emlrtRTEI, &st, x.size(0), nxout);
}

} // namespace internal
} // namespace coder

// End of code generation (nullAssignment.cpp)

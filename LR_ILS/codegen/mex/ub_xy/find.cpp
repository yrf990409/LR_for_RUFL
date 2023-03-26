//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// find.cpp
//
// Code generation for function 'find'
//

// Include files
#include "find.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "ub_xy_data.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo h_emlrtRSI{
    144,        // lineNo
    "eml_find", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    382,                  // lineNo
    "find_first_indices", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRTEInfo b_emlrtRTEI{
    392,                  // lineNo
    1,                    // colNo
    "find_first_indices", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    364,    // lineNo
    24,     // colNo
    "find", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    144,    // lineNo
    9,      // colNo
    "find", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

// Function Definitions
namespace coder {
void eml_find(const emlrtStack *sp, const ::coder::array<boolean_T, 2U> &x,
              ::coder::array<int32_T, 2U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x.size(1);
  st.site = &h_emlrtRSI;
  idx = 0;
  i.set_size(&cb_emlrtRTEI, &st, 1, x.size(1));
  b_st.site = &i_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &j_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx - 1)) {
    if (x[ii]) {
      idx++;
      i[idx - 1] = ii + 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x.size(1) == 1) {
    if (idx == 0) {
      i.set_size(&db_emlrtRTEI, &st, 1, 0);
    }
  } else {
    if (idx < 1) {
      idx = 0;
    }
    i.set_size(&db_emlrtRTEI, &st, i.size(0), idx);
  }
}

} // namespace coder

// End of code generation (find.cpp)

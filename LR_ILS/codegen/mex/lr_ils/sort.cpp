//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sort.cpp
//
// Code generation for function 'sort'
//

// Include files
#include "sort.h"
#include "eml_int_forloop_overflow_check.h"
#include "lr_ils_data.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo
    kd_emlrtRSI{
        76,     // lineNo
        "sort", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" // pathName
    };

static emlrtRSInfo
    ld_emlrtRSI{
        79,     // lineNo
        "sort", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" // pathName
    };

static emlrtRSInfo
    md_emlrtRSI{
        81,     // lineNo
        "sort", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" // pathName
    };

static emlrtRSInfo
    nd_emlrtRSI{
        84,     // lineNo
        "sort", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" // pathName
    };

static emlrtRSInfo
    od_emlrtRSI{
        87,     // lineNo
        "sort", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" // pathName
    };

static emlrtRSInfo
    pd_emlrtRSI{
        90,     // lineNo
        "sort", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" // pathName
    };

static emlrtRTEInfo
    qe_emlrtRTEI{
        56,     // lineNo
        24,     // colNo
        "sort", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" // pName
    };

static emlrtRTEInfo
    re_emlrtRTEI{
        75,     // lineNo
        26,     // colNo
        "sort", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "sort.m" // pName
    };

// Function Definitions
namespace coder {
namespace internal {
void sort(const emlrtStack &sp, ::coder::array<real_T, 1U> &x,
          ::coder::array<int32_T, 1U> &idx)
{
  array<real_T, 1U> vwork;
  array<int32_T, 1U> iidx;
  emlrtStack b_st;
  emlrtStack st;
  int32_T dim;
  int32_T i;
  int32_T vlen;
  int32_T vstride;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  dim = 0;
  if (x.size(0) != 1) {
    dim = -1;
  }
  if (dim + 2 <= 1) {
    i = x.size(0);
  } else {
    i = 1;
  }
  vlen = i - 1;
  vwork.set_size(&qe_emlrtRTEI, &sp, i);
  idx.set_size(&re_emlrtRTEI, &sp, x.size(0));
  st.site = &kd_emlrtRSI;
  vstride = 1;
  for (int32_T k{0}; k <= dim; k++) {
    vstride *= x.size(0);
  }
  st.site = &ld_emlrtRSI;
  st.site = &md_emlrtRSI;
  if (vstride > 2147483646) {
    b_st.site = &gb_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T j{0}; j < vstride; j++) {
    st.site = &nd_emlrtRSI;
    if (i > 2147483646) {
      b_st.site = &gb_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T k{0}; k <= vlen; k++) {
      vwork[k] = x[j + k * vstride];
    }
    st.site = &od_emlrtRSI;
    sortIdx(st, vwork, iidx);
    st.site = &pd_emlrtRSI;
    for (int32_T k{0}; k <= vlen; k++) {
      dim = j + k * vstride;
      x[dim] = vwork[k];
      idx[dim] = iidx[k];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace internal
} // namespace coder

// End of code generation (sort.cpp)

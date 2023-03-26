//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// eml_int_forloop_overflow_check.cpp
//
// Code generation for function 'eml_int_forloop_overflow_check'
//

// Include files
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRTEInfo j_emlrtRTEI{
    87,                             // lineNo
    33,                             // colNo
    "check_forloop_overflow_error", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" // pName
};

// Function Definitions
namespace coder {
void check_forloop_overflow_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(
      sp, &j_emlrtRTEI, "Coder:toolbox:int_forloop_overflow",
      "Coder:toolbox:int_forloop_overflow", 3, 4, 5, "int32");
}

} // namespace coder

// End of code generation (eml_int_forloop_overflow_check.cpp)

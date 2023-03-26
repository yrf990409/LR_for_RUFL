//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rand.cpp
//
// Code generation for function 'rand'
//

// Include files
#include "rand.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder {
real_T b_rand()
{
  real_T r;
  emlrtRandu(&r, 1);
  return r;
}

} // namespace coder

// End of code generation (rand.cpp)

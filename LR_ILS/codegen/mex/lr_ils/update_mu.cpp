//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// update_mu.cpp
//
// Code generation for function 'update_mu'
//

// Include files
#include "update_mu.h"
#include "lr_ils_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                      const coder::array<boolean_T, 2U> &in2)
{
  coder::array<real_T, 2U> b_in1;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(1) == 1) {
    loop_ub = in1.size(1);
  } else {
    loop_ub = in2.size(1);
  }
  b_in1.set_size(&gb_emlrtRTEI, &sp, in1.size(0), loop_ub);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_1 = (in2.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < loop_ub; i++) {
    b_loop_ub = in1.size(0);
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      b_in1[i1 + b_in1.size(0) * i] =
          in1[i1 + in1.size(0) * aux_0_1] - static_cast<real_T>(in2[aux_1_1]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1.set_size(&gb_emlrtRTEI, &sp, b_in1.size(0), b_in1.size(1));
  loop_ub = b_in1.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_loop_ub = b_in1.size(0);
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in1[i1 + b_in1.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (update_mu.cpp)

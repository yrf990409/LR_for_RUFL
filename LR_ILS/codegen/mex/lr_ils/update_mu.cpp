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
#include "abs.h"
#include "eml_int_forloop_overflow_check.h"
#include "lr_ils_data.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo me_emlrtRSI{
    20,          // lineNo
    "update_mu", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pathName
};

static emlrtRSInfo ne_emlrtRSI{
    27,          // lineNo
    "update_mu", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pathName
};

static emlrtRSInfo oe_emlrtRSI{
    29,          // lineNo
    "update_mu", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pathName
};

static emlrtRSInfo pe_emlrtRSI{
    43,          // lineNo
    "update_mu", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pathName
};

static emlrtRSInfo we_emlrtRSI{
    71,      // lineNo
    "power", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/power.m" // pathName
};

static emlrtRSInfo xe_emlrtRSI{
    13,    // lineNo
    "any", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/ops/any.m" // pathName
};

static emlrtRSInfo ye_emlrtRSI{
    143,        // lineNo
    "allOrAny", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "allOrAny.m" // pathName
};

static emlrtBCInfo we_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    19,          // lineNo
    23,          // colNo
    "plan_lb",   // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtBCInfo xe_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    21,          // lineNo
    10,          // colNo
    "temp",      // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtECInfo n_emlrtECI{
    2,           // nDims
    23,          // lineNo
    11,          // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pName
};

static emlrtDCInfo dc_emlrtDCI{
    43,          // lineNo
    24,          // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    1                          // checkKind
};

static emlrtBCInfo ye_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    43,          // lineNo
    24,          // colNo
    "plan_lb",   // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtDCInfo ec_emlrtDCI{
    21,          // lineNo
    13,          // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    1                          // checkKind
};

static emlrtBCInfo af_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    21,          // lineNo
    13,          // colNo
    "temp",      // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtBCInfo bf_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    34,          // lineNo
    15,          // colNo
    "bar_J",     // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtBCInfo cf_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    35,          // lineNo
    17,          // colNo
    "location",  // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtDCInfo fc_emlrtDCI{
    35,          // lineNo
    17,          // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    1                          // checkKind
};

static emlrtBCInfo df_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    42,          // lineNo
    15,          // colNo
    "I",         // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtBCInfo ef_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    42,          // lineNo
    26,          // colNo
    "bar_J",     // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtBCInfo ff_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    48,          // lineNo
    23,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtBCInfo gf_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    48,          // lineNo
    26,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtBCInfo hf_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    48,          // lineNo
    12,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtBCInfo if_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    48,          // lineNo
    15,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtBCInfo jf_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    49,          // lineNo
    15,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtBCInfo kf_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    49,          // lineNo
    17,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtBCInfo lf_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    50,          // lineNo
    16,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtBCInfo mf_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    50,          // lineNo
    18,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m", // pName
    0                          // checkKind
};

static emlrtRTEInfo oe_emlrtRTEI{
    7,           // lineNo
    1,           // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo pe_emlrtRTEI{
    16,          // lineNo
    1,           // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo qe_emlrtRTEI{
    20,          // lineNo
    5,           // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo re_emlrtRTEI{
    20,          // lineNo
    13,          // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo se_emlrtRTEI{
    21,          // lineNo
    13,          // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo te_emlrtRTEI{
    23,          // lineNo
    11,          // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo ue_emlrtRTEI{
    23,          // lineNo
    1,           // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo ve_emlrtRTEI{
    43,          // lineNo
    16,          // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pName
};

static emlrtRSInfo if_emlrtRSI{
    23,          // lineNo
    "update_mu", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/update_mu.m" // pathName
};

// Function Declarations
static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<boolean_T, 2U> &in2);

// Function Definitions
static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<boolean_T, 2U> &in2)
{
  coder::array<real_T, 2U> b_in1;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in2.size(1) == 1) {
    i = in1.size(1);
  } else {
    i = in2.size(1);
  }
  b_in1.set_size(&te_emlrtRTEI, sp, in1.size(0), i);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_1 = (in2.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in2.size(1) == 1) {
    loop_ub = in1.size(1);
  } else {
    loop_ub = in2.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = in1.size(0);
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      b_in1[i1 + b_in1.size(0) * i] =
          in1[i1 + in1.size(0) * aux_0_1] - static_cast<real_T>(in2[aux_1_1]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1.set_size(&te_emlrtRTEI, sp, b_in1.size(0), b_in1.size(1));
  loop_ub = b_in1.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_in1.size(0);
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in1[i1 + b_in1.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void update_mu(const emlrtStack *sp,
               const coder::array<real_T, 2U> &lr_case_bar_J,
               const coder::array<real_T, 2U> &lr_case_I,
               const coder::array<real_T, 2U> &lr_case_mu, real_T lr_para_alpha,
               real_T lr_para_theta_lr, real_T lr_para_kappa_lb,
               boolean_T lr_para_square, real_T lb, real_T ub,
               const coder::array<real_T, 2U> &plan_lb,
               const coder::array<boolean_T, 2U> &location, real_T *cnt_step,
               coder::array<real_T, 2U> &mu, real_T *alpha)
{
  coder::array<real_T, 2U> b_temp;
  coder::array<real_T, 2U> fac_use;
  coder::array<real_T, 2U> temp;
  coder::array<int32_T, 1U> r;
  coder::array<boolean_T, 2U> b_plan_lb;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T a;
  real_T k_step;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T loop_ub;
  int32_T y_j;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  // 乘子更新
  //  提取
  mu.set_size(&oe_emlrtRTEI, sp, lr_case_mu.size(0), lr_case_mu.size(1));
  loop_ub = lr_case_mu.size(0) * lr_case_mu.size(1);
  for (i = 0; i < loop_ub; i++) {
    mu[i] = lr_case_mu[i];
  }
  *alpha = lr_para_alpha;
  //  更新系数
  if (*cnt_step > lr_para_kappa_lb) {
    //  长时间未更新下界则步长因子打折
    *alpha = lr_para_alpha / lr_para_theta_lr;
    //  步长系数打折
    *cnt_step = 0.0;
    //  打折后计数器归零
  }
  temp.set_size(&pe_emlrtRTEI, sp, lr_case_I.size(1), lr_case_bar_J.size(1));
  loop_ub = lr_case_I.size(1) * lr_case_bar_J.size(1);
  for (i = 0; i < loop_ub; i++) {
    temp[i] = 0.0;
  }
  // 记录客户i是否使用了设施j
  //  计算分母
  i = plan_lb.size(0);
  if (plan_lb.size(0) - 1 >= 0) {
    if (plan_lb.size(1) < 2) {
      i1 = 0;
      b_loop_ub = 0;
    } else {
      i1 = 1;
      b_loop_ub = plan_lb.size(1);
    }
    y_j = b_loop_ub - i1;
  }
  for (int32_T b_i{0}; b_i < i; b_i++) {
    int32_T i2;
    int32_T i3;
    if (b_i + 1 > plan_lb.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, plan_lb.size(0), &we_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    //  对于i来说使用了的设施
    i2 = b_loop_ub - i1;
    fac_use.set_size(&qe_emlrtRTEI, sp, 1, i2);
    for (i3 = 0; i3 < y_j; i3++) {
      fac_use[i3] = plan_lb[b_i + plan_lb.size(0) * (i1 + i3)];
    }
    b_plan_lb.set_size(&re_emlrtRTEI, sp, 1, i2);
    for (i2 = 0; i2 < y_j; i2++) {
      b_plan_lb[i2] = (plan_lb[b_i + plan_lb.size(0) * (i1 + i2)] == 0.0);
    }
    st.site = &me_emlrtRSI;
    coder::internal::nullAssignment(&st, fac_use, b_plan_lb);
    r.set_size(&se_emlrtRTEI, sp, fac_use.size(1));
    loop_ub = fac_use.size(1);
    for (i2 = 0; i2 < loop_ub; i2++) {
      if (fac_use[i2] !=
          static_cast<int32_T>(muDoubleScalarFloor(fac_use[i2]))) {
        emlrtIntegerCheckR2012b(fac_use[i2], &ec_emlrtDCI, (emlrtConstCTX)sp);
      }
      i3 = static_cast<int32_T>(fac_use[i2]);
      if ((i3 < 1) || (i3 > temp.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(fac_use[i2]), 1,
                                      temp.size(1), &af_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      r[i2] = i3;
    }
    if (b_i + 1 > temp.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, temp.size(0), &xe_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = r.size(0);
    for (i2 = 0; i2 < loop_ub; i2++) {
      temp[b_i + temp.size(0) * (r[i2] - 1)] = 1.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  if ((temp.size(1) != location.size(1)) &&
      ((temp.size(1) != 1) && (location.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(temp.size(1), location.size(1), &n_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (temp.size(1) == location.size(1)) {
    b_temp.set_size(&te_emlrtRTEI, sp, temp.size(0), temp.size(1));
    loop_ub = temp.size(1);
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = temp.size(0);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        b_temp[i1 + b_temp.size(0) * i] =
            temp[i1 + temp.size(0) * i] - static_cast<real_T>(location[i]);
      }
    }
    temp.set_size(&ue_emlrtRTEI, sp, b_temp.size(0), b_temp.size(1));
    loop_ub = b_temp.size(0) * b_temp.size(1);
    for (i = 0; i < loop_ub; i++) {
      temp[i] = b_temp[i];
    }
  } else {
    st.site = &if_emlrtRSI;
    binary_expand_op(&st, temp, location);
  }
  //  违背约束
  //  计算迭代步长
  if (lr_para_square) {
    st.site = &ne_emlrtRSI;
    b_st.site = &ne_emlrtRSI;
    coder::b_abs(&b_st, temp, b_temp);
    b_st.site = &ne_emlrtRSI;
    a = coder::b_sum(&b_st, b_temp);
    b_st.site = &we_emlrtRSI;
    k_step = lr_para_alpha * (ub - lb) / (a * a);
  } else {
    st.site = &oe_emlrtRSI;
    coder::b_abs(&st, temp, b_temp);
    st.site = &oe_emlrtRSI;
    k_step = lr_para_alpha * (ub - lb) / coder::b_sum(&st, b_temp);
  }
  //  更新乘子
  i = lr_case_bar_J.size(1);
  if (lr_case_bar_J.size(1) - 2 >= 0) {
    i4 = lr_case_I.size(1);
    if (lr_case_I.size(1) - 1 >= 0) {
      if (plan_lb.size(1) < 2) {
        i5 = 0;
        i6 = 0;
      } else {
        i5 = 1;
        i6 = plan_lb.size(1);
      }
      c_loop_ub = i6 - i5;
    }
  }
  for (loop_ub = 0; loop_ub <= i - 2; loop_ub++) {
    real_T j;
    if (loop_ub + 2 > lr_case_bar_J.size(1)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 2, 1, lr_case_bar_J.size(1),
                                    &bf_emlrtBCI, (emlrtConstCTX)sp);
    }
    j = lr_case_bar_J[loop_ub + 1];
    //  j 是设施
    a = lr_case_bar_J[loop_ub + 1];
    if (a != static_cast<int32_T>(muDoubleScalarFloor(a))) {
      emlrtIntegerCheckR2012b(a, &fc_emlrtDCI, (emlrtConstCTX)sp);
    }
    if ((static_cast<int32_T>(a) < 1) ||
        (static_cast<int32_T>(a) > location.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(a), 1,
                                    location.size(1), &cf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    y_j = location[static_cast<int32_T>(a) - 1];
    for (int32_T b_i{0}; b_i < i4; b_i++) {
      boolean_T exitg1;
      boolean_T y;
      if (b_i + 1 > lr_case_I.size(1)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, lr_case_I.size(1),
                                      &df_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (lr_case_bar_J.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(lr_case_bar_J.size(1), 1,
                                      lr_case_bar_J.size(1), &ef_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      a = lr_case_I[b_i] - lr_case_bar_J[lr_case_bar_J.size(1) - 1];
      //  i 是客户
      st.site = &pe_emlrtRSI;
      if (a != static_cast<int32_T>(muDoubleScalarFloor(a))) {
        emlrtIntegerCheckR2012b(a, &dc_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(a) < 1) ||
          (static_cast<int32_T>(a) > plan_lb.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(a), 1,
                                      plan_lb.size(0), &ye_emlrtBCI, &st);
      }
      b_plan_lb.set_size(&ve_emlrtRTEI, &st, 1, i6 - i5);
      for (i1 = 0; i1 < c_loop_ub; i1++) {
        b_plan_lb[i1] =
            (plan_lb[(static_cast<int32_T>(a) + plan_lb.size(0) * (i5 + i1)) -
                     1] == j);
      }
      b_st.site = &xe_emlrtRSI;
      y = false;
      c_st.site = &ye_emlrtRSI;
      if (b_plan_lb.size(1) > 2147483646) {
        d_st.site = &gb_emlrtRSI;
        coder::check_forloop_overflow_error(&d_st);
      }
      b_loop_ub = 1;
      exitg1 = false;
      while ((!exitg1) && (b_loop_ub <= b_plan_lb.size(1))) {
        if (b_plan_lb[b_loop_ub - 1]) {
          y = true;
          exitg1 = true;
        } else {
          b_loop_ub++;
        }
      }
      if ((static_cast<int32_T>(a) < 1) ||
          (static_cast<int32_T>(a) > mu.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(a), 1, mu.size(0),
                                      &ff_emlrtBCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(j) < 1) ||
          (static_cast<int32_T>(j) > mu.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, mu.size(1),
                                      &gf_emlrtBCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(a) < 1) ||
          (static_cast<int32_T>(a) > mu.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(a), 1, mu.size(0),
                                      &hf_emlrtBCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(j) < 1) ||
          (static_cast<int32_T>(j) > mu.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, mu.size(1),
                                      &if_emlrtBCI, (emlrtConstCTX)sp);
      }
      mu[(static_cast<int32_T>(a) +
          mu.size(0) * (static_cast<int32_T>(j) - 1)) -
         1] = mu[(static_cast<int32_T>(a) +
                  mu.size(0) * (static_cast<int32_T>(j) - 1)) -
                 1] +
              k_step * (static_cast<real_T>(y) - static_cast<real_T>(y_j));
      if ((static_cast<int32_T>(a) < 1) ||
          (static_cast<int32_T>(a) > mu.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(a), 1, mu.size(0),
                                      &jf_emlrtBCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(j) < 1) ||
          (static_cast<int32_T>(j) > mu.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, mu.size(1),
                                      &kf_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (mu[(static_cast<int32_T>(a) +
              mu.size(0) * (static_cast<int32_T>(j) - 1)) -
             1] < 0.0) {
        if ((static_cast<int32_T>(a) < 1) ||
            (static_cast<int32_T>(a) > mu.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(a), 1, mu.size(0),
                                        &lf_emlrtBCI, (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(j) < 1) ||
            (static_cast<int32_T>(j) > mu.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, mu.size(1),
                                        &mf_emlrtBCI, (emlrtConstCTX)sp);
        }
        mu[(static_cast<int32_T>(a) +
            mu.size(0) * (static_cast<int32_T>(j) - 1)) -
           1] = 0.0;
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (update_mu.cpp)

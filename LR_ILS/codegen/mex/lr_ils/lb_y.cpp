//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lb_y.cpp
//
// Code generation for function 'lb_y'
//

// Include files
#include "lb_y.h"
#include "lr_ils_data.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo qb_emlrtRSI{
    18,                                                           // lineNo
    "lb_y",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_y.m" // pathName
};

static emlrtBCInfo db_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    17,                                                            // lineNo
    17,                                                            // colNo
    "bar_J",                                                       // aName
    "lb_y",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_y.m", // pName
    0                                                              // checkKind
};

static emlrtDCInfo m_emlrtDCI{
    18,                                                            // lineNo
    23,                                                            // colNo
    "lb_y",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_y.m", // pName
    1                                                              // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    18,                                                            // lineNo
    23,                                                            // colNo
    "mu",                                                          // aName
    "lb_y",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_y.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    19,                                                            // lineNo
    20,                                                            // colNo
    "data.fix",                                                    // aName
    "lb_y",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_y.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    24,                                                            // lineNo
    18,                                                            // colNo
    "location",                                                    // aName
    "lb_y",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_y.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    22,                                                            // lineNo
    18,                                                            // colNo
    "location",                                                    // aName
    "lb_y",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_y.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo ib_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    25,                                                            // lineNo
    22,                                                            // colNo
    "cost_for_fac",                                                // aName
    "lb_y",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_y.m", // pName
    0                                                              // checkKind
};

static emlrtRTEInfo ob_emlrtRTEI{
    13,                                                           // lineNo
    1,                                                            // colNo
    "lb_y",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_y.m" // pName
};

static emlrtRTEInfo pb_emlrtRTEI{
    14,                                                           // lineNo
    1,                                                            // colNo
    "lb_y",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_y.m" // pName
};

static emlrtRTEInfo qb_emlrtRTEI{
    18,                                                           // lineNo
    18,                                                           // colNo
    "lb_y",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_y.m" // pName
};

// Function Definitions
void lb_y(const emlrtStack &sp,
          const coder::array<real_T, 1U> &lr_case_data_fix,
          const coder::array<real_T, 2U> &lr_case_bar_J,
          const coder::array<real_T, 2U> &lr_case_mu,
          coder::array<real_T, 2U> &cost_for_fac,
          coder::array<boolean_T, 2U> &location)
{
  coder::array<real_T, 1U> b_lr_case_mu;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  // LB_Y获取y变量的下界
  //  给定一个乘子，返回y的最佳选址location以及设施建设成本cost_for_fac
  //  公式
  //  \min \sum_{j\in j} (f_j - \sum_{i\in i} mu_{ij}) y_j
  //  初始化
  location.set_size(&ob_emlrtRTEI, &sp, 1, lr_case_bar_J.size(1));
  loop_ub = lr_case_bar_J.size(1);
  //  选址方案
  cost_for_fac.set_size(&pb_emlrtRTEI, &sp, 1, lr_case_bar_J.size(1));
  for (i = 0; i < loop_ub; i++) {
    location[i] = false;
    cost_for_fac[i] = 0.0;
  }
  //  下界Sub_1问题的目标函数
  i = lr_case_bar_J.size(1);
  for (int32_T j{0}; j <= i - 2; j++) {
    real_T d;
    real_T d1;
    real_T sum_mu;
    boolean_T b;
    if (j + 2 > lr_case_bar_J.size(1)) {
      emlrtDynamicBoundsCheckR2012b(j + 2, 1, lr_case_bar_J.size(1),
                                    &db_emlrtBCI, (emlrtConstCTX)&sp);
    }
    d = lr_case_bar_J[j + 1];
    if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
      emlrtIntegerCheckR2012b(d, &m_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d) < 1) ||
        (static_cast<int32_T>(d) > lr_case_mu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                    lr_case_mu.size(1), &eb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    loop_ub = lr_case_mu.size(0);
    b_lr_case_mu.set_size(&qb_emlrtRTEI, &sp, lr_case_mu.size(0));
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_lr_case_mu[i1] =
          lr_case_mu[i1 + lr_case_mu.size(0) * (static_cast<int32_T>(d) - 1)];
    }
    st.site = &qb_emlrtRSI;
    sum_mu = coder::sum(st, b_lr_case_mu);
    //  \sum_{i\in i} mu_{ij}
    b = ((static_cast<int32_T>(d) < 1) ||
         (static_cast<int32_T>(d) > lr_case_data_fix.size(0)));
    if (b) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                    lr_case_data_fix.size(0), &fb_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    //  判别
    d1 = lr_case_data_fix[static_cast<int32_T>(d) - 1];
    if (d1 - sum_mu > 0.0) {
      //  判别数大于0 不选这个位置
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > location.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                      location.size(1), &hb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      location[static_cast<int32_T>(d) - 1] = false;
    } else {
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > location.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                      location.size(1), &gb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      location[static_cast<int32_T>(d) - 1] = true;
      //  小于等于0 选
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > cost_for_fac.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                      cost_for_fac.size(1), &ib_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      cost_for_fac[static_cast<int32_T>(d) - 1] = d1 - sum_mu;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (lb_y.cpp)

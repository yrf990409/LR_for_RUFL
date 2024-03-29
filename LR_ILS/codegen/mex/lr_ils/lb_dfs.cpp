//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lb_dfs.cpp
//
// Code generation for function 'lb_dfs'
//

// Include files
#include "lb_dfs.h"
#include "lr_ils_data.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ob_emlrtRSI{
    48,                                                             // lineNo
    "lb_dfs",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m" // pathName
};

static emlrtRSInfo pb_emlrtRSI{
    50,                                                             // lineNo
    "lb_dfs",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m" // pathName
};

static emlrtBCInfo xd_emlrtBCI{
    -1,                                                              // iFirst
    -1,                                                              // iLast
    6,                                                               // lineNo
    10,                                                              // colNo
    "r",                                                             // aName
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    0 // checkKind
};

static emlrtBCInfo yd_emlrtBCI{
    -1,                                                              // iFirst
    -1,                                                              // iLast
    41,                                                              // lineNo
    32,                                                              // colNo
    "fac",                                                           // aName
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    0 // checkKind
};

static emlrtBCInfo ae_emlrtBCI{
    -1,                                                              // iFirst
    -1,                                                              // iLast
    42,                                                              // lineNo
    52,                                                              // colNo
    "cost_mat",                                                      // aName
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    0 // checkKind
};

static emlrtDCInfo sb_emlrtDCI{
    42,                                                              // lineNo
    52,                                                              // colNo
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    1 // checkKind
};

static emlrtBCInfo be_emlrtBCI{
    -1,                                                              // iFirst
    -1,                                                              // iLast
    42,                                                              // lineNo
    54,                                                              // colNo
    "r",                                                             // aName
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    0 // checkKind
};

static emlrtBCInfo ce_emlrtBCI{
    -1,                                                              // iFirst
    -1,                                                              // iLast
    42,                                                              // lineNo
    61,                                                              // colNo
    "cost_mat",                                                      // aName
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    0 // checkKind
};

static emlrtDCInfo tb_emlrtDCI{
    42,                                                              // lineNo
    61,                                                              // colNo
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    1 // checkKind
};

static emlrtBCInfo de_emlrtBCI{
    -1,                                                              // iFirst
    -1,                                                              // iLast
    42,                                                              // lineNo
    63,                                                              // colNo
    "r",                                                             // aName
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    0 // checkKind
};

static emlrtBCInfo ee_emlrtBCI{
    -1,                                                              // iFirst
    -1,                                                              // iLast
    42,                                                              // lineNo
    97,                                                              // colNo
    "cus_mu",                                                        // aName
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    0 // checkKind
};

static emlrtDCInfo ub_emlrtDCI{
    42,                                                              // lineNo
    97,                                                              // colNo
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    1 // checkKind
};

static emlrtBCInfo fe_emlrtBCI{
    -1,                                                              // iFirst
    -1,                                                              // iLast
    42,                                                              // lineNo
    101,                                                             // colNo
    "fac",                                                           // aName
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    0 // checkKind
};

static emlrtBCInfo ge_emlrtBCI{
    -1,                                                              // iFirst
    -1,                                                              // iLast
    48,                                                              // lineNo
    48,                                                              // colNo
    "fac",                                                           // aName
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    0 // checkKind
};

static emlrtBCInfo he_emlrtBCI{
    -1,                                                              // iFirst
    -1,                                                              // iLast
    49,                                                              // lineNo
    54,                                                              // colNo
    "probDisr",                                                      // aName
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    0 // checkKind
};

static emlrtDCInfo vb_emlrtDCI{
    49,                                                              // lineNo
    54,                                                              // colNo
    "lb_dfs",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m", // pName
    1 // checkKind
};

static emlrtRTEInfo fd_emlrtRTEI{
    37,                                                             // lineNo
    21,                                                             // colNo
    "lb_dfs",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m" // pName
};

static emlrtRTEInfo gd_emlrtRTEI{
    1,                                                              // lineNo
    24,                                                             // colNo
    "lb_dfs",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m" // pName
};

static emlrtRTEInfo hd_emlrtRTEI{
    48,                                                             // lineNo
    25,                                                             // colNo
    "lb_dfs",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m" // pName
};

static emlrtRTEInfo id_emlrtRTEI{
    48,                                                             // lineNo
    34,                                                             // colNo
    "lb_dfs",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m" // pName
};

static emlrtRTEInfo jd_emlrtRTEI{
    50,                                                             // lineNo
    46,                                                             // colNo
    "lb_dfs",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m" // pName
};

static emlrtRTEInfo kd_emlrtRTEI{
    51,                                                             // lineNo
    25,                                                             // colNo
    "lb_dfs",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m" // pName
};

static emlrtRTEInfo ld_emlrtRTEI{
    45,                                                             // lineNo
    25,                                                             // colNo
    "lb_dfs",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m" // pName
};

static emlrtRTEInfo md_emlrtRTEI{
    31,                                                             // lineNo
    21,                                                             // colNo
    "lb_dfs",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m" // pName
};

static emlrtRTEInfo nd_emlrtRTEI{
    21,                                                             // lineNo
    17,                                                             // colNo
    "lb_dfs",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m" // pName
};

static emlrtRTEInfo od_emlrtRTEI{
    10,                                                             // lineNo
    13,                                                             // colNo
    "lb_dfs",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_dfs.m" // pName
};

// Function Declarations
static void lb_dfs(const emlrtStack *sp, coder::array<real_T, 2U> &r,
                   coder::array<real_T, 2U> &best_r, real_T *ub,
                   real_T cur_cost, real_T cur_prob,
                   const coder::array<real_T, 2U> &fac, real_T cus_dmd,
                   const coder::array<real_T, 2U> &cost_mat, real_T R,
                   real_T pi, const coder::array<real_T, 1U> &probDisr,
                   const coder::array<real_T, 2U> &cus_mu);

// Function Definitions
static void lb_dfs(const emlrtStack *sp, coder::array<real_T, 2U> &r,
                   coder::array<real_T, 2U> &best_r, real_T *ub,
                   real_T cur_cost, real_T cur_prob,
                   const coder::array<real_T, 2U> &fac, real_T cus_dmd,
                   const coder::array<real_T, 2U> &cost_mat, real_T R,
                   real_T pi, const coder::array<real_T, 1U> &probDisr,
                   const coder::array<real_T, 2U> &cus_mu)
{
  coder::array<real_T, 2U> b_r;
  coder::array<real_T, 2U> stackR;
  coder::array<real_T, 2U> tempFacy;
  coder::array<boolean_T, 2U> b_fac;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b((emlrtConstCTX)sp);
  }
  //  global x
  //  x = x+1
  if (r.size(1) <= R + 1.0) {
    //  没有到达设施数量的上界
    if (r.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(r.size(1), 1, r.size(1), &xd_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (r[r.size(1) - 1] == 1.0) {
      //  如果结尾是虚拟，那么获得了一个完整路径
      if (cur_cost < *ub) {
        int32_T loop_ub;
        //  小于上界 则更新
        *ub = cur_cost;
        best_r.set_size(&od_emlrtRTEI, sp, 1, r.size(1));
        loop_ub = r.size(1);
        for (int32_T i{0}; i < loop_ub; i++) {
          best_r[i] = r[i];
        }
      }

      //  否则不是一个完整路径
    } else if (fac.size(1) == 0) {
      real_T tempCost;
      int32_T i;
      //  没有设施可以填充了，route最后一个不以虚拟结尾
      i = r.size(1);
      r.set_size(&gd_emlrtRTEI, sp, r.size(0), r.size(1) + 1);
      r[i] = 1.0;
      //  route必须是虚拟收尾了
      tempCost = cur_cost + cus_dmd * pi * cur_prob;
      if (tempCost < *ub) {
        int32_T loop_ub;
        //  小于上界 则更新
        *ub = tempCost;
        best_r.set_size(&nd_emlrtRTEI, sp, 1, r.size(1));
        loop_ub = r.size(1);
        for (i = 0; i < loop_ub; i++) {
          best_r[i] = r[i];
        }
      }

      //  还有设施可以填充
    } else if (r.size(1) == R + 1.0) {
      real_T tempCost;
      int32_T i;
      //  已经填满，放不下了，只差一个虚拟设施
      i = r.size(1);
      r.set_size(&gd_emlrtRTEI, sp, r.size(0), r.size(1) + 1);
      r[i] = 1.0;
      //  route必须是0收尾了
      tempCost = cur_cost + cus_dmd * pi * cur_prob;
      if (tempCost < *ub) {
        int32_T loop_ub;
        //  小于上界 则更新
        *ub = tempCost;
        best_r.set_size(&md_emlrtRTEI, sp, 1, r.size(1));
        loop_ub = r.size(1);
        for (i = 0; i < loop_ub; i++) {
          best_r[i] = r[i];
        }
      }
    } else {
      int32_T i;
      //  向下继续分支
      i = fac.size(1);
      for (int32_T b_i{0}; b_i < i; b_i++) {
        real_T d;
        real_T d1;
        real_T r_tmp;
        real_T stackP;
        real_T tempCost;
        int32_T i1;
        int32_T loop_ub;
        boolean_T b;
        //  i : index of facilities
        stackR.set_size(&fd_emlrtRTEI, sp, 1, r.size(1));
        loop_ub = r.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          stackR[i1] = r[i1];
        }
        stackP = cur_prob;
        i1 = r.size(1);
        r.set_size(&gd_emlrtRTEI, sp, r.size(0), r.size(1) + 1);
        if (b_i + 1 > fac.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, fac.size(1), &yd_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        r_tmp = fac[b_i];
        r[i1] = r_tmp;
        if ((r.size(1) - 1 < 1) || (r.size(1) - 1 > r.size(1))) {
          emlrtDynamicBoundsCheckR2012b(r.size(1) - 1, 1, r.size(1),
                                        &be_emlrtBCI, (emlrtConstCTX)sp);
        }
        tempCost = r[r.size(1) - 2];
        if (tempCost != static_cast<int32_T>(muDoubleScalarFloor(tempCost))) {
          emlrtIntegerCheckR2012b(tempCost, &sb_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(tempCost) < 1) ||
            (static_cast<int32_T>(tempCost) > cost_mat.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(tempCost), 1,
                                        cost_mat.size(0), &ae_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        b = (r.size(1) < 1);
        if (b) {
          emlrtDynamicBoundsCheckR2012b(r.size(1), 1, r.size(1), &de_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        d = r[r.size(1) - 1];
        d1 = static_cast<int32_T>(muDoubleScalarFloor(d));
        if (d != d1) {
          emlrtIntegerCheckR2012b(d, &tb_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(d) < 1) ||
            (static_cast<int32_T>(d) > cost_mat.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                        cost_mat.size(1), &ce_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (b_i + 1 > fac.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, fac.size(1), &fe_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (r_tmp != static_cast<int32_T>(muDoubleScalarFloor(r_tmp))) {
          emlrtIntegerCheckR2012b(r_tmp, &ub_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(r_tmp) < 1) ||
            (static_cast<int32_T>(r_tmp) > cus_mu.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(r_tmp), 1,
                                        cus_mu.size(1), &ee_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        tempCost =
            (cur_cost +
             cost_mat[(static_cast<int32_T>(tempCost) +
                       cost_mat.size(0) * (static_cast<int32_T>(d) - 1)) -
                      1] *
                 cur_prob * cus_dmd) +
            cus_mu[static_cast<int32_T>(r_tmp) - 1];
        if (tempCost > *ub) {
          //  剪枝
          r.set_size(&ld_emlrtRTEI, sp, 1, stackR.size(1));
          loop_ub = stackR.size(1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            r[i1] = stackR[i1];
          }
          //  直接恢复不再细分
        } else {
          //  递归 继续分支
          loop_ub = fac.size(1);
          tempFacy.set_size(&hd_emlrtRTEI, sp, 1, fac.size(1));
          for (i1 = 0; i1 < loop_ub; i1++) {
            tempFacy[i1] = fac[i1];
          }
          if (b_i + 1 > fac.size(1)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, fac.size(1), &ge_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          loop_ub = fac.size(1);
          b_fac.set_size(&id_emlrtRTEI, sp, 1, fac.size(1));
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_fac[i1] = (fac[i1] == r_tmp);
          }
          st.site = &ob_emlrtRSI;
          coder::internal::nullAssignment(st, tempFacy, b_fac);
          if (d != d1) {
            emlrtIntegerCheckR2012b(d, &vb_emlrtDCI, (emlrtConstCTX)sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > probDisr.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          probDisr.size(0), &he_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          cur_prob *= probDisr[static_cast<int32_T>(d) - 1];
          b_r.set_size(&jd_emlrtRTEI, sp, 1, r.size(1));
          loop_ub = r.size(0) * r.size(1) - 1;
          for (i1 = 0; i1 <= loop_ub; i1++) {
            b_r[i1] = r[i1];
          }
          st.site = &pb_emlrtRSI;
          lb_dfs(&st, b_r, best_r, ub, tempCost, cur_prob, tempFacy, cus_dmd,
                 cost_mat, R, pi, probDisr, cus_mu);
          r.set_size(&kd_emlrtRTEI, sp, 1, stackR.size(1));
          loop_ub = stackR.size(1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            r[i1] = stackR[i1];
          }
          cur_prob = stackP;
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void lb_dfs(const emlrtStack &sp, real_T r_data[], int32_T r_size[2],
            coder::array<real_T, 2U> &best_r, real_T &ub,
            const coder::array<real_T, 2U> &fac, real_T cus_dmd,
            const coder::array<real_T, 2U> &cost_mat, real_T R, real_T pi,
            const coder::array<real_T, 1U> &probDisr,
            const coder::array<real_T, 2U> &cus_mu)
{
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> tempFacy;
  coder::array<boolean_T, 2U> b_fac;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  //  global x
  //  x = x+1
  if (R + 1.0 >= 1.0) {
    //  没有到达设施数量的上界
    if (r_data[0] == 1.0) {
      //  如果结尾是虚拟，那么获得了一个完整路径
      if (ub > 0.0) {
        int32_T loop_ub;
        //  小于上界 则更新
        ub = 0.0;
        best_r.set_size(&od_emlrtRTEI, &sp, 1, r_size[1]);
        loop_ub = r_size[1];
        for (int32_T i{0}; i < loop_ub; i++) {
          best_r[i] = r_data[i];
        }
      }

      //  否则不是一个完整路径
    } else if (fac.size(1) == 0) {
      real_T tempCost;
      int32_T i;
      //  没有设施可以填充了，route最后一个不以虚拟结尾
      i = r_size[1];
      r_size[1]++;
      r_data[i] = 1.0;
      //  route必须是虚拟收尾了
      tempCost = cus_dmd * pi;
      if (tempCost < ub) {
        int32_T loop_ub;
        //  小于上界 则更新
        ub = tempCost;
        best_r.set_size(&nd_emlrtRTEI, &sp, 1, r_size[1]);
        loop_ub = r_size[1];
        for (i = 0; i < loop_ub; i++) {
          best_r[i] = r_data[i];
        }
      }

      //  还有设施可以填充
    } else if (R + 1.0 == 1.0) {
      real_T tempCost;
      int32_T i;
      //  已经填满，放不下了，只差一个虚拟设施
      i = r_size[1];
      r_size[1]++;
      r_data[i] = 1.0;
      //  route必须是0收尾了
      tempCost = cus_dmd * pi;
      if (tempCost < ub) {
        int32_T loop_ub;
        //  小于上界 则更新
        ub = tempCost;
        best_r.set_size(&md_emlrtRTEI, &sp, 1, r_size[1]);
        loop_ub = r_size[1];
        for (i = 0; i < loop_ub; i++) {
          best_r[i] = r_data[i];
        }
      }
    } else {
      int32_T i;
      //  向下继续分支
      i = fac.size(1);
      for (int32_T b_i{0}; b_i < i; b_i++) {
        real_T r_tmp;
        real_T stackR_data;
        real_T tempCost;
        int32_T i1;
        int32_T i2;
        int32_T i3;
        int32_T i4;
        //  i : index of facilities
        stackR_data = r_data[0];
        i1 = r_size[1] + 1;
        if (b_i + 1 > fac.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, fac.size(1), &yd_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        r_tmp = fac[b_i];
        r_data[r_size[1]] = r_tmp;
        if (r_data[0] != static_cast<int32_T>(muDoubleScalarFloor(r_data[0]))) {
          emlrtIntegerCheckR2012b(r_data[0], &sb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        i2 = static_cast<int32_T>(r_data[0]);
        if ((i2 < 1) || (i2 > cost_mat.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, cost_mat.size(0), &ae_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        i3 = static_cast<int32_T>(muDoubleScalarFloor(r_data[1]));
        if (r_data[1] != i3) {
          emlrtIntegerCheckR2012b(r_data[1], &tb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        i4 = static_cast<int32_T>(r_data[1]);
        if ((i4 < 1) || (i4 > cost_mat.size(1))) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, cost_mat.size(1), &ce_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (b_i + 1 > fac.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, fac.size(1), &fe_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (r_tmp != static_cast<int32_T>(muDoubleScalarFloor(r_tmp))) {
          emlrtIntegerCheckR2012b(r_tmp, &ub_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(r_tmp) < 1) ||
            (static_cast<int32_T>(r_tmp) > cus_mu.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(r_tmp), 1,
                                        cus_mu.size(1), &ee_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        tempCost = cost_mat[(i2 + cost_mat.size(0) * (i4 - 1)) - 1] * cus_dmd +
                   cus_mu[static_cast<int32_T>(r_tmp) - 1];
        if (tempCost > ub) {
          //  剪枝
          r_size[0] = 1;
          r_size[1] = 1;
          r_data[0] = stackR_data;
          //  直接恢复不再细分
        } else {
          int32_T loop_ub;
          //  递归 继续分支
          loop_ub = fac.size(1);
          tempFacy.set_size(&hd_emlrtRTEI, &sp, 1, fac.size(1));
          for (i2 = 0; i2 < loop_ub; i2++) {
            tempFacy[i2] = fac[i2];
          }
          if (b_i + 1 > fac.size(1)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, fac.size(1), &ge_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          loop_ub = fac.size(1);
          b_fac.set_size(&id_emlrtRTEI, &sp, 1, fac.size(1));
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_fac[i2] = (fac[i2] == r_tmp);
          }
          st.site = &ob_emlrtRSI;
          coder::internal::nullAssignment(st, tempFacy, b_fac);
          if (r_data[1] != i3) {
            emlrtIntegerCheckR2012b(r_data[1], &vb_emlrtDCI,
                                    (emlrtConstCTX)&sp);
          }
          if (i4 > probDisr.size(0)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, probDisr.size(0), &he_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r.set_size(&jd_emlrtRTEI, &sp, 1, i1);
          loop_ub = r_size[0] * (r_size[1] + 1) - 1;
          for (i1 = 0; i1 <= loop_ub; i1++) {
            r[i1] = r_data[i1];
          }
          st.site = &pb_emlrtRSI;
          lb_dfs(&st, r, best_r, &ub, tempCost, probDisr[i4 - 1], tempFacy,
                 cus_dmd, cost_mat, R, pi, probDisr, cus_mu);
          r_size[0] = 1;
          r_size[1] = 1;
          r_data[0] = stackR_data;
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (lb_dfs.cpp)

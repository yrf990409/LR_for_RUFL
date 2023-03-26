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
#include "lb_x_data.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtBCInfo qb_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    6,        // lineNo
    10,       // colNo
    "r",      // aName
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rb_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    42,       // lineNo
    54,       // colNo
    "r",      // aName
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sb_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    42,       // lineNo
    63,       // colNo
    "r",      // aName
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tb_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    49,       // lineNo
    56,       // colNo
    "r",      // aName
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo r_emlrtRTEI{
    37,       // lineNo
    21,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    51,       // lineNo
    25,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    45,       // lineNo
    25,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    1,        // lineNo
    24,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m" // pName
};

// Function Definitions
void lb_dfs(const emlrtStack *sp, coder::array<real_T, 2U> &r,
            coder::array<real_T, 2U> &best_r, real_T *ub, real_T cur_cost,
            real_T cur_prob, const coder::array<real_T, 2U> &fac,
            real_T cus_dmd, const coder::array<real_T, 2U> &cost_mat, real_T R,
            real_T pi, const coder::array<real_T, 1U> &probDisr,
            const coder::array<real_T, 2U> &cus_mu)
{
  coder::array<real_T, 2U> b_r;
  coder::array<real_T, 2U> stackR;
  coder::array<real_T, 2U> tempFacy;
  coder::array<boolean_T, 2U> c_fac;
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
      emlrtDynamicBoundsCheckR2012b(r.size(1), 1, r.size(1), &qb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (r[r.size(1) - 1] == 1.0) {
      //  如果结尾是虚拟，那么获得了一个完整路径
      if (cur_cost < *ub) {
        int32_T loop_ub;
        //  小于上界 则更新
        *ub = cur_cost;
        best_r.set_size(&ab_emlrtRTEI, sp, 1, r.size(1));
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
      r.set_size(&db_emlrtRTEI, sp, r.size(0), r.size(1) + 1);
      r[i] = 1.0;
      //  route必须是虚拟收尾了
      tempCost = cur_cost + cus_dmd * pi * cur_prob;
      if (tempCost < *ub) {
        int32_T loop_ub;
        //  小于上界 则更新
        *ub = tempCost;
        best_r.set_size(&y_emlrtRTEI, sp, 1, r.size(1));
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
      r.set_size(&db_emlrtRTEI, sp, r.size(0), r.size(1) + 1);
      r[i] = 1.0;
      //  route必须是0收尾了
      tempCost = cur_cost + cus_dmd * pi * cur_prob;
      if (tempCost < *ub) {
        int32_T loop_ub;
        //  小于上界 则更新
        *ub = tempCost;
        best_r.set_size(&x_emlrtRTEI, sp, 1, r.size(1));
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
        real_T b_fac;
        real_T d;
        real_T stackP;
        real_T tempCost;
        int32_T i1;
        int32_T loop_ub;
        //  i : index of facilities
        stackR.set_size(&r_emlrtRTEI, sp, 1, r.size(1));
        loop_ub = r.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          stackR[i1] = r[i1];
        }
        stackP = cur_prob;
        i1 = r.size(1);
        r.set_size(&db_emlrtRTEI, sp, r.size(0), r.size(1) + 1);
        if (b_i + 1 > fac.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, fac.size(1), &fb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        r[i1] = fac[b_i];
        if ((r.size(1) - 1 < 1) || (r.size(1) - 1 > r.size(1))) {
          emlrtDynamicBoundsCheckR2012b(r.size(1) - 1, 1, r.size(1),
                                        &rb_emlrtBCI, (emlrtConstCTX)sp);
        }
        d = r[r.size(1) - 2];
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &q_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(d) < 1) ||
            (static_cast<int32_T>(d) > cost_mat.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                        cost_mat.size(0), &gb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (r.size(1) < 1) {
          emlrtDynamicBoundsCheckR2012b(r.size(1), 1, r.size(1), &sb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        b_fac = r[r.size(1) - 1];
        if (b_fac != static_cast<int32_T>(muDoubleScalarFloor(b_fac))) {
          emlrtIntegerCheckR2012b(b_fac, &r_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(b_fac) < 1) ||
            (static_cast<int32_T>(b_fac) > cost_mat.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_fac), 1,
                                        cost_mat.size(1), &hb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (b_i + 1 > fac.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, fac.size(1), &jb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        tempCost = fac[b_i];
        if (tempCost != static_cast<int32_T>(muDoubleScalarFloor(tempCost))) {
          emlrtIntegerCheckR2012b(tempCost, &s_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(tempCost) < 1) ||
            (static_cast<int32_T>(tempCost) > cus_mu.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(tempCost), 1,
                                        cus_mu.size(1), &ib_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        tempCost =
            (cur_cost +
             cost_mat[(static_cast<int32_T>(d) +
                       cost_mat.size(0) * (static_cast<int32_T>(b_fac) - 1)) -
                      1] *
                 cur_prob * cus_dmd) +
            cus_mu[static_cast<int32_T>(tempCost) - 1];
        if (tempCost > *ub) {
          //  剪枝
          r.set_size(&w_emlrtRTEI, sp, 1, stackR.size(1));
          loop_ub = stackR.size(1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            r[i1] = stackR[i1];
          }
          //  直接恢复不再细分
        } else {
          //  递归 继续分支
          tempFacy.set_size(&s_emlrtRTEI, sp, 1, fac.size(1));
          loop_ub = fac.size(1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            tempFacy[i1] = fac[i1];
          }
          if (b_i + 1 > fac.size(1)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, fac.size(1), &kb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          b_fac = fac[b_i];
          c_fac.set_size(&t_emlrtRTEI, sp, 1, fac.size(1));
          loop_ub = fac.size(1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            c_fac[i1] = (fac[i1] == b_fac);
          }
          st.site = &t_emlrtRSI;
          coder::internal::nullAssignment(&st, tempFacy, c_fac);
          if (r.size(1) < 1) {
            emlrtDynamicBoundsCheckR2012b(r.size(1), 1, r.size(1), &tb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          d = r[r.size(1) - 1];
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &emlrtDCI, (emlrtConstCTX)sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > probDisr.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          probDisr.size(0), &p_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          cur_prob *= probDisr[static_cast<int32_T>(d) - 1];
          b_r.set_size(&u_emlrtRTEI, sp, 1, r.size(1));
          loop_ub = r.size(0) * r.size(1) - 1;
          for (i1 = 0; i1 <= loop_ub; i1++) {
            b_r[i1] = r[i1];
          }
          st.site = &u_emlrtRSI;
          lb_dfs(&st, b_r, best_r, ub, tempCost, cur_prob, tempFacy, cus_dmd,
                 cost_mat, R, pi, probDisr, cus_mu);
          r.set_size(&v_emlrtRTEI, sp, 1, stackR.size(1));
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

// End of code generation (lb_dfs.cpp)

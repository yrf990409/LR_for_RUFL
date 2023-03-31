//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_lr_ils_api.cpp
//
// Code generation for function '_coder_lr_ils_api'
//

// Include files
#include "_coder_lr_ils_api.h"
#include "lr_ils.h"
#include "lr_ils_data.h"
#include "lr_ils_mexutil.h"
#include "lr_ils_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Declarations
static boolean_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static boolean_T d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *lr_para,
                             const char_T *identifier, struct0_T &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct0_T &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *lr_case,
                             const char_T *identifier, struct1_T &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct1_T &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct2_T &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 2U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y);

static const mxArray *emlrt_marshallOut(const struct3_T &u);

// Function Definitions
static boolean_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = d_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret)
{
  static const int32_T dims{-1};
  int32_T i;
  boolean_T b{true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, i);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &(ret.data())[0], 8, false);
  emlrtDestroyArray(&src);
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, -1};
  int32_T iv[2];
  boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static boolean_T d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "logical", false, 0U,
                          (const void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{1, -1};
  int32_T iv[2];
  boolean_T bv[2]{false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *lr_para,
                             const char_T *identifier, struct0_T &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(lr_para), &thisId, y);
  emlrtDestroyArray(&lr_para);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct0_T &y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[18]{
      "alpha",       "alpha_min", "theta_lr",  "kappa_lb", "eta_lr",
      "tau_lim",     "xi",        "theta_sa",  "T_lim",    "kappa_ub",
      "kappa_ubdfs", "eta_ils",   "grb_model", "grb_ub",   "dfs_gap",
      "print",       "ils",       "square"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)&sp, parentId, u, 18,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "alpha";
  y.alpha = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 0, "alpha")),
      &thisId);
  thisId.fIdentifier = "alpha_min";
  y.alpha_min = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 1, "alpha_min")),
      &thisId);
  thisId.fIdentifier = "theta_lr";
  y.theta_lr = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 2, "theta_lr")),
      &thisId);
  thisId.fIdentifier = "kappa_lb";
  y.kappa_lb = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 3, "kappa_lb")),
      &thisId);
  thisId.fIdentifier = "eta_lr";
  y.eta_lr = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 4, "eta_lr")),
      &thisId);
  thisId.fIdentifier = "tau_lim";
  y.tau_lim = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 5, "tau_lim")),
      &thisId);
  thisId.fIdentifier = "xi";
  y.xi = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 6, "xi")),
      &thisId);
  thisId.fIdentifier = "theta_sa";
  y.theta_sa = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 7, "theta_sa")),
      &thisId);
  thisId.fIdentifier = "T_lim";
  y.T_lim = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 8, "T_lim")),
      &thisId);
  thisId.fIdentifier = "kappa_ub";
  y.kappa_ub = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 9, "kappa_ub")),
      &thisId);
  thisId.fIdentifier = "kappa_ubdfs";
  y.kappa_ubdfs =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0,
                                                      10, "kappa_ubdfs")),
                       &thisId);
  thisId.fIdentifier = "eta_ils";
  y.eta_ils = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 11, "eta_ils")),
      &thisId);
  thisId.fIdentifier = "grb_model";
  y.grb_model =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0,
                                                      12, "grb_model")),
                       &thisId);
  thisId.fIdentifier = "grb_ub";
  y.grb_ub = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 13, "grb_ub")),
      &thisId);
  thisId.fIdentifier = "dfs_gap";
  y.dfs_gap = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 14, "dfs_gap")),
      &thisId);
  thisId.fIdentifier = "print";
  y.print = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 15, "print")),
      &thisId);
  thisId.fIdentifier = "ils";
  y.ils = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 16, "ils")),
      &thisId);
  thisId.fIdentifier = "square";
  y.square = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 17, "square")),
      &thisId);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *lr_case,
                             const char_T *identifier, struct1_T &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(lr_case), &thisId, y);
  emlrtDestroyArray(&lr_case);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct1_T &y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[10]{
      "data",     "rho",     "q",     "max_try", "cus_num",
      "node_num", "fac_num", "bar_J", "I",       "mu"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)&sp, parentId, u, 10,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "data";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 0, "data")),
      &thisId, y.data);
  thisId.fIdentifier = "rho";
  y.rho = emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 1, "rho")),
      &thisId);
  thisId.fIdentifier = "q";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 2, "q")),
      &thisId, y.q);
  thisId.fIdentifier = "max_try";
  y.max_try = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 3, "max_try")),
      &thisId);
  thisId.fIdentifier = "cus_num";
  y.cus_num = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 4, "cus_num")),
      &thisId);
  thisId.fIdentifier = "node_num";
  y.node_num = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 5, "node_num")),
      &thisId);
  thisId.fIdentifier = "fac_num";
  y.fac_num = emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 6, "fac_num")),
      &thisId);
  thisId.fIdentifier = "bar_J";
  b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 7, "bar_J")),
      &thisId, y.bar_J);
  thisId.fIdentifier = "I";
  b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 8, "I")),
      &thisId, y.b_I);
  thisId.fIdentifier = "mu";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 9, "mu")),
      &thisId, y.mu);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct2_T &y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[3]{"price", "dmd", "fix"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)&sp, parentId, u, 3,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "price";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 0, "price")),
      &thisId, y.price);
  thisId.fIdentifier = "dmd";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 1, "dmd")),
      &thisId, y.dmd);
  thisId.fIdentifier = "fix";
  emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0, 2, "fix")),
      &thisId, y.fix);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 2U> &y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const struct3_T &u)
{
  static const char_T *sv[9]{"rec_lb",  "rec_ub",  "rec_ils",
                             "bst_loc", "bst_sqc", "bst_ub",
                             "bst_lb",  "iter",    "time"};
  const coder::array<real_T, 1U> *b_u;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T i;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&sv[0]));
  b_u = &u.rec_lb;
  b_y = nullptr;
  m = emlrtCreateNumericArray(1,
                              ((coder::array<real_T, 1U> *)&u.rec_lb)->size(),
                              mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < b_u->size(0); b_i++) {
    pData[i] = (*b_u)[b_i];
    i++;
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "rec_lb", b_y, 0);
  b_u = &u.rec_ub;
  c_y = nullptr;
  m = emlrtCreateNumericArray(1,
                              ((coder::array<real_T, 1U> *)&u.rec_ub)->size(),
                              mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < b_u->size(0); b_i++) {
    pData[i] = (*b_u)[b_i];
    i++;
  }
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "rec_ub", c_y, 1);
  d_y = nullptr;
  m = emlrtCreateLogicalArray(
      1, ((coder::array<boolean_T, 1U> *)&u.rec_ils)->size());
  emlrtInitLogicalArray(
      u.rec_ils.size(0), m,
      &(((coder::array<boolean_T, 1U> *)&u.rec_ils)->data())[0]);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "rec_ils", d_y, 2);
  e_y = nullptr;
  iv[0] = 1;
  iv[1] = u.bst_loc.size(1);
  m = emlrtCreateLogicalArray(2, &iv[0]);
  emlrtInitLogicalArray(u.bst_loc.size(1), m, &u.bst_loc[0]);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "bst_loc", e_y, 3);
  f_y = nullptr;
  iv[0] = u.bst_sqc.size(0);
  iv[1] = u.bst_sqc.size(1);
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.bst_sqc.size(1); b_i++) {
    for (int32_T c_i{0}; c_i < u.bst_sqc.size(0); c_i++) {
      pData[i] = u.bst_sqc[c_i + u.bst_sqc.size(0) * b_i];
      i++;
    }
  }
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "bst_sqc", f_y, 4);
  g_y = nullptr;
  m = emlrtCreateDoubleScalar(u.bst_ub);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "bst_ub", g_y, 5);
  h_y = nullptr;
  m = emlrtCreateDoubleScalar(u.bst_lb);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, "bst_lb", h_y, 6);
  i_y = nullptr;
  m = emlrtCreateDoubleScalar(u.iter);
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(y, 0, "iter", i_y, 7);
  j_y = nullptr;
  m = emlrtCreateDoubleScalar(u.time);
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(y, 0, "time", j_y, 8);
  return y;
}

void lr_ils_api(const mxArray *const prhs[2], const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  struct0_T lr_para;
  struct1_T lr_case;
  struct3_T lr_result;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  // Marshall function inputs
  emlrt_marshallIn(st, emlrtAliasP(prhs[0]), "lr_para", lr_para);
  emlrt_marshallIn(st, emlrtAliasP(prhs[1]), "lr_case", lr_case);
  // Invoke the target function
  lr_ils(&st, &lr_para, &lr_case, &lr_result);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(lr_result);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_lr_ils_api.cpp)

//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lr_ils_types.h
//
// Code generation for function 'lr_ils'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#define MAX_THREADS omp_get_max_threads()

// Type Definitions
struct struct0_T {
  real_T alpha;
  real_T alpha_min;
  real_T theta_lr;
  real_T kappa_lb;
  real_T eta_lr;
  real_T tau_lim;
  real_T xi;
  real_T theta_sa;
  real_T T_lim;
  real_T kappa_ub;
  real_T kappa_ubdfs;
  real_T eta_ils;
  real_T grb_model;
  real_T grb_ub;
  real_T dfs_gap;
  boolean_T print;
  boolean_T ils;
  boolean_T square;
};

struct struct2_T {
  coder::array<real_T, 2U> price;
  coder::array<real_T, 1U> dmd;
  coder::array<real_T, 1U> fix;
};

struct struct3_T {
  coder::array<real_T, 1U> rec_lb;
  coder::array<real_T, 1U> rec_ub;
  coder::array<boolean_T, 1U> rec_ils;
  coder::array<boolean_T, 2U> bst_loc;
  coder::array<real_T, 2U> bst_sqc;
  real_T bst_ub;
  real_T bst_lb;
  real_T iter;
  real_T time;
};

struct struct1_T {
  struct2_T data;
  real_T rho;
  coder::array<real_T, 1U> q;
  real_T max_try;
  real_T cus_num;
  real_T node_num;
  real_T fac_num;
  coder::array<real_T, 2U> bar_J;
  coder::array<real_T, 2U> b_I;
  coder::array<real_T, 2U> mu;
};

// End of code generation (lr_ils_types.h)

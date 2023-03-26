clc
clear

load('lr_ils.mat')

lr_para.eta_lr = 5;
lr_para.ils         = true;     % 是否使用ILS
lr_para.square      = true;     % 是否使用步长平方分母

lr_ils(lr_para, lr_case)
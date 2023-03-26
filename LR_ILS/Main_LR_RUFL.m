% 拉格朗日松弛求解可靠设施选址问题(RUFL)
% 代码原理请参考本人硕士毕业论文
% 该论文可在知网下载，也提供了latex源文档可自行编译
% 编码方式: UTF-8
% 操作系统: Windows 10/11 & MacOs 13
% 运行平台:
% Matlab R2022a/b 
% 工具箱 Matlab Coder & Parallel Computing
% Gurobi 9.5.2
% Python 3.10

% 声明：
% 本软件是作者的硕士论文成果，
% 帮助读者理解论文的算法内容，
% 亦或者帮助入门拉格朗日松弛算法。
% 作者已尽一切努力确保代码内容的准确性，
% 但该软件并不适用于全部问题，
% 也不适用于全部算例，
% 作者在此声明不承担因软件中的错误或遗漏造成的任何损失所带来的责任，
% 无论这些错误或遗漏是意外、疏忽或其他原因导致的。
% 此外，作者对本软件的性能，
% 包括但不限于软件的稳定性或它返回的解的质量或其正确性，不作任何声明、明示或暗示。
% 作者对本软件产生的计算结果不承担任何责任。
% 由于精力有限，作者也不会维护该代码，不会更新功能或修改bug
% 但对该代码提供说明或解释。
% 最后，虽然本软件是开源软件，但强烈不建议直接调包使用，
% 因为该算法仅适用于本文的问题，
% 本软件仅提供一种固定费用可靠选址问题的求解思路。

% 若该软件对您有所帮助，欢迎引用作者的文章。
% 作者邮箱: yrf990409@gmail.com


%% 清除
% clc
% clear all
% clear classes
close all 
diary off
diary 'LR_ILS.log'
% py.importlib.reload(py.importlib.import_module('model'));

% disp('拉格朗日松弛求解可靠设施选址问题(RUFL), Version 0.9, 初始版本')
% disp('拉格朗日松弛求解可靠设施选址问题(RUFL), Version 0.9.5, 修复下界求解错误导致gap过大')
% disp('拉格朗日松弛求解可靠设施选址问题(RUFL), Version 1.0, 正式可计算版本')
% disp('拉格朗日松弛求解可靠设施选址问题(RUFL), Version 1.0.1, 上界运算增加DFS')
% disp('拉格朗日松弛求解可靠设施选址问题(RUFL), Version 1.0.2, 下界DFS触发条件')
% disp('拉格朗日松弛求解可靠设施选址问题(RUFL), Version 1.1, LR-ILS算子可全部转为mex文件，取消在LR中调用gurobi')
% disp('拉格朗日松弛求解可靠设施选址问题(RUFL), Version 1.1.1, BUG修复')
% disp('拉格朗日松弛求解可靠设施选址问题(RUFL), Version 1.1.2, 修复后期ILS算子还在用启发式求解的问题')
% disp('拉格朗日松弛求解可靠设施选址问题(RUFL), Version 1.1.3, 增加ILS并行运算')

% disp(['程序开始: ', datestr(now)])

%% 参数控制
lr_para = struct();             % LR 算法的参数
lr_para.alpha       = 2;        % 步长参数初始值
lr_para.alpha_min   = 0.0001;   % 步长参数最小值
lr_para.theta_lr    = 1.05;      % 步长比例系数
lr_para.kappa_lb    = 10;       % 下界连续不变次数
lr_para.eta_lr      = 3000;     % 迭代次数
lr_para.tau_lim     = 1000;     % 优化时长
lr_para.xi          = 0.01;     % 接受gap
lr_para.theta_sa    = 1.2;      % 模拟退火初始温度参数
lr_para.T_lim       = 0.0001;   % 模拟退火最低温度
lr_para.kappa_ub    = 100;      % 触发ILS上界连续不变次数 (200)
lr_para.kappa_ubdfs = 500;      % 触发上界DFS搜索(delete)
lr_para.eta_ils     = 10;       % ILS迭代次数
lr_para.grb_model   = 1;        % 使用Gurobi建模 取值 0 1
lr_para.grb_ub      = 1;        % 使用Gurobi获取上界 取值0 1
lr_para.dfs_gap     = 0.2;      % gap小于此值才启动DFS
lr_para.print       = true;     % 是否打印
lr_para.ils         = false;     % 是否使用ILS
lr_para.square      = false;     % 是否使用步长平方分母

%% 案例参数
% lr_case = struct();
path = './data/SnyderData/49nodes/';
lr_case.data = data_reader(path);
lr_case.rho = 0.3;                                          % 损坏概率控制参数
lr_case.q = lr_case.rho * exp(-lr_case.data.fix/200000);    % 损坏概率
lr_case.q(1) = 1;                                           % 虚拟设施的损坏概率
lr_case.max_try = 5;                                        % 最大尝试次数(R)
lr_case.cus_num = length(lr_case.data.dmd);                 % 客户数量
lr_case.node_num = size(lr_case.data.price,1);              % (虚拟 实体 客户)的总数
lr_case.fac_num = lr_case.node_num - lr_case.cus_num - 1;   % 设施总数
lr_case.bar_J = (0:lr_case.fac_num)+1;                      % 设施集合拓展集
lr_case.I = (lr_case.fac_num+1 : lr_case.node_num-1)+1;     % 客户集合
lr_case.mu = zeros(lr_case.cus_num, length(lr_case.bar_J)); % 生成初始乘子
for i = 1:lr_case.cus_num
    cus_ind = lr_case.I(i)-lr_case.I(1)+1;
    for j = lr_case.bar_J(2:end)
        lr_case.mu(:,j) = (lr_case.data.dmd(cus_ind) * lr_case.data.price(cus_ind,j) + ...
            lr_case.data.fix(j)) / length(lr_case.data.fix);
    end
end
% lr_case.mu = zeros(lr_case.cus_num, length(lr_case.bar_J)); % 方法0: 全0初始乘子
% for j = lr_case.bar_J(2:end)                   % 方法1: 参考文献初始乘子
%     lr_case.mu(:,j) = lr_case.data.fix(j) / length(lr_case.I);
% end


%% 优化
lr_result = lr_ils_mex(lr_para, lr_case);


%% 结果处理
% draw_fig(lr_result)

% 保存
file_name = ['平方-', ...%              num2str(lr_case.node_num), '-' , ... % 点数
             num2str(lr_case.rho),      '-' , ... % rho取值
             num2str(lr_case.max_try),  '-' , ... % 最大试错次数
             '.mat'];
save(file_name,'lr_result')

% fprintf('rho \t 最大试错次数 \t 上界 \t 下界 \t 求解时间\n')
fprintf('%d \t %.2f \t %d \t %.2f \t %.2f \t %.2f \n', lr_case.node_num, lr_case.rho, lr_case.max_try, lr_result.bst_ub, lr_result.bst_lb, lr_result.time)
diary off

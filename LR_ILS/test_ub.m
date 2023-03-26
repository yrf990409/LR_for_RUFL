% 测试下界性能
% R = 2\3\...\10
% rho = 0.1、0.2、0.3
% mu取 0 初始值 随机值
% 49个点


clc
clear
% clear classes
close all
diary off
diary 'LB_PERF.log'
% py.importlib.reload(py.importlib.import_module('sub_m_x'));
addpath '../' % 调用父文件夹函数

path = './data/SnyderData/49nodes/';       % 数据路径
lr_case.data = data_reader(path);
cus_num = length(lr_case.data.dmd);

rnd_p = randperm(50);

for rho = [0.1]
    for loc_num = [10]
        for R = 5
            lr_case.rho = rho;                                          % 损坏概率控制参数
            lr_case.q = lr_case.rho * exp(-lr_case.data.fix/200000);    % 损坏概率
            lr_case.q(1) = 1;                                           % 虚拟设施的损坏概率
            lr_case.max_try = R;                                        % 最大尝试次数(R)
            lr_case.cus_num = length(lr_case.data.dmd);                 % 客户数量
            lr_case.node_num = size(lr_case.data.price,1);              % (虚拟 实体 客户)的总数
            lr_case.fac_num = lr_case.node_num - lr_case.cus_num - 1;   % 设施总数
            lr_case.bar_J = (0:lr_case.fac_num)+1;                      % 设施集合拓展集
            lr_case.I = (lr_case.fac_num+1 : lr_case.node_num-1)+1;     % 客户集合
            lr_case.mu = zeros(lr_case.cus_num, length(lr_case.bar_J)); % 生成初始乘子

            location = false(1,50);
            location(rnd_p(1:loc_num)) = true;
            location(1) = true;
            
            ub_xy(lr_case, location, false)
            
        end
    end
end










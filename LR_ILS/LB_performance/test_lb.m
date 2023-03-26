% 测试下界性能
% R = 2\3\...\10
% rho = 0.1、0.2、0.3
% mu取 0 初始值 随机值
% 49个点


clc
clear
clear classes
close all
diary off
diary 'LB_PERF.log'
py.importlib.reload(py.importlib.import_module('sub_m_x'));
addpath '../' % 调用父文件夹函数

path = '../data/SnyderData/49nodes/';       % 数据路径
lr_case.data = data_reader(path);
cus_num = length(lr_case.data.dmd);

temp_mu = zeros(cus_num, cus_num+1);
for i = 1:cus_num
    for j = 1:cus_num+1
        temp_mu(i,j) = rand * max(lr_case.data.fix);
    end
end
temp_mu(:,1) = 0;
save('mu_temp_mu_49.mat','temp_mu')

%  load('mu_temp_mu_49.mat')

for rho = [0.1 0.2 0.3]
    for mu_mode = 1:3
        for R = 2:10
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

            if mu_mode == 1
                lr_case.mu = zeros(lr_case.cus_num, length(lr_case.bar_J)); % 生成初始乘子
            elseif mu_mode == 2
                for i = 1:lr_case.cus_num
                    cus_ind = lr_case.I(i)-lr_case.I(1)+1;
                    for j = lr_case.bar_J(2:end)
                        lr_case.mu(:,j) = (lr_case.data.dmd(cus_ind) * lr_case.data.price(cus_ind,j) + ...
                            lr_case.data.fix(j)) / length(lr_case.data.fix);
                    end
                end
            else
                lr_case.mu = temp_mu;
            end

            tic
            [lb_dfs, ~] = lb_x_mex(lr_case, true);
            dfs_cost = sum(lb_dfs);
            t_heu = toc;
            fprintf('HEU:\t%.2f\t%.2f\t%.4f\t%.2f\t%d\t%d\n', dfs_cost, dfs_cost, t_heu, rho, mu_mode, R)

            tic
            [lb_dfs, plan_dfs] = lb_x_mex(lr_case, false);
            dfs_cost = sum(lb_dfs);
            t_dfs = toc;
            fprintf('DFS:\t%.2f\t%.2f\t%.4f\t%.2f\t%d\t%d\n', dfs_cost, dfs_cost, t_dfs, rho, mu_mode, R)


            py_return = py.sub_m_x.create_solve(py.numpy.array(lr_case.data.price), ...
                py.numpy.array(lr_case.data.dmd), ...
                py.numpy.array(lr_case.mu), ...
                py.numpy.array(int16(lr_case.max_try)), ...
                py.numpy.array(lr_case.q), ...
                mu_mode, ...
                rho);
            py_return = cell(py_return);
            plan_grb = py_return{1};
            cost_grb = py_return{2};
            plan_grb = double(plan_grb);
            cost_grb = double(cost_grb);
            
            for m = 1:size(plan_grb,1)
                for n = 1:size(plan_grb, 2)
                    if plan_grb(m,n) == 0
                        plan_grb(m,n) = plan_grb(m,n)+1;
                        break
                    else
                        plan_grb(m,n) = plan_grb(m,n)+1;
                    end
                end
            end
        end
    end
end










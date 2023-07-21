% 拉格朗日松弛求解可靠设施选址问题(RUFL)
% 编码方式: UTF-8
% 操作系统: Windows 10/11  MacOs 13
% 运行平台:
% Matlab R2022a/b 
% 工具箱 Matlab Coder \& Parallel Computing
% Gurobi 9.5.2
% Python 3.10

\begin{lstlisting}[language=Matlab]
% 拉格朗日松弛求解可靠设施选址问题(RUFL)
% 编码方式: UTF-8
% 操作系统: Windows 10/11 \& MacOs 13
% 运行平台:
% Matlab R2022a/b 
% 工具箱 Matlab Coder \& Parallel Computing
% Gurobi 9.5.2
% Python 3.10

%% 清除
% clc
% clear all
% clear classes
close all 
diary off
diary 'LR-four-fig.log'
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
lr_para.print       = true;     % 解池的大小


%% 案例参数
% lr_case = struct();
% path = './data/SnyderData/49nodes/';
lr_case.data = data_reader(path);
lr_case.rho = prob_rho;                                          % 损坏概率控制参数
lr_case.q = lr_case.rho * exp(-lr_case.data.fix/200000);    % 损坏概率
lr_case.q(1) = 1;                                           % 虚拟设施的损坏概率
lr_case.max_try = out_index;                                        % 最大尝试次数(R)
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
% lr_case.mu = zeros(lr_case.cus_num, length(lr_case.bar_J)); % 方法1: 参考文献初始乘子
% for j = lr_case.bar_J(2:end)
%     lr_case.Imu(:,j) = lr_case.data.fix(j) / length(lr_case.I);
% end


%% 优化
lr_result = lr_ils(lr_para, lr_case);


%% 结果处理
% draw_fig(lr_result)

% 保存
file_name = ['结果', ...
            num2str(lr_case.node_num), '-' , ... % 点数
            num2str(lr_case.rho),      '-' , ... % rho取值
            num2str(lr_case.max_try),  '-' , ... % 最大试错次数
            '.mat'];
save(file_name,'lr_result')

% fprintf('rho \t 最大试错次数 \t 上界 \t 下界 \t 求解时间\text{\\n}')
fprintf('%d \t %.2f \t %d \t %.2f \t %.2f \t %.2f \n', lr_case.node_num, lr_case.rho, lr_case.max_try, lr_result.bst_ub, lr_result.bst_lb, lr_result.time)
diary off


function data = data_reader(f_path)
%DATA_READER 读取数据
%   data包含三个数据
%% 数据读取
% disp(['导入数据，当前路径: ', f_path])
data.price = load([f_path, 'cost.csv']); % 价格矩阵
data.dmd = load([f_path, 'dmd.csv']);    % 客户需求
data.fix = load([f_path, 'fc.csv']);     % 固定成本
% disp('导入完成!')
% disp('---------------------------------')

% 验证数据
validateattributes(data.price, {'double'}, {'size', [length(data.dmd)+length(data.fix), length(data.fix)]})

end

function [ub,best_r] = lb_dfs(r, best_r, ub, cur_cost, cur_prob, fac, cus_dmd, ...
    cost_mat, R, pi, probDisr, cus_mu)
% global x
% x = x+1
if length(r) <= R+1 % 没有到达设施数量的上界
    if r(end) == 1 % 如果结尾是虚拟，那么获得了一个完整路径
        tempCost = cur_cost;
        if tempCost < ub % 小于上界 则更新
            ub = tempCost;
            best_r = r;
            return
        end
        return
    else % 否则不是一个完整路径
        if isempty(fac) % 没有设施可以填充了，route最后一个不以虚拟结尾
            r = [r,1]; % route必须是虚拟收尾了

            tempCost = cur_cost + cus_dmd*pi*cur_prob;
            if tempCost < ub % 小于上界 则更新
                ub = tempCost;
                best_r = r;
                return
            end
            return
        else % 还有设施可以填充
            if length(r) == R+1 % 已经填满，放不下了，只差一个虚拟设施
                r = [r,1]; % route必须是0收尾了
                tempCost = cur_cost + cus_dmd*pi*cur_prob;
                if tempCost < ub % 小于上界 则更新
                    ub = tempCost;
                    best_r = r;
                    return
                end
                return
            else % 向下继续分支
                for i = 1:length(fac) % i : index of facilities
                    stackR = r;
                    stackC = cur_cost;
                    stackP = cur_prob;

                    r = [r,fac(i)];
                    tempCost = cur_cost + cost_mat(r(end-1),r(end))*cur_prob*cus_dmd + cus_mu(1,fac(i));

                    if tempCost>ub % 剪枝
                        r = stackR; % 直接恢复不再细分
                    else
                        tempFacy = fac;  % 递归 继续分支
                        tempFacy(tempFacy==fac(i)) = [];
                        cur_prob = cur_prob*probDisr(r(end));
                        [ub,best_r] = lb_dfs(r,best_r,ub,tempCost,cur_prob,tempFacy,cus_dmd,cost_mat,R,pi,probDisr,cus_mu);
                        r = stackR;
                        cur_cost = stackC;
                        cur_prob = stackP;
                    end
                end
            end
        end
    end
else
    return
end
end



function [trans_cost, plan] = lb_x(lr_case, flag_fast)
%lb_dfs_x 深度搜索获取每个客户的尝试路径

% 输入 lr_case 字段
% I         客户索引 向量
% bar_J     设施索引 向量
% data      数据 结构体 字段 price价格矩阵 dmd客户需求 fix固定成本
% q         每个设施失效概率 向量
% mu        拉格朗日乘子 矩阵
% max_try   客户最大尝试次数 整数
% dfs_falg  是否使用DFS 逻辑值

% 输出
% trans_cost    期望运输成本   浮点数矩阵
% plan          计划          整数矩阵

%% 初始化
% 提取
I = lr_case.I;
bar_J = lr_case.bar_J;
data = lr_case.data;
q = lr_case.q;
mu = lr_case.mu;
max_try = lr_case.max_try;
trans_cost = zeros(length(I),1);    % 记录每个客户的期望运输成本

%% 贪心路径构建
[plan, trans_cost] = greedy_build(I, max_try, bar_J, data, mu, q, trans_cost);

%% DFS改进当前解
if ~flag_fast % 快速模式不启动dfs
    dmd = data.dmd;
    price = data.price;
    pi = price(2,1);    % 惩罚成本
    parfor j = 1:length(I)
        cus = I(j);
        best_r = plan(j,:); % 当前最优路径
        ub = trans_cost(j); % 当前上界
        cus_dmd = dmd(j); % 客户的需求
        cus_mu = mu(j,:);  % 拉格朗日乘子

        R = coder.ignoreConst(max_try-1);
        coder.varsize('cus', [1 100], [0 1]);
        coder.varsize('best_r');
        coder.varsize('bar_J');
        coder.varsize('price');
        coder.varsize('q');
        coder.varsize('cus_mu');

        [ub, best_r] = lb_dfs(cus, best_r, ub, 0, 1, bar_J, cus_dmd, price, R, pi, q, cus_mu); % 深度优先搜索
        trans_cost(j) = ub; % 更新上界

        if length(best_r) < max_try+1
            plan(j,:) = [best_r, zeros(1, max_try+1-length(best_r))];
        else
            plan(j,:) = best_r; % 记录方案
        end

    end
end
end


function [plan, trans_cost] = greedy_build(I, max_try, bar_J, data, mu, q, trans_cost)
% 路线构建的贪心算法
% 在每个路径的最后增加一个算子
plan = zeros(length(I), max_try+1); % 记录每个客户的方案
dmd = data.dmd; % 客户的需求
price = data.price; % 价格矩阵
for k = 1:length(I)
    cus = I(k);
    % 直接采用构造法生成一个初始路径
    route = zeros(1, max_try+1); % 路径
    route(1) = cus; % 路径的起点是客户
    prob = 1;   % 初始概率是1
    fee = 0;    % 初始费用是0
    fac = bar_J;    % 设施的复制
    cus_dmd = dmd(k); % 客户的需求
    jdg_brk = false;
    
    mu_k = mu(k,:);
    % 每次讲增量成本最小的设施放在路线最后（贪心构建）
    for i = 2:max_try
        add_fee = zeros(1,length(fac));
        for j = 1:length(fac)
            add_fee(j) = prob * cus_dmd * price(route(i-1),fac(j)) ...
                + mu_k(fac(j));
        end
        [min_add_fee,min_ind] = min(add_fee); % 指向最小的费用
        route(i) = fac(min_ind); % 路线更新
        prob = prob * q(route(i)); % 概率更新
        fee = fee + min_add_fee; % 费用更新
        if route(i) == bar_J(1)
            jdg_brk = true;
            break % 如果虚拟设施被添加到路径中则退出
        end
        fac(min_ind) = []; % 否则去除已经添加的设施
    end

    if jdg_brk % 提前退出
        plan(k,:) = route; % 记录路径
        trans_cost(k) = fee; % 记录成本
    else
        route(route==0) = []; % 去除路径中的多余0
        trans_cost(k) = fee + cus_dmd * prob * price(route(end),1); % 直接计算成本

        formated_route = [route, 1, zeros(1, max_try-length(route))]; % 记录路径
        plan(k,:) = formated_route; % 记录路径
    end
end
end


function [cost_for_fac, location] = lb_y(lr_case)
%LB_Y获取y变量的下界
% 给定一个乘子，返回y的最佳选址location以及设施建设成本cost_for_fac

% 初始化
bar_J = lr_case.bar_J;
data = lr_case.data;
mu = lr_case.mu;

location = false(1,length(bar_J));     % 选址方案
cost_for_fac = zeros(1,length(bar_J)); % 下界Sub_1问题的目标函数

for j = 2:length(bar_J)
    fac = bar_J(j);
    sum_mu = sum(mu(:,fac)); 
    jdg = data.fix(fac) - sum_mu; % 判别

    if jdg > 0 % 判别数大于0 不选这个位置
        location(fac) = 0;
    else
        location(fac) = 1; % 小于等于0 选
        cost_for_fac(fac) = data.fix(fac) - sum_mu;
    end

end

end

function lr_result = lr_ils(lr_para, lr_case)
% LR_ILS 拉格朗日松弛-局部迭代搜索算法
% 传入 案例参数lr_case 以及算法参数lr_para
% 传出 lr_result结果

%% 初始化
tic
% 记录 recorder
rec_lb  = zeros(lr_para.eta_lr, 1);     % 下界记录 record
rec_ub  = zeros(lr_para.eta_lr, 1);     % 上界记录
rec_ils = false(lr_para.eta_lr, 1);     % ILS发挥作用记录

% 计数器 count
cnt_step = 0;   % 下界连续不上升计数
cnt_ils  = 0;   % 上界连续不下降计数
cnt_ub   = 0;   % 最佳上界保持的迭代次数
cnt_iter = lr_para.eta_lr;  % 算法真正的迭代次数

% 最佳解 best_solution
bst_loc  = false(1, length(lr_case.bar_J));             % 最佳选址方案 location
bst_sqc  = zeros(length(lr_case.I), lr_case.max_try+1); % 最佳客户序列 sequence
bst_ub   = inf;     % 最佳上界
bst_lb   = -inf;    % 最佳下界
gap = 1;

% 条件判断 flag
flag_fast = true;       % 算法快速模式
flag_modify = false;    % 快速\&慢速切换时强制更正上下界
flag_ils_continue = false;  % ILS是否继承上一次的结果

% 邻域
cur_ub = inf;
cur_loc = false(1,length(lr_case.bar_J));     % 选址方案

%% LR-ILS优化
for iter = 1:lr_para.eta_lr
    % 获取下界
    [lb_val_x, lb_sqc] = lb_x(lr_case, flag_fast);  % 获取Sub_2的值
    [lb_val_y, lb_loc] = lb_y(lr_case);             % 获取Sub_1的值
    lb = sum(lb_val_x) + sum(lb_val_y);

    % 获取上界
    [ub, sqc, ~] = ub_xy(lr_case, lb_loc, flag_fast);

    % ILS搜索上界
    if cnt_ub >= lr_para.kappa_ub && gap > 2*lr_para.xi
        if flag_ils_continue
            [nb_ub, nb_loc, cur_ub, cur_loc] = ub_ils(lr_case, cur_ub, cur_loc, lr_para);
        else
            [nb_ub, nb_loc, cur_ub, cur_loc] = ub_ils(lr_case, bst_ub, bst_loc, lr_para);
        end

        if nb_ub < bst_ub
            % 得到更好的上界
            bst_loc  = nb_loc;  % 选址方案
            bst_ub   = nb_ub;   % 上界 
            rec_ils(iter) = true;
        else
            flag_ils_continue = true;  % ILS继承上一次的结果
        end

        cnt_ub = 0;
    end

    % 记录最佳上界
    if ub <= bst_ub
        % 得到了更好的上界
        bst_loc  = lb_loc;  % 选址方案
        bst_sqc  = sqc;     % 客户序列
        bst_ub   = ub;      % 上界
        % 计数器更新
        cnt_ils = 0;        % 上界连续不下降
        cnt_ub  = 0;        % 最佳上界保持次数
        % 局部迭代搜索更新

    else
        % 计数器更新
        cnt_ils = cnt_ils + 1; % 上界连续不下降
        cnt_ub  = cnt_ub + 1;  % 最佳上界保持次数
    end

    % 记录最佳下界
    if lb >= bst_lb
        bst_lb = lb;
        cnt_step = 0;
    else
        cnt_step = cnt_step + 1; % 否则下界未更新计数+1
    end

    % 更新乘子
    [lr_case.mu, cnt_step, lr_para.alpha] = update_mu(lr_case, lr_para, lb, bst_ub, lb_sqc, lb_loc, cnt_step);

    % 迭代记录
    rec_lb(iter)  = lb;         % 下界记录 record
    rec_ub(iter)  = bst_ub;     % 上界记录
    

    % 打印
    gap = (bst_ub-bst_lb) / bst_ub; % 计算gap
    t = toc;
    if lr_para.print
        formatSpec = "iter:%.0f, best-ub:%.2f, best-lb:%.2f, gap:%.4f%%, time:%.2f, ub:%.2f, lb:%.2f\n";
        fprintf(formatSpec, iter, bst_ub, bst_lb, gap*100, t, ub, lb);
    end
    

    % 快速慢速切换
    if gap <= lr_para.dfs_gap && ~flag_modify % gap小于一定的值 关闭快速模式
        flag_fast = false;  % 关闭快速模式
        flag_modify = true; % 强制修正
        % 快速模式获得的下界不是最优解，因此下界是虚标的，在此处进行修正
        [lb_val_x, ~] = lb_x(lr_case, flag_fast);  % 获取Sub_2的值
        [lb_val_y, ~] = lb_y(lr_case);             % 获取Sub_1的值
        bst_lb = sum(lb_val_x) + sum(lb_val_y);    % 强制修正下界
        gap = (bst_ub-bst_lb) / bst_ub;            % 修正之后的gap
    end

    % 终止条件
    if t > lr_para.tau_lim
        disp('stop, time') % 时间限制
        cnt_iter = iter;
        break
    else
        if lr_para.alpha < lr_para.alpha_min
            disp('stop, alpha') % 迭代值限制
            cnt_iter = iter;
            break
        elseif gap < lr_para.xi
            disp('stop, gap') % gap值达标
            cnt_iter = iter;
            break
        end
    end
end
if cnt_iter == lr_para.eta_lr
    disp('stop, iteration') % 迭代次数限制
end

%% 封装 & 返回      
% 重新计算
t = toc;
lr_result         = struct();
lr_result.rec_lb  = rec_lb;
lr_result.rec_ub  = rec_ub;
lr_result.rec_ils = rec_ils;
lr_result.bst_loc = bst_loc;
lr_result.bst_sqc = bst_sqc;
lr_result.bst_ub  = bst_ub;
lr_result.bst_lb  = bst_lb;
lr_result.iter    = cnt_iter;
lr_result.time    = t;


end

function [best_nb_ub, best_nb_loc, current_ub, current_loc] = ub_ils(lr_case, ub, location, lr_para)
%UB_ILS 局部迭代搜索
%% 初始化
best_nb_ub = ub;                 % 记录全局最佳上界
best_nb_loc = location;          % 记录全局最佳选址方案

current_ub = ub;            % 当前上界
current_loc = location;     % 当前方案

temperature = -(lr_para.theta_sa-1)*ub/log(0.5);  % 初始温度
t_gap = temperature / (lr_para.eta_ils*0.4);      % 每次降低的温度

for iter = 1:lr_para.eta_ils
    % 求邻域
    nb = get_nb(current_loc); % 获取邻域
    nb_sz = size(nb,1);

    % 求所有邻域中成本最小的几个
    nb_cost_rec = zeros(nb_sz,1);
    for i = 1:size(nb,1)
        [nb_cost_rec(i), ~] = ub_xy(lr_case, nb(i,:), true); % 求快速解
    end
    [~, sort_ind] = sort(nb_cost_rec);    % 最小成本索引

    % 计算前 5 个 最佳索引的精准上界
    temp_best_loc = nb(sort_ind(1:5),:);
    temp_cost_rec = zeros(5,1);
    for i = 1:5
        [temp_cost_rec(i), ~] = ub_xy(lr_case, temp_best_loc(i,:), false); % 求快速解
    end
    
    [best_nb_cost, min_ind] = min(temp_cost_rec);

    % 接受上界
    if best_nb_cost < current_ub    % 得到更优质的解
        current_ub = best_nb_cost;              % 记录临时上界
        current_loc = temp_best_loc(min_ind,:); % 临时选址方案
    else % 概率接受不那么好的解
        if rand < exp((best_nb_cost - current_ub )/temperature)
            current_ub = best_nb_cost;          % 记录临时上界
            current_loc = nb(i,:);          % 临时选址方案
        end
    end
    
    % 更新最优解
    if current_ub < best_nb_ub % 获得全局最优解直接返回
        best_nb_ub = current_ub;             % 记录全局最佳上界
        best_nb_loc = current_loc;           % 记录全局最佳选址方案
    end
    
    % 更新温度
    temperature = temperature - t_gap;
    if temperature <= 0
        temperature = 0.0001;
    end
end

end

function ns = get_nb(location)
location(1) = []; % 先删除虚拟设施
opened = find(location == 1);
closed = find(location == 0);

% 计算需要邻域的大小
ns_sz = length(opened) + length(closed) + length(opened) * length(closed);
ns = false(ns_sz,length(location));

count = 1;
% 关闭一个设施
for i = 1:length(opened)
    temp = location;
    temp(opened(i)) = 0;
    ns(count,:) = temp;
    count = count + 1;
end

% 开启一个设施
for i = 1:length(closed)
    temp = location;
    temp(closed(i)) = 1;
    ns(count,:) = temp;
    count = count + 1;
end

% 交换设施状态
for i = 1:length(opened)
    for j = 1:length(closed)
        temp = location;
        temp(opened(i)) = 0;
        temp(closed(j)) = 1;
        ns(count,:) = temp;
        count = count + 1;
    end
end

% 补充虚拟设施
ns = [true(size(ns,1),1) ns];
end


function [mu, cnt_step, alpha] = update_mu(lr_case, lr_para, lb, ub, plan_lb, location, cnt_step)
%乘子更新

% 提取
I = lr_case.I;
bar_J = lr_case.bar_J;
mu = lr_case.mu;
alpha = lr_para.alpha;

% 更新系数
if cnt_step > lr_para.kappa_lb % 长时间未更新下界则步长因子打折
    alpha = alpha / lr_para.theta_lr; % 步长系数打折
    cnt_step = 0; % 打折后计数器归零
end

temp = zeros(length(I), length(bar_J)); %记录客户i是否使用了设施j
% 计算分母
for i = 1:size(plan_lb,1)
    fac_use = plan_lb(i, 2:end); % 对于i来说使用了的设施
    fac_use(fac_use==0) = [];
    temp(i, fac_use) = 1;
end
violate = temp - location; % 违背约束

% 计算迭代步长
k_step = lr_para.alpha * (ub-lb) / sum(abs(violate),"all");

% 更新乘子
for m =2:length(bar_J)
    j = bar_J(m);   % j 是设施
    if location(j)
        y_j = 1;
    else
        y_j = 0;
    end

    for n = 1:length(I)
        i = I(n) - bar_J(end); % i 是客户
        if any(plan_lb(i,2:end) == j)
            x_ikj = 1;
        else
            x_ikj = 0;
        end
        mu(i, j) = mu(i, j) + k_step * (x_ikj - y_j);
        if mu(i,j) < 0
            mu(i,j) = 0;
        end
    end
end


function [obj, plan, trans_cost] = ub_xy(lr_case, location, flag_fast)
%UB_YX求解模型的上界
% OBJ 返回原问题的最优目标函数
% plan 返回最优路径方案
% trans_cost 返回各路径的运输成本

%% 初始化
% 提取
I = lr_case.I;
bar_J = lr_case.bar_J;
data = lr_case.data;
q = lr_case.q;
max_try = lr_case.max_try;
dmd = data.dmd;
price = data.price;

trans_cost = zeros(length(I),1);    % 记录每个客户的期望运输成本
fix_cost = data.fix(location);      % 计算固定成本
plan = zeros(length(I), max_try+1); % 记录每个客户的方案
location(1) = 1;                    % 虚拟设施指定是已经建设的
q_loc = q(location);                % 已建设施的损坏概率
located = find(location==1);        % 已经建设的设施的索引

price_located = price(location,:);  % 建设的节点之间的价格
price_cus_fac = price(length(bar_J)+1:end,:); % 顾客和建设的节点之间的距离
parfor i = 1:length(I)
    cus = I(i);
    % 初始化客户相关变量
    
    dmd_cus = dmd(i); % 节点需求
    price_cus = [price_located; 
                price_cus_fac(i,:)]; % 价格矩阵去掉多余行
    price_cus = price_cus(:,location);  % 价格矩阵去掉多余列

    % dijkstra
    [pind_without_cus, trans_cost_cus] = mod_dijkstra(price_cus, q_loc, dmd_cus, max_try);
    
    % 记录
    trans_cost(i) = trans_cost_cus;
    temp = [cus, pind_without_cus];

    if length(temp) < max_try+1
        plan(i,:) = [temp, zeros(1, max_try+1-length(temp))];
    else
        plan(i,:) = temp; % 记录方案
    end
end

for i = 1:size(plan,1)
    pind_with_cus = plan(i,:);
    pind_with_cus(pind_with_cus==0) = [];
    temp = [pind_with_cus(1), located(pind_with_cus(2:end))];
    if length(temp) < max_try+1
        plan(i,:) = [temp, zeros(1, max_try+1-length(temp))];
    else
        plan(i,:) = temp; % 记录方案
    end
end

obj = sum(trans_cost) + sum(fix_cost); % 目标函数值

if ~flag_fast
    % 快速模式不启动dfs
    [obj, plan, trans_cost] = ub_dfs(I, bar_J, location, plan, trans_cost, data, q, max_try);
end

end


function [pind_without_cus, trans_cost] = mod_dijkstra(price, q_loc, dmd_cus, max_try)
%MOD_DIJKSTRA 修正的Dijkstra算法
% 输入一个i行j列的距离矩阵(从i到j)，返回从最后一个点到第一个点最短成本的路径
% 传入的距离矩阵最后一行表示客户，第一行是虚拟设施

start = size(price,1);  % 初始起点
fee = 0;                % 当前产生的费用
preceding_ind = zeros(1, length(q_loc));   % 前向记录
prob = ones(1, length(q_loc)+1);           % 概率记录
unmark = 1:length(q_loc);                  % 未标记的点
weight = inf * ones(1, length(q_loc));     % 点的权重

count = 0;
while count < max_try
    % 更新未扫描的节点
    for j = 1:length(unmark)
        % 上一个点产生的费用 加上 到这个点需要的费用
        temp = fee + prob(start) * dmd_cus * price(start, unmark(j));

        if temp < weight(unmark(j)) % 得到新的权重
            weight(unmark(j)) = temp;
            preceding_ind(unmark(j)) = start; 
        end
    end

    [fee, mind_unmark] = min(weight(unmark));   % 在所有未标记的权重中选取最小
    start = unmark(mind_unmark);                % 更新起点
    unmark(unmark==start) = [];                 % 更新标记
    prob(start) = prob(preceding_ind(start)) * q_loc(start);   % 更新概率
    
    if start == 1
        break
    end
    if isempty(unmark)
        break
    end
    count = count + 1;
end

trans_cost = weight(1);
pind_without_cus = get_plan(preceding_ind, max_try, 1, size(price,1));

end

function plan_without_cus = get_plan(preceding, times, p_start, p_end)
% 返回一个不带客户的路线方案
% 给定DIJKSTRA算法的跟踪索引，返回一个路径
plan_without_cus = zeros(1, times);
ind = p_start;
plan_without_cus(1) = ind;

count = 2;
while 1
    if preceding(ind) == p_end
        break
    end

    plan_without_cus(count) = preceding(ind);
    ind = preceding(ind);

    count = count+1;
end
plan_without_cus = plan_without_cus(end:-1:1); % 逆转
plan_without_cus(plan_without_cus==0) = [];    % 除0
end

function [lr_ub, plan, trans_cost] = ub_dfs(I, bar_J, location, plan, trans_cost, data, q, max_try)
%UB_DFS 上界DFS搜索

pi = data.price(2,1);    % 惩罚成本
cus_mu = zeros(1,length(bar_J)); % 上界没有乘子
dmd = data.dmd;
price = data.price;
parfor j = 1:length(I)
    cus = I(j);
    best_r = plan(j,:); % 当前最优路径

    ub = trans_cost(j); % 当前上界
    cus_dmd = dmd(j); % 客户的需求
    
    fac = find(location==1); % 已经建设的设施

    R = coder.ignoreConst(max_try-1);
    coder.varsize('cus', [1 100], [0 1]);
    coder.varsize('best_r');
    coder.varsize('bar_J');
    coder.varsize('price');
    coder.varsize('q');
    coder.varsize('cus_mu');

    [ub, best_r] = lb_dfs(cus, best_r, ub, 0, 1, fac, cus_dmd, price, R, pi, q, cus_mu); % 深度优先搜索
    trans_cost(j) = ub; % 更新上界
    plan(j,:) = 0;
    if length(best_r) < max_try+1
        plan(j,:) = [best_r, zeros(1, max_try+1-length(best_r))];
    else
        plan(j,:) = best_r; % 记录方案
    end
end

fix_cost = data.fix(location);      % 计算固定成本
lr_ub = sum(trans_cost) + sum(fix_cost); % 上界

end
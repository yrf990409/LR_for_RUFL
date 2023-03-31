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



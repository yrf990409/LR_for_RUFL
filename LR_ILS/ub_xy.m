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




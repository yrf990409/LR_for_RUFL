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
function [ub, plan_ub, model_para] = ub_grb(bin_location, model_para, max_try)
%GET_UB_GRB 调用gurobi求解模型上界

bin_location(1) = []; % 删除二元变量location的虚拟设施
location = find(bin_location==1); % 获取已建设施的索引 
location = py.list(location);

% 增加location方案
model_para{1} = py.model.input_location(model_para{1}, model_para{3}, location);

% 求解上界
solution = py.model.model_solve(model_para{1}, model_para{2}, model_para{4}, int16(max_try));
solution = cell(solution);
ub = solution{1};
plan_ub = double(solution{2})+1;

% 删除location方案
model_para{1} = py.model.remove_location(model_para{1}, model_para{3});
end


function [cost_for_fac, location] = lb_y(lr_case)
%LB_Y获取y变量的下界
% 给定一个乘子，返回y的最佳选址location以及设施建设成本cost_for_fac

% 公式
% \min \sum_{j\in j} (f_j - \sum_{i\in i} mu_{ij}) y_j

% 初始化
bar_J = lr_case.bar_J;
data = lr_case.data;
mu = lr_case.mu;

location = false(1,length(bar_J));     % 选址方案
cost_for_fac = zeros(1,length(bar_J)); % 下界Sub_1问题的目标函数

for j = 2:length(bar_J)
    fac = bar_J(j);
    sum_mu = sum(mu(:,fac)); % \sum_{i\in i} mu_{ij}
    jdg = data.fix(fac) - sum_mu; % 判别

    if jdg > 0 % 判别数大于0 不选这个位置
        location(fac) = 0;
    else
        location(fac) = 1; % 小于等于0 选
        cost_for_fac(fac) = data.fix(fac) - sum_mu;
    end

end

end
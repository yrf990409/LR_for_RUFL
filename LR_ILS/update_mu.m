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
if lr_para.square
    k_step = lr_para.alpha * (ub-lb) / sum(abs(violate),"all").^2;
else
    k_step = lr_para.alpha * (ub-lb) / sum(abs(violate),"all");
end

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


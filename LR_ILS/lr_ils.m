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
flag_modify = false;    % 快速&慢速切换时强制更正上下界
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
    if lr_para.ils
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


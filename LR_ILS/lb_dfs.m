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




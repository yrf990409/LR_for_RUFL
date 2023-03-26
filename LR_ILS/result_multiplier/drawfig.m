clc
clear
close all


% 读取相同rho参数结果

for i = [0.05, 0.1, 0.2, 0.3]
    
figure

% load(['参考-',num2str(i),'-5-.mat'])
% iter = lr_result.iter;
% rec_lb = lr_result.rec_lb;
% rec_ub = lr_result.rec_ub;
% a = plot(2:iter, rec_lb(2:iter), LineWidth=1.5, Color='red'); % 下界
% hold on
% plot(2:iter, rec_ub(2:iter), LineWidth=1.5, Color='red'); % 下界
% hold on


% load(['全0-',num2str(i),'-5-.mat'])
% iter = lr_result.iter;
% rec_lb = lr_result.rec_lb;
% rec_ub = lr_result.rec_ub;
% b = plot(2:iter, rec_lb(2:iter), LineWidth=1.5, Color="green"); % 下界
% hold on
% plot(2:iter, rec_ub(2:iter), LineWidth=1.5, Color="green"); % 下界
% hold on


load(['本文-',num2str(i),'-5-.mat'])
iter = lr_result.iter;
rec_lb = lr_result.rec_lb;
rec_ub = lr_result.rec_ub;
c = plot(2:iter, rec_lb(2:iter), LineWidth=1.5, Color='blue'); % 下界
hold on
plot(2:iter, rec_ub(2:iter), LineWidth=1.5, Color='blue'); % 下界
hold on


load(['平方-',num2str(i),'-5-.mat'])
iter = lr_result.iter;
rec_lb = lr_result.rec_lb;
rec_ub = lr_result.rec_ub;
b = plot(2:iter, rec_lb(2:iter), LineWidth=1.5, Color='red'); % 下界
hold on
plot(2:iter, rec_ub(2:iter), LineWidth=1.5, Color='red'); % 下界
hold on

% 处理
xlabel('迭代次数')
ylabel('上/下界')
legend([b,c],'分母取二次','分母取一次','FontSize',12,'FontName','Songti SC')          % 文字


% ,'Location','northeast'

xlim([0 500])
ylim([-0.5 4]*10e5)
hold off

end
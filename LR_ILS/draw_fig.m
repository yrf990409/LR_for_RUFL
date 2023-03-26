function draw_fig(lr_result)

iter = lr_result.iter;
rec_ils = lr_result.rec_ils;
rec_lb = lr_result.rec_lb;
rec_ub = lr_result.rec_ub;


figure

plot(2:iter, rec_lb(2:iter), LineWidth=1.5, Color='blue') % 下界
hold on

plot(2:iter, rec_ub(2:iter), LineWidth=1.5, Color='red')  % 上界
hold on

ils_imprv = find(rec_ils==1);
scatter(ils_imprv, rec_ub(ils_imprv),'r*');               % ILS生效
hold on

xlim([0 3000])
ylim([-0.5 4]*10e5)
hold on

xlabel('迭代次数')
ylabel('上/下界')
legend({'下界','最佳上界'},'Location','northeast')          % 文字

hold off
end


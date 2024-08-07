clc
clear
close all

data = [
0.1	7090419.9	3124950	3965415.514	54.3860083
0.2	7345247.85	3124950	4219427.674	870.1761327
0.3	7617992.88	3124950	4488637.613	4405.266672
0.4	7913784.74	3124950	4774911.922	13922.81812
0.5	8239058.47	3124950	5080117.215	33991.25519
0.6	8601554.35	3124950	5406120.083	70484.26675
0.7	9010317.95	3124950	5754787.144	130580.8059
0.8	9471654.72	3124950	6123939.63	222765.09
0.9	9937270.28	4319380	5306396.322	311493.9581
1.0	10426426.71	4319380	5632280.732	474765.9779
1.1	10988921.36	4319380	5974436.492	695104.8682
1.2	11638030.42	4319380	6334175.688	984474.7317
1.3	12387706.57	4319380	6712347.461	1355979.109
1.4	13253041.92	4319380	7109800.939	1823860.981
1.5	14240588.43	4806730	7608669.634	1825188.796
1.6	15210335.33	4806730	8040828.581	2362776.749
1.7	16038348.93	5629860	8100631.146	2307857.784
1.8	16924979.02	5629860	8394415.26	2900703.76
1.9	17931541.49	5629860	8700643.018	3601038.472
2.0	19070759.66	5629860	9019769.101	4421130.559];

figure

plot(data(:,1), data(:,2),'-rx','LineWidth', 2, 'MarkerSize',10);
hold on

plot(data(:,1), data(:,3),'-o','LineWidth', 2, ...
    'Color', [10,79,162]/255, ...
    'MarkerFaceColor','none', ...
    'MarkerSize',8);
hold on

plot(data(:,1), data(:,4),'-^','LineWidth', 2, ...
    'Color',[110, 46, 128]/255,...
    'MarkerFaceColor','none', ...
    'MarkerSize',8);
hold on

plot(data(:,1), data(:,5),'-+','LineWidth', 2, ...
    'Color', [47, 102,27]/255, ...
    'MarkerFaceColor',[47, 102,27]/255, ...
    'MarkerSize',8);
hold on

xlabel('\beta','FontName','Times New Rome','FontSize',15)
ylabel('成本 (元)','FontName','Songti SC','FontSize',15,'rotation',90)

legend('总成本', '固定成本', '运输成本', '惩罚成本','FontName','Songti SC','Location','northwest','FontSize',12)
%, ...
     % [data(:,1), data(:,3)], 'LineWidth', 2, ...
     % [data(:,1), data(:,4)], 'LineWidth', 2, ...
     % [data(:,1), data(:,5)], 'LineWidth', 2);



% plot(x,y,'--gs',...
%     'LineWidth',2,...
%     'MarkerSize',10,...
%     'MarkerEdgeColor','b',...
%     'MarkerFaceColor',[0.5,0.5,0.5])

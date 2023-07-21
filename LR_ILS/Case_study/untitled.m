clc
clear
path = '../data/Li2021JOCData/16nodes/';

for beta = 0.1:0.1:2.0

    lr_case.q = load([path,'failure.csv']);                     % 使用案例损坏概率

    for i = 1:length(lr_case.q)
        lr_case.q(i) = beta * sqrt(2*lr_case.q(i) -  lr_case.q(i)^2);
    end
    disp(sum(lr_case.q)/ (length(lr_case.q)-1))

end
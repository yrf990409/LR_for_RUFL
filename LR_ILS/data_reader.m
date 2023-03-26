function data = data_reader(f_path)
%DATA_READER 读取数据
%   data包含三个数据
%% 数据读取
% disp(['导入数据，当前路径: ', f_path])
data.price = load([f_path, 'cost.csv']); % 价格矩阵
data.dmd = load([f_path, 'dmd.csv']);    % 客户需求
data.fix = load([f_path, 'fc.csv']);     % 固定成本
% disp('导入完成!')
% disp('---------------------------------')

% 验证数据
validateattributes(data.price, {'double'}, {'size', [length(data.dmd)+length(data.fix), length(data.fix)]})

end


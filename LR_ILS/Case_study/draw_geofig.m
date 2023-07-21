function draw_geofig(lr_result, coord, name)

located = find(lr_result.bst_loc==true) - 1; % 已经建设的设施
unlocated = find(lr_result.bst_loc==false) - 1; % 已经建设的设施
unlocated(unlocated==0) = [];



figure
% 绘制客户的访问路线
sqc = lr_result.bst_sqc;
sqc(:,1) = sqc(:,1) - sqc(1) + 1;
sqc(:,2:end) = sqc(:,2:end) - 1;
% if rank > 0
%     sqc = sqc(:,[1,rank+1,end]);
% end

% frequency = zeros(size(coord,1));
% for i = 1:size(sqc,1)
%     for j = 1:size(sqc,2)
%         current = sqc(i,j);
%         successor = sqc(i,j+1);
%         if successor <= 0
%             break
%         end
%         frequency(current,successor) = frequency(current,successor) + 1;
%     end
% end
% frequency = frequency / max(max(frequency));
% line_width = sqrt(frequency)*3.5;
% 
% for i = 1:size(sqc,1)
%     for j = 1:size(sqc,2)
%         current = sqc(i,j);
%         successor = sqc(i,j+1);
%         if successor == 0
%             break
%         end
%         % if rank == 0
%         %     geoplot(coord([current,successor],1), ...
%         %         coord([current,successor],2), 'cyan-', ...
%         %         'LineWidth',max(line_width(current,successor),1))
%         % else
%             geoplot(coord([current,successor],1), ...
%                 coord([current,successor],2), 'cyan-','LineWidth',1)
%         % end
%         hold on
%     end
% end
% hold off

% hold on

% 画蓝色的实心圆表示未建设的设施
geoscatter(coord(located,1), coord(located,2), 90, "^",'red','filled')
hold on

% 红色的实心圆表示建设的设施
geoscatter(coord(unlocated,1), coord(unlocated,2), 60, "blue","o", 'filled')
hold off

legend('客户','节点')
% 标记名称
% 控制字体的高度 向右偏移程度
if ~isempty(name)
    text(coord(1,1)-0.8, coord(1,2)-1,name(1))
    text(coord(2,1)-1.0, coord(2,2)+0.0,name(2))
    text(coord(3,1)-1.0, coord(3,2)-1.0,name(3))
    text(coord(4,1)+0.5, coord(4,2)+0.5,name(4))
    text(coord(5,1)+0.5, coord(5,2)+0.5,name(5))
    text(coord(6,1)+0.5, coord(6,2)+0.5,name(6))
    text(coord(7,1)+0.5, coord(7,2)+0.5,name(7))
    text(coord(8,1)+0.5, coord(8,2)+0.5,name(8))
    text(coord(9,1)+0.0, coord(9,2)+0.5,name(9))
    text(coord(10,1)+0.0, coord(10,2)+0.5,name(10))
    text(coord(11,1)+0.7, coord(11,2)-0.8,name(11))
    text(coord(12,1)+0.5, coord(12,2)+0.5,name(12))
    text(coord(13,1)+0.8, coord(13,2)-1.5,name(13))
    text(coord(14,1)+0.0, coord(14,2)+0.5,name(14))
    text(coord(15,1)-0.5, coord(15,2)+0.5,name(15))
    text(coord(16,1)+0.0, coord(16,2)+0.5,name(16))
end
hold off
end


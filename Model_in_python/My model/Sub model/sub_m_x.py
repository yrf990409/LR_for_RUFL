import gurobipy as gp
import numpy as np
import math
import copy


def previous(i, j, J):
    before = copy.deepcopy(J)
    before = [i] + before
    if j != 0:
        before.remove(j)
    return before


def later(i, j, bar_J):
    after = copy.deepcopy(bar_J)
    if i != j:
        after.remove(j)
    return after

def create_solve(cost, dmd, temp_mu, max_visit_num, q):
    cus_num = len(dmd) # 客户数
    node_num = cost.shape[0] # 节点数（虚拟 设施 客户）
    fac_num = node_num - cus_num - 1 # 设施数

    # 集合设置
    J = [j for j in range(1, fac_num+1)] # 设施集合
    I = [i for i in range(fac_num+1, node_num)] # 客户集合
    bar_J = [j for j in range(0, fac_num+1)] # 设施拓展集合
    R = [r for r in range(1,max_visit_num)] # 等级

    # 常数集合
    lmd = {i : dmd[i-fac_num-1] for i in I} # lambda需求
    c = {(i,j) : cost[i,j] for i in bar_J+I for j in bar_J} # 价格

    mu = {(i,j) : temp_mu[i-fac_num-1,j] for i in I for j in bar_J} # 价格

    m = gp.Model()
    x = m.addVars(((i, j, j_p) for i in I for j in J+[i] for j_p in later(i,j,bar_J)), vtype = gp.GRB.BINARY,name = 'x') # 弧(j,j_p)属于客户i
    p = m.addVars(((i, j, j_p) for i in I for j in J+[i] for j_p in later(i,j,bar_J)), lb = 0, ub = 1, vtype = gp.GRB.CONTINUOUS,name = 'p') # 属于客户i的弧(j,j_p)的概率
    w = m.addVars(((i, j, j_p) for i in I for j in J+[i] for j_p in later(i,j,bar_J)), lb = 0, ub = 1, vtype = gp.GRB.CONTINUOUS,name = 'w') # 期望价格


    item_1 = gp.quicksum((lmd[i] * c[k,j] * w[i,k,j] + mu[i,j] * x[i,k,j]) for i in I for j in J for k in previous(i,j,J))
    item_2 = gp.quicksum(lmd[i] * c[k,0] * w[i,k,0] for i in I for k in previous(i,0,J))
    m.setObjective(item_1 + item_2)

    m.addConstrs((gp.quicksum(x[i,i,j] for j in later(i,i,bar_J)) == 1 for i in I), name = 'flowin')
    m.addConstrs((gp.quicksum(x[i,j,0] for j in previous(i,0,J)) == 1 for i in I), name = 'flowout')
    m.addConstrs((gp.quicksum(x[i,j,k] for k in later(i,j,bar_J)) == gp.quicksum(x[i,k,j] for k in previous(i,j,J)) for i in I for j in J), name = 'balance')
    m.addConstrs((p[i,i,j] == x[i,i,j] for i in I for j in later(i,i,bar_J)), name = 'probinit')
    m.addConstrs(((q[j] * gp.quicksum(w[i,k,j] for k in previous(i,j,J)) == p[i,j,j_p]) for i in I for j in J for j_p in later(i,j,bar_J)), name = 'probbalance')
    m.addConstrs(((gp.quicksum(x[i,j,k] for j in J+[i] for k in later(i,j,bar_J))) <= max_visit_num for i in I), name = 'maxtry')
    m.addConstrs((w[i,j,k] <= p[i,j,k] for i in I for j in J+[i] for k in later(i,j,bar_J)), name='u1b')
    m.addConstrs((w[i,j,k] <= x[i,j,k] for i in I for j in J+[i] for k in later(i,j,bar_J)), name='u2b')
    m.addConstrs((w[i,j,k] >= p[i,j,k] + x[i,j,k] -1 for i in I for j in J+[i] for k in later(i,j,bar_J)), name='lb')

    m.Params.OutputFlag = 0
    m.Params.MIPGap = 0.00001
    m.Params.timeLimit = 1000
    m.optimize()

    print('GRB: %.2f\t%.2f\t%.2f\n' % (m.objVal, m.ObjBound, m.Runtime))
    


# 导入数据
np.set_printoptions(suppress=True)    # 取消numpy打印的科学计数法

# cost 矩阵的第一索引位置是0 默认为虚拟设施
root = './data/SnyderData/15nodes/'
cost = np.loadtxt(root+'cost.csv',  # 相对路径下的csv文件
                  dtype=None,         # 数据类型默认
                  encoding='UTF-8',   # 注意此文件为UTF-8格式且取消BOM
                  delimiter=',')      # 分隔符

dmd = np.loadtxt(root+'dmd.csv',  # 相对路径下的csv文件
                  dtype=None,         # 数据类型默认
                  encoding='UTF-8',   # 注意此文件为UTF-8格式且取消BOM
                  delimiter=',')      # 分隔符

fc = np.loadtxt(root+'fc.csv',  # 相对路径下的csv文件
                  dtype=None,         # 数据类型默认
                  encoding='UTF-8',   # 注意此文件为UTF-8格式且取消BOM
                  delimiter=',')      # 分隔符
temp_mu = np.loadtxt('mu.csv',  # 相对路径下的csv文件
                  dtype=None,         # 数据类型默认
                  encoding='UTF-8',   # 注意此文件为UTF-8格式且取消BOM
                  delimiter=',')      # 分隔符

max_visit_num = 5 # 客户的最大尝试次数

q = [1,
0.280229272487245,
0.300548187369488,
0.347793216749548,
0.348141183920886,
0.412653434245841,
0.371893714010090,
0.359461866715963,
0.392528088775915,
0.350061235734810,
0.308464911686774,
0.350236310117626,
0.358385097077850,
0.223097322143136,
0.368930433225296,
0.367641433773900]

create_solve(cost, dmd, temp_mu, max_visit_num, q)
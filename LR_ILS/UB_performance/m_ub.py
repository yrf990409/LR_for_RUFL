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

def get_sol(x, I, bar_J, max_visit_num):
    plan = np.zeros((len(I), max_visit_num+1))
    for i in I:
        plan[i-I[0], 0] = i
        for k in later(i,i,bar_J):
            if math.isclose(x[i,i,k].X, 1, rel_tol=0.05):
                plan[i-I[0], 1] = k
                ind = k
                break
        
        count = 1
        flag = False
        while True:
            for k in later(i, ind, bar_J):
                if ind == bar_J[0]:
                    flag = True
                    break
                if math.isclose(x[i,ind,k].X, 1, rel_tol=0.05):
                    count = count+1
                    plan[i-I[0], count] = k
                    ind = k
            
            if flag:
                break
    return plan

    


def create_solve(f, cost, dmd, temp_mu, max_visit_num, q, mu_mode, rho, loc):
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
    
    y = m.addVars((j for j in J), vtype = gp.GRB.BINARY, name = 'y')
    m.write('y.lp')
    x = m.addVars(((i, j, j_p) for i in I for j in J+[i] for j_p in later(i,j,bar_J)), vtype = gp.GRB.BINARY,name = 'x') # 弧(j,j_p)属于客户i
    p = m.addVars(((i, j, j_p) for i in I for j in J+[i] for j_p in later(i,j,bar_J)), lb = 0, ub = 1, vtype = gp.GRB.CONTINUOUS,name = 'p') # 属于客户i的弧(j,j_p)的概率
    w = m.addVars(((i, j, j_p) for i in I for j in J+[i] for j_p in later(i,j,bar_J)), lb = 0, ub = 1, vtype = gp.GRB.CONTINUOUS,name = 'w') # 期望价格
    

    item_1 = gp.quicksum(f[j] * y[j] for j in J)
    item_2 = gp.quicksum((lmd[i] * c[k,j] * w[i,k,j]) for i in I for j in bar_J for k in previous(i,j,J))
    m.setObjective(item_1 + item_2)
    
    m.addConstrs((gp.quicksum(x[i,k,j] for k in previous(i,j,J)) <= y[j] for i in I for j in J), name='assign2open')
    m.addConstrs((gp.quicksum(x[i,i,j] for j in later(i,i,bar_J)) == 1 for i in I), name = 'flowin')
    m.addConstrs((gp.quicksum(x[i,j,0] for j in previous(i,0,J)) == 1 for i in I), name = 'flowout')
    m.addConstrs((gp.quicksum(x[i,j,k] for k in later(i,j,bar_J)) == gp.quicksum(x[i,k,j] for k in previous(i,j,J)) for i in I for j in J), name = 'balance')
    m.addConstrs((p[i,i,j] == x[i,i,j] for i in I for j in later(i,i,bar_J)), name = 'probinit')
    m.addConstrs(((q[j] * gp.quicksum(w[i,k,j] for k in previous(i,j,J)) == p[i,j,j_p]) for i in I for j in J for j_p in later(i,j,bar_J)), name = 'probbalance')
    m.addConstrs(((gp.quicksum(x[i,j,k] for j in J+[i] for k in later(i,j,bar_J))) <= max_visit_num for i in I), name = 'maxtry')
    m.addConstrs((w[i,j,k] <= p[i,j,k] for i in I for j in J+[i] for k in later(i,j,bar_J)), name='u1b')
    m.addConstrs((10000*w[i,j,k] <= 10000*x[i,j,k] for i in I for j in J+[i] for k in later(i,j,bar_J)), name='u2b')
    m.addConstrs((w[i,j,k] >= p[i,j,k] + x[i,j,k] -1 for i in I for j in J+[i] for k in later(i,j,bar_J)), name='lb')
    
    for j in J:
        if j in loc:
            m.addConstr(m.getVarByName('y[%d]' % j) == 1, name='location[%d]' %j)
        else:
            m.addConstr(m.getVarByName('y[%d]' % j) == 0, name='location[%d]' %j)

    m.Params.OutputFlag = 0
    m.Params.MIPGap = 0.00001
    m.Params.timeLimit = 1000
    m.optimize()


    plan = get_sol(x, I, bar_J, max_visit_num)
    cost = np.zeros([len(I),1])

    for i in I:
        item_1_x = gp.quicksum((lmd[i] * c[k,j] * w[i,k,j] + mu[i,j] * x[i,k,j]) for j in J for k in previous(i,j,J))
        item_2_x = gp.quicksum(lmd[i] * c[k,0] * w[i,k,0] for k in previous(i,0,J))
        cost[i-len(J)-1] = item_1_x.getValue()+item_2_x.getValue()

    print('GRB:\t%.2f\t%.2f\t%.2f\t%.2f\t%d\t%d\n' % (m.objVal, m.ObjBound, m.Runtime, rho, mu_mode, max_visit_num))

    return plan,cost
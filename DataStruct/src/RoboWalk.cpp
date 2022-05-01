//
// Created by Administrator on 2022/5/1.
//

#include "head/RoboWalk.h"


/*
    int N：表示有N个位置 1 2 3 ... N
    int s：机器人的初始位置，1~N之间
    int e：机器人的目标位置
    int k：机器人必须走k步
    问：走的方法数
 */

int f1(int N, int e, int r, int cur) {
    if (r == 0) {
        return cur == e ? 1 : 0;
    }
    if (cur == 1) {
        return f1(N, e, r - 1, 2);
    }
    if (cur == N) {
        return f1(N, e, r - 1, N - 1);
    }
    return f1(N, e, r - 1, cur - 1) + f1(N, e, r - 1, cur + 1);
}

void RoboWalk(int N, int e, int k, int s) {
    //int res = f1(N, e,k,s);
    std::vector<int> temn;
    temn.resize(N + 1);
    for (auto it = temn.begin(); it != temn.end(); it++) {
        *it = -1;
    }
    std::vector<std::vector<int>> temk;
    for (int i = 0; i < k + 1; ++i) {
        temk.push_back(temn);
    }
    int res = f2(N, e, k, s, temk);
    std::cout << "一共有 " << res << "种方法" << std::endl;
}

//记忆搜索版本
int f2(int N, int e, int r, int cur, std::vector<std::vector<int>>& dp) {
    if(dp[r][cur]!=-1){
        return dp[r][cur];
    }
    if (r == 0) {
        dp[r][cur] = cur == e ? 1 : 0;
        return dp[r][cur];
    }if (cur == 1) {
        dp[r][cur] = f2(N, e, r - 1, 2, dp);
    }else if (cur == N) {
        dp[r][cur] = f2(N, e, r - 1, N - 1, dp);
    }else{
        dp[r][cur] = f2(N, e, r - 1, cur - 1, dp) + f2(N, e, r - 1, cur + 1, dp);
    }
    return dp[r][cur];
}
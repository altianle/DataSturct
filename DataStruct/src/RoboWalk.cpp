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

int f(int N, int e, int r, int cur) {
    if (r == 0) {
        return cur == e ? 1 : 0;
    }
    if (cur == 1) {
        return f(N, e, r - 1, 2);
    }
    if (cur == N) {
        return f(N, e, r - 1, N - 1);
    }
    return f(N, e, r - 1, cur - 1) + f(N, e, r - 1, cur + 1);
}

void RoboWalk(int N, int e, int k, int s){
    int res = f(N, e,k,s);
    std::cout << "一共有 " << res << "种方法" << std::endl;
}
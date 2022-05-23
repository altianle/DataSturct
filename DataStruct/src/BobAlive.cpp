//
// Created by Administrator on 2022/5/2.
//
#include "head/BobAlive.h"

/****************
    前两个参数：表的大小
    中间两个参数：鲍勃当前的位置
    最后一个参数：需要走几步
    鲍勃每次都会随机走，问鲍勃活下来的概率是多少
 **************/

//活下来的方法数
int process(int x, int y, int curx, int cury, int k) {
    if (curx < 0 || cury < 0 || curx == x || cury == y) {
        return 0;
    }
    if (k == 0) {
        return 1;
    }
    return process(x, y, curx + 1, cury, k - 1) +
           process(x, y, curx - 1, cury, k - 1) +
           process(x, y, curx, cury + 1, k - 1) +
           process(x, y, curx, cury - 1, k - 1);
}

int bobAlive(int x, int y, int curx, int cury, int k) {
    int res = process(x, y, curx, cury, k);
    std::cout << "Bob活下来的方法数：" << res << std::endl;
}
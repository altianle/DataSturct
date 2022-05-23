//
// Created by Administrator on 2022/5/2.
//
#include "head/BobAlive.h"

/****************
    ǰ������������Ĵ�С
    �м�����������������ǰ��λ��
    ���һ����������Ҫ�߼���
    ����ÿ�ζ�������ߣ��ʱ����������ĸ����Ƕ���
 **************/

//�������ķ�����
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
    std::cout << "Bob�������ķ�������" << res << std::endl;
}
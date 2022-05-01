//
// Created by Administrator on 2022/5/1.
//

#include "head/RoboWalk.h"

/*
    int N����ʾ��N��λ�� 1 2 3 ... N
    int s�������˵ĳ�ʼλ�ã�1~N֮��
    int e�������˵�Ŀ��λ��
    int k�������˱�����k��
    �ʣ��ߵķ�����
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
    std::cout << "һ���� " << res << "�ַ���" << std::endl;
}
//
// Created by Administrator on 2022/5/1.
//
#include "head/CoinMin.h"

/*
 * ��һ���飬����һ��Ӳ�ң���������Ҫ��ö���Դչ���Ҫ��Ǯ��
 * ����ǰindex,����rest����Ŀû�дչ�
*/
int x1 = 0;
int x2 = 0;
int countCoin1(std::vector<int> &arr, int index, int rest) {
    x1++;
    if (rest < 0) {
        return -1;
    }
    if (rest == 0) {
        return 0;
    }
    if (index == arr.size()) {
        return -1;
    }
    int p1 = countCoin1(arr, index + 1, rest);
    int p2 = countCoin1(arr, index + 1, rest - arr[index]);
    if (p1 == -1 && p2 == -1) {
        return -1;
    }
    if (p1 == -1) {
        return p2 + 1;
    }
    if (p2 == -1) {
        return p1;
    } else return std::min(p1, p2 + 1);
};

int countCoin2(std::vector<int> &arr, int index, int rest, std::vector<std::vector<int>> &dp) {
    x2++;
    if (rest < 0) {
        return -1;
    }
    if (dp[index][rest] != -2){
        return dp[index][rest];
    }
    if (rest == 0) {
        dp[index][rest] = 0;
        return dp[index][rest];
    }
    //rest > 0
    if (index == arr.size()) {
        dp[index][rest] = -1;
        return dp[index][rest];
    }
    int p1 = countCoin2(arr, index + 1, rest, dp);
    int p2 = countCoin2(arr, index + 1, rest - arr[index], dp);
    if (p1 == -1 && p2 == -1) {
        dp[index][rest] = -1;
    } else if (p1 == -1) {
        dp[index][rest] = p2 + 1;
    } else if (p2 == -1) {
        dp[index][rest] = p1;
    } else {
        dp[index][rest] = std::min(p1, p2 + 1);
    }
    return dp[index][rest];
};

void coinMin() {
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);


    std::vector<std::vector<int>> matrix(arr.size()+1,std::vector<int>(11,-2));
    int res = countCoin1(arr, 0, 10);
    int res2 = countCoin2(arr, 0, 10, matrix);
    std::cout << "�����չ�10Ԫ������Ҫ " << res << "öӲ��" << std::endl;
    std::cout << "�������ô���Ϊ��" << x1 << "��!" << std::endl;
    std::cout << "��̬�ع�չ�10Ԫ������Ҫ " << res2 << "öӲ��" << std::endl;
    std::cout << "��̬�ع���ô���Ϊ��" << x2 << "��!" << std::endl;
};
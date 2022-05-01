//
// Created by Administrator on 2022/5/1.
//

#ifndef DATASTRUCT_COINMIN_H
#define DATASTRUCT_COINMIN_H
#include "iostream"
#include "math.h"
#include "vector"
#include "time.h"
#include "windows.h"
void coinMin();
int countCoin1(std::vector<int> &arr, int index, int rest);
int countCoin2(std::vector<int> &arr, int index, int rest, std::vector<std::vector<int>> &dp);
#endif //DATASTRUCT_COINMIN_H

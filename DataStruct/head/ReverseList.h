//
// Created by Administrator on 2022/5/23.
//

#ifndef DATASTRUCT_REVERSELIST_H
#define DATASTRUCT_REVERSELIST_H
#include "iostream"
class node {
public:
    node();
    node(int num) { val = num; };
    int val;
    node *next = nullptr;
};

node* rotate(node* head, int n);
void rotateTest();
#endif //DATASTRUCT_REVERSELIST_H

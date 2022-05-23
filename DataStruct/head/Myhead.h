//
// Created by Administrator on 2022/5/23.
//

#ifndef DATASTRUCT_MYHEAD_H
#define DATASTRUCT_MYHEAD_H
#include "iostream"
#include "vector"
#include "stack"
#include "string"

class TreeNode{
public:
    TreeNode();
    TreeNode(int num){val = num;};
    int val;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
    ~TreeNode(){
        delete left;
        delete right;
    };
};

void preOrder(TreeNode* node);
void printOrder();
#endif //DATASTRUCT_MYHEAD_H

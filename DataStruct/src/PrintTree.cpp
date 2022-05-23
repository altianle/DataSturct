//
// Created by Administrator on 2022/5/23.
//
#include "head/Myhead.h"

//非递归的二叉树遍历
void preOrder(TreeNode *node) {
    std::cout << "pre-order: ";
    std::stack<TreeNode *> nodestack;
    if (node != nullptr)
        nodestack.push(node);
    while (!nodestack.empty()) {
        std::cout << nodestack.top()->val << ", ";
        node = nodestack.top();
        nodestack.pop();
        if (node->right != nullptr) {
            nodestack.push(node->right);
        }
        if (node->left != nullptr) {
            nodestack.push(node->left);
        }
    }
    std::cout<<std::endl;
}

void inOrder(TreeNode *node){
    std::cout << "in-order: ";
    std::stack<TreeNode *> nodestack;
    while (node != nullptr){
        nodestack.push(node);
        node = node->left;
    }
    while (!nodestack.empty()){
        TreeNode *cur = nodestack.top();
        std::cout << nodestack.top()->val << ", ";
        nodestack.pop();
        if(cur->right!= nullptr){
            cur = cur->right;
            nodestack.push(cur);
            while (cur->left!= nullptr){
                cur = cur->left;
                nodestack.push(cur);
            }
        }
    }
    std::cout<<std::endl;
}

void posOrder(TreeNode *node){
    std::cout << "pos-order: ";
    std::stack<TreeNode *> nodestack;
    std::stack<TreeNode *> collectstack;
    nodestack.push(node);
    while (!nodestack.empty()){
        TreeNode *cur = nodestack.top();
        nodestack.pop();
        collectstack.push(cur);
        if(cur->left!= nullptr){
            nodestack.push(cur->left);
        }
        if(cur->right!= nullptr){
            nodestack.push(cur->right);
        }

    }
    while (!collectstack.empty()){
        std::cout << collectstack.top()->val << ", ";
        collectstack.pop();
    }
    std::cout<<std::endl;
}

void printOrder(){
    TreeNode a(1);
    TreeNode b(2);
    TreeNode c(3);
    TreeNode d(4);
    TreeNode e(5);
    TreeNode f(6);
    TreeNode g(7);
    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.left = &f;
    c.right = &g;
    TreeNode* test = &a;
    preOrder(test);
    inOrder(test);
    posOrder(test);
}
//
// Created by Administrator on 2022/5/23.
//
#include "head/ReverseList.h"
//每个节点向右旋转n次

node *rotate(node *head, int n) {
    if (head == nullptr)
        return nullptr;
    if (head->next == nullptr)
        return head;
    node *cur = head;
    node *last = nullptr;
    node *pre = nullptr;

    for (int i = n; i > 0; i--) {
        pre = cur;
        cur = cur->next;
        if (cur == nullptr) {
            cur = head;
            last = pre;
        }
    }

    if (last == nullptr) {
        node *temp = cur;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        last = temp;
    }
    last->next = head;
    pre->next = nullptr;
    return cur;
}

void rotateTest() {
    node a(1);
    node b(2);
    node c(3);
    node d(4);
    node e(5);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    node *res = rotate(&a, 8);
    while (res != nullptr) {
        std::cout << res->val << std::endl;
        res = res->next;
    }

}
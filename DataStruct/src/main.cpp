#pragma once

#include"head/MySort.h"
#include"head/SerchOdd.h"
#include"head/MyKMP.h"
#include "head/Nooperate.h"
#include "head/RoboWalk.h"
#include "head/CoinMin.h"
#include "head/BobAlive.h"
#include "head/ReverseList.h"
#include "head/Myhead.h"
using namespace std;

void PrintVector(vector<int> arr) {
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
        cout << *it << ",";
    }
}

int main() {
    //string s = "abcdefggf";
    //string m = "fggf";
    //KMP kmp;
    //int i = kmp.getIndexof(s, m);
    //cout << i << endl;

    //nptest();
    //RoboWalk(5, 4, 4, 2);
    //coinMin();
    //bobAlive(9, 9, 5, 5, 10);
    //rotateTest();
    printOrder();
    return 0;
}
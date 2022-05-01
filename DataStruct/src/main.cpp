#pragma once

#include"head/MySort.h"
#include"head/SerchOdd.h"
#include"head/MyKMP.h"
#include "head/Nooperate.h"
#include "head/RoboWalk.h"
#include "head/CoinMin.h"

using namespace std;

void PrintVector(vector<int> arr) {
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
        cout << *it << ",";
    }
}

int main() {
    /*vector<int> testArr;
    testArr.push_back(2);
    testArr.push_back(3);
    testArr.push_back(5);
    testArr.push_back(4);
    testArr.push_back(2);
    testArr.push_back(3);
    testArr.push_back(3);
    testArr.push_back(5);
    testArr.push_back(4);*/

    //MyInsertSort myinsertsort;
    //PrintVector(myinsertsort.pocess(testarr));
    //int c = SerchOdd(testArr);
    //cout << c << endl;
    //string s = "abcdefggf";
    //string m = "fggf";
    //KMP kmp;
    //int i = kmp.getIndexof(s, m);
    //cout << i << endl;

    //nptest();
    //RoboWalk(5, 4, 4, 2);
    coinMin();
    system("pause");
    return 0;
}
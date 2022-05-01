#pragma once
#include<iostream>
#include<string>
#include <array>
using namespace std;

class KMP {
public:
	int getIndexof(string s, string m);
	array<int, 100> getNextArray(string m);
};
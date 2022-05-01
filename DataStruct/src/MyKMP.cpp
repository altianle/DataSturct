#include"head/MyKMP.h"
#include<array>
int KMP::getIndexof(string s, string m) {
	if (s.size() < 1 || m.size() > s.size() || m.size() == 0) {
		return -1;
	}
	array<int, 100> nextarray = getNextArray(m);
	int i = 0;
	int j = 0;
	while (i < m.size() && j < s.size()) {
		if (s[j] == m[i]) {
			j++;
			i++;
		}
		else if (nextarray[i] == -1) {
			j++;
		}
		else
			i = nextarray[i];
	}
	int c = i < m.size() ? -1 : j - i;
	return c;
}

array<int, 100> KMP::getNextArray(string m) {
	array<int, 100> nextArray;
	if (m.size() == 1) {
		nextArray[0] == -1;
		return nextArray;
	}
	nextArray[0] = -1;
	nextArray[1] = 0;
	int i = 2;
	int cn = 0;
	while (i < m.size()) {
		if (m[i - 1] == m[cn]) {
			nextArray[i++] = ++cn;
		}
		else if (cn > 0) {
			cn = nextArray[cn];
		}else nextArray[i++] = 0;
	}
	return nextArray;
}
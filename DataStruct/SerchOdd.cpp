#include"SerchOdd.h"

using namespace std;


int SerchOdd(vector<int> arr) {
	int err = 0;
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		err = err ^ (*it);
	}
	return err;
}
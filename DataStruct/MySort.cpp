#include"MySort.h"

MyQuickSort::MyQuickSort() {

}

MyQuickSort::~MyQuickSort() {

}

MyInsertSort::MyInsertSort() {

}

MyInsertSort::~MyInsertSort() {

}

vector<int> MyInsertSort::pocess(vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		for (int j = i - 1; j > 0 && arr[j + 1] < arr[j]; j--) {
			swap(arr[j], arr[j + 1]);
		}
	}
	return arr;
}
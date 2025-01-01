#pragma once
#include "Shared_Heather.h"

using namespace std;

void sum_arr(int arr[], int size) {
	//(1)arr의 모든 원소의 합을 구하는 프로그램
	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	cout << "모든 원소의 합: " << sum << endl;
}

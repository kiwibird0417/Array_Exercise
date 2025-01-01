#pragma once
#include "Shared_Heather.h"

void getMinMax(int arr[], int size) {
	//2번 문제 : 최솟값, 최대값 구하기
	int min = arr[0], max = arr[0];
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}

		if (max < arr[i]) {
			max = arr[i];
		}
	}

	cout << "최소값: " << min << ", ";
	cout << "최대값: " << max << endl;
}
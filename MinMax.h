#pragma once
#include "Shared_Heather.h"

void getMinMax(int arr[], int size) {
	//2�� ���� : �ּڰ�, �ִ밪 ���ϱ�
	int min = arr[0], max = arr[0];
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}

		if (max < arr[i]) {
			max = arr[i];
		}
	}

	cout << "�ּҰ�: " << min << ", ";
	cout << "�ִ밪: " << max << endl;
}
#pragma once
#include "Shared_Heather.h"

void sortToAscend(int arr[], int size) {
	//4�� ���� : arr�� ���ҵ��� ������������ ����
	int temp = 0;
	int min = arr[0], max = arr[0];

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

				//swap(arr[j], arr[j + 1]);
			}
		}
	}

	// �迭 ���
	cout << "�迭: {";
	for (int i = 0; i < size - 1; i++) {
		cout << arr[i] << ", ";
	}
	cout << arr[size - 1] << "}";
	cout << endl;
}
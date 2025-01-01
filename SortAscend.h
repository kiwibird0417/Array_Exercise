#pragma once
#include "Shared_Heather.h"

void sortToAscend(int arr[], int size) {
	//4번 문제 : arr의 원소들을 오름차순으로 정렬
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

	// 배열 출력
	cout << "배열: {";
	for (int i = 0; i < size - 1; i++) {
		cout << arr[i] << ", ";
	}
	cout << arr[size - 1] << "}";
	cout << endl;
}
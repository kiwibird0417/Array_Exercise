#pragma once
#include "Shared_Heather.h"

using namespace std;

void sum_arr(int arr[], int size) {
	//(1)arr�� ��� ������ ���� ���ϴ� ���α׷�
	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	cout << "��� ������ ��: " << sum << endl;
}

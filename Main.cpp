#include "Shared_Heather.h"
#include <algorithm>

int main() {
	int arr[] = {1, 6, 9, 7, 3, 2, 0, 4, 8, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	//=================================================================
	cout << "[1�� ����]" << endl;
	//1-1�� ���� : ��� ������ ��
	sum_arr(arr, size);

	//1-2�� ���� : �ּڰ�, �ִ밪 ���ϱ�
	getMinMax(arr, size);

	//1-3�� ���� : �������� �迭 �籸��
    reverseArray(arr, size);

	/*
	reverse(begin(arr), end(arr));
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	*/

	//1-4�� ���� : arr�� ���ҵ��� ������������ ����
	sortToAscend(arr, size);
	cout << endl;

	/*
	sort(arr, arr + size); // ���� �ּҿ� �� �ּҸ� ����

	// ���ĵ� �迭 ���
	cout << "���ĵ� �迭: {";
	for (int i = 0; i < size - 1; i++) {
		cout << arr[i] << ", ";
	}
	cout << arr[size - 1] << "}" << endl;
	*/
	//=================================================================
	//2�� ����
	Student_Score(students_score);

	return 0;
}
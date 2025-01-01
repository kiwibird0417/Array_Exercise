#include "Shared_Heather.h"
#include <algorithm>

int main() {
	int arr[] = {1, 6, 9, 7, 3, 2, 0, 4, 8, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	//=================================================================
	cout << "[1번 문제]" << endl;
	//1-1번 문제 : 모든 원소의 합
	sum_arr(arr, size);

	//1-2번 문제 : 최솟값, 최대값 구하기
	getMinMax(arr, size);

	//1-3번 문제 : 역순으로 배열 재구성
    reverseArray(arr, size);

	/*
	reverse(begin(arr), end(arr));
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	*/

	//1-4번 문제 : arr의 원소들을 오름차순으로 정렬
	sortToAscend(arr, size);
	cout << endl;

	/*
	sort(arr, arr + size); // 시작 주소와 끝 주소를 지정

	// 정렬된 배열 출력
	cout << "정렬된 배열: {";
	for (int i = 0; i < size - 1; i++) {
		cout << arr[i] << ", ";
	}
	cout << arr[size - 1] << "}" << endl;
	*/
	//=================================================================
	//2번 문제
	Student_Score(students_score);

	return 0;
}
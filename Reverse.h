#pragma once
#include "Shared_Heather.h"

void reverseArray(int arr[], int size) {
    //3번 문제 :역순으로 배열 재구성
    //구글링을 통해 진행.
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    // 배열 출력
    cout << "역순 배열: {";
    for (int i = 0; i < size - 1; i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[size - 1] << "}";
    cout << endl;
}
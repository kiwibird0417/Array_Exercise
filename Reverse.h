#pragma once
#include "Shared_Heather.h"

void reverseArray(int arr[], int size) {
    //3�� ���� :�������� �迭 �籸��
    //���۸��� ���� ����.
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    // �迭 ���
    cout << "���� �迭: {";
    for (int i = 0; i < size - 1; i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[size - 1] << "}";
    cout << endl;
}
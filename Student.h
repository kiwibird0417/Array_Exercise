#pragma once
#include "Shared_Heather.h"

const int STUDENT_COUNT = 4;
const int SUBJECT_COUNT = 3;

int students_score[STUDENT_COUNT][SUBJECT_COUNT] = {
    {100, 100, 50},
    {90, 70, 80},
    {70, 80, 90},
    {80, 100, 90}
};

void Student_Score(int students_score[STUDENT_COUNT][SUBJECT_COUNT]) {
    cout << "[2�� ����]" << endl;
    int sum;

    // �� �л��� ����
    cout << "[�� �л��� ����]" << endl;
    for (int i = 0; i < STUDENT_COUNT; i++) {
        sum = 0;

        for (int j = 0; j < SUBJECT_COUNT; j++) {
            sum += students_score[i][j];
        }

        cout << "�л� " << i + 1 << "�� ����: " << sum << endl;
    }
    cout << endl;

    // �� ���� ���
    cout << "[�� ���� ���]" << endl;
    for (int i = 0; i < SUBJECT_COUNT; i++) {
        sum = 0;

        for (int j = 0; j < STUDENT_COUNT; j++) {
            sum += students_score[j][i];
        }

        // ����� �Ҽ��� 2�ڸ����� ���
        double average = static_cast<double>(sum) / STUDENT_COUNT;
        cout << "���� " << i + 1 << "�� ���: " << average << endl;
    }
}

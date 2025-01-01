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
    cout << "[2번 문제]" << endl;
    int sum;

    // 각 학생별 총점
    cout << "[각 학생별 총점]" << endl;
    for (int i = 0; i < STUDENT_COUNT; i++) {
        sum = 0;

        for (int j = 0; j < SUBJECT_COUNT; j++) {
            sum += students_score[i][j];
        }

        cout << "학생 " << i + 1 << "의 총점: " << sum << endl;
    }
    cout << endl;

    // 각 과목별 평균
    cout << "[각 과목별 평균]" << endl;
    for (int i = 0; i < SUBJECT_COUNT; i++) {
        sum = 0;

        for (int j = 0; j < STUDENT_COUNT; j++) {
            sum += students_score[j][i];
        }

        // 평균을 소수점 2자리까지 출력
        double average = static_cast<double>(sum) / STUDENT_COUNT;
        cout << "과목 " << i + 1 << "의 평균: " << average << endl;
    }
}

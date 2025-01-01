#pragma once
#include <iostream>

#include "Sum.h"
#include "MinMax.h"
#include "Reverse.h"
#include "SortAscend.h"
#include "Student.h"

using namespace std;

void sum_arr(int arr[], int size);
void getMinMax(int arr[], int size);
void reverseArray(int arr[], int size);
void sortToAscend(int arr[], int size);
void Student_Score(int students_score[STUDENT_COUNT][SUBJECT_COUNT]);
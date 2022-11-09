/*
 * @Author: Frank Chu
 * @Date: 2022-11-09 11:18:15
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-09 11:28:39
 * @FilePath: /Cpp/lab/lab09-week10/problem4.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>

void swap(int* a, int* b);
void sortArray(int* arr, int length);

int main() {
    int length;
    while(scanf("%d", &length) != EOF) {
        int a[1000];
        for(int i = 0; i < length; i++) {
            scanf("%d", &a[i]);
        }
        sortArray(a, length);
    }
}
void sortArray(int* arr, int length) {
    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void swap(int* lhs, int* rhs) {
    int temp = *lhs;
    *lhs = *rhs;
    *rhs = temp;
}
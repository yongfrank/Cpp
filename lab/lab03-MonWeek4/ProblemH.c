/*
 * @Author: Frank Chu
 * @Date: 2022-09-25 16:30:33
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-25 17:47:50
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemH.c
 * @Description: 问题 H: N个数找最大和最小
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include<stdio.h>
#include<stdlib.h>

int compare(const void* lhs, const void* rhs);

int main() {
    float array[10000];
    int arraySize;
    scanf("%d", &arraySize);
    for(int i = 0; i < arraySize; i++) {
        scanf("%f", &array[i]);
    }

    qsort(array, arraySize, sizeof(*array), compare);

    // for(int i = 0; i < arraySize; i++) {
    //     printf("%.0f ", array[i]);
    // }
    
    printf("max=%.0f, min=%.0f\n", array[arraySize - 1], array[0]);
}

int compare(const void* lhs, const void* rhs) {
    
    return *(float *)lhs - *(float *)rhs;

    // float y = *(float *)rhs;
    // float x = *(float *)lhs;
    // if (x > y) { return 1; } else { return 0; }
    // return y - x;
}

int descendCompare(const void* lhs, const void* rhs) {
    return *(float *)rhs - *(float *)lhs;
}
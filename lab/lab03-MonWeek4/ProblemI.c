/*
 * @Author: Frank Chu
 * @Date: 2022-09-26 08:55:34
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-26 09:01:38
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemI.c
 * @Description: 问题 I: 求10个数的平均值
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    float num[100], sum = 0.0, average;
    int numberOfArrays = 10;

    // scanf("%d", &numberOfArrays);

    for (int i = 0; i < numberOfArrays; i++) {
        scanf("%f", &num[i]);
        sum += num[i];
    }

    average = sum / numberOfArrays;
    printf("ave=%.1f\n", average);
    return 0;
}
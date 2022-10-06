/*
 * @Author: Frank Chu
 * @Date: 2022-09-26 09:05:10
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-28 12:14:34
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemK.c
 * @Description: 问题 K: 零起点学算法31——求多项式
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    // C Program to Calculate Average Using Arrays: https://www.programiz.com/c-programming/examples/average-arrays
    int positiveNumberN;
    scanf("%d", &positiveNumberN);

    int numberDirection = 1;
    int sum = 0;

    for (int i = 0; i < positiveNumberN; i++) {
        sum += (i + 1) * (numberDirection);
        numberDirection *= -1;
    }

    printf("%d\n", sum);
}
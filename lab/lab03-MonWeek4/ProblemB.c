/*
 * @Author: Frank Chu
 * @Date: 2022-09-24 14:35:42
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-25 14:08:54
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemB.c
 * @Description: 问题 B: 求n的阶乘
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include<stdio.h>

int main() {
    int positiveNumberToFactorial; 
    int factorial = 1;
    scanf("%d", &positiveNumberToFactorial);

    for(int i = 1; i <= positiveNumberToFactorial; i++) {
        factorial *= i;
    }
    printf("%d!=%d\n", positiveNumberToFactorial, factorial);
}
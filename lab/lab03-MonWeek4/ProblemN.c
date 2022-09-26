/*
 * @Author: Frank Chu
 * @Date: 2022-09-25 16:25:14
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-25 16:29:30
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemN.c
 * @Description: 问题 N: 零起点学算法36——求阶乘和
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */


#include<stdio.h>

int main() {
    int positiveInteger;
    scanf("%d", &positiveInteger);

    int sumOfFactorial = 0;

    for(int i = 0; i < positiveInteger; i++) {
        int factorial = 1;

        // factorial = 1 * 2 * 3 ...
        for(int j = 0; j <= i; j++) {
            factorial *= (j + 1);
        }
        sumOfFactorial += factorial;
    }

    printf("%d\n", sumOfFactorial);
}
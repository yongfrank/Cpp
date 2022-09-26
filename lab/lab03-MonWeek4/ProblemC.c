/*
 * @Author: Frank Chu
 * @Date: 2022-09-24 14:36:08
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-25 14:08:56
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemC.c
 * @Description: 问题 C: 求最大公约数
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include<stdio.h>

int main() {
    int firstNumber, secondNumber, greatestCommonDivisor;
    scanf("%d,%d", &firstNumber, &secondNumber);

    for(int i = 1; i <= firstNumber && i <= secondNumber; i++) {
        if (firstNumber % i == 0 && secondNumber % i == 0) {
            greatestCommonDivisor = i;
        }
    }

    printf("%d\n", greatestCommonDivisor);
}
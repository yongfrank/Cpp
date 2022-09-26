/*
 * @Author: Frank Chu
 * @Date: 2022-09-26 09:02:52
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-26 09:03:59
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemM.c
 * @Description: 问题 M: 零起点学算法35——求阶乘
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int factorial = 1;
    int positiveNumberN;
    scanf("%d", &positiveNumberN);

    for(int i = 0; i < positiveNumberN; i++) {
        factorial *= i + 1;
    }
    printf("%d\n", factorial);
}
/*
 * @Author: Frank Chu
 * @Date: 2022-09-25 12:45:14
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-25 14:13:30
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemE.c
 * @Description: 问题 E: 计算x^n(n个x相乘)
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    // Exponentiation (^): base ^ exponent = power
    float base;
    int exponent;
    
    float power = 1;

    scanf("%f %d", &base, &exponent);

    for(int i = 0; i < exponent; i++) {
        power *= base;
    }

    printf("%.2f\n", power);
}
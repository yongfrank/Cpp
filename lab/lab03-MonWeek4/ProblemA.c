/*
 * @Author: Frank Chu
 * @Date: 2022-09-24 14:31:54
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-24 14:34:24
 * @FilePath: /Cpp/lab/lab03/ProblemA.c
 * @Description: 问题 A: 求1+2+……+N的和
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include<stdio.h>

int main() {
    int positiveNumberSumFromOne; 
    int sum = 0;
    scanf("%d", &positiveNumberSumFromOne);

    for(int i = 0; i <= positiveNumberSumFromOne; i++) {
        sum += i;
    }

    printf("sum=%d\n", sum);
}
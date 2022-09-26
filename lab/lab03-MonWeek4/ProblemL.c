/*
 * @Author: Frank Chu
 * @Date: 2022-09-25 16:21:48
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-25 16:23:54
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemL.c
 * @Description: 问题 L: 零起点学算法34——3n+1问题
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int positiveInteger;
    scanf("%d", &positiveInteger);

    int stepCount = 0;
    while(positiveInteger != 1) {
        stepCount += 1;
        if (positiveInteger % 2 == 0) {
            positiveInteger /= 2;
        } else {
            positiveInteger = positiveInteger * 3 + 1;
        }
    }
    printf("%d\n", stepCount);
}

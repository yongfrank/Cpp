/*
 * @Author: Frank Chu
 * @Date: 2022-09-25 16:15:22
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-25 16:17:47
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemJ.c
 * @Description: 问题 J: 零起点学算法29——开始新的起程
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int sumOfArithmeticSequence = 0;
    
    int positiveNumberN;
    scanf("%d", &positiveNumberN);

    for(int i = 0; i < positiveNumberN; i++) {
        sumOfArithmeticSequence += i + 1;
    }
    printf("%d\n", sumOfArithmeticSequence);
}
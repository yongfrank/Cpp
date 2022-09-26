/*
 * @Author: Frank Chu
 * @Date: 2022-09-26 08:20:05
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-26 08:31:18
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemF.c
 * @Description: 问题 F: 求前n项之和1-2/3+3/5-4/7....
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    float sumOfFirstNTerms = 0;
    int firstNTerms;
    scanf("%d", &firstNTerms);

    float theSmallerOne = 1;
    float theLargerOne = 1;
    int directionOfPositiveOrNegative = 1;

    for(int i = 0; i < firstNTerms; i++) {
        sumOfFirstNTerms += (theSmallerOne / theLargerOne) * directionOfPositiveOrNegative;

        directionOfPositiveOrNegative *= -1;
        
        theSmallerOne += 1;
        theLargerOne += 2;
    }

    printf("%.2f\n", sumOfFirstNTerms);
}
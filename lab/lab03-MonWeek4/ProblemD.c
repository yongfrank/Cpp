/*
 * @Author: Frank Chu
 * @Date: 2022-09-25 09:52:13
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-25 14:09:01
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemD.c
 * @Description: 问题 D: 计算数列和2/1，3/2，5/3，8/5......
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include<stdio.h>

int main() {
    float sumOfFirstNTerms = 0;
    int firstNTerms;
    scanf("%d", &firstNTerms);

    float theSmallerOne = 1;
    float theLargerOne = 2;

    for(int i = 0; i < firstNTerms; i++) {
        sumOfFirstNTerms += theLargerOne / theSmallerOne;
        int temp = theLargerOne + theSmallerOne;
        
        theSmallerOne = theLargerOne;
        theLargerOne = temp;
    }

    printf("s=%.2f\n", sumOfFirstNTerms);
}
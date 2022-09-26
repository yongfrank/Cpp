/*
 * @Author: Frank Chu
 * @Date: 2022-09-26 08:33:54
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-26 08:41:16
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemQ.c
 * @Description: 问题 Q: 完数
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <math.h>

int main() {
    // https://en.wikipedia.org/wiki/Perfect_number
    int isPerfectNumber;
    scanf("%d", &isPerfectNumber);

    int sumOfPositiveDivisors = 0;

    for(int i = 1; i <= isPerfectNumber / 2; i++) {
        if(isPerfectNumber % i == 0) {
            sumOfPositiveDivisors += i;
        }
    }
    if(isPerfectNumber == sumOfPositiveDivisors) {
        printf("%d is cloze.\n", isPerfectNumber);
    } else {
        printf("%d is not cloze.\n", isPerfectNumber);
    }
}
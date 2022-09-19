/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 09:14:59
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 09:17:12
 * @FilePath: /Cpp/lab/lab02/ProblemI-DivideByDivide.c
 * @Description: Problem I: Divide by Divide - The Sixteenth Battle of 100 Questions for Beginners in C Language https://acm.zstu.edu.cn/problem.php?cid=6838&pid=8
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int inputNumber, firstDivisibleNumber, secondDivisibleNumber;
    scanf("%d %d %d", &inputNumber, &firstDivisibleNumber, &secondDivisibleNumber);
    if (inputNumber % firstDivisibleNumber == 0 && inputNumber % secondDivisibleNumber == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}
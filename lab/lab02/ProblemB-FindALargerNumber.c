/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 08:19:54
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 08:24:44
 * @FilePath: /Cpp/lab/lab02/ProblemB-FindALargerNumber.c
 * @Description: Question B: Find a Larger Number - The Eighth of the Hundred Questions for Beginners in C Language https://acm.zstu.edu.cn/problem.php?cid=6838&pid=1
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int firstNumber, secondNumber, thirdNumber;
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);
    if (firstNumber >= secondNumber) {
        if (firstNumber >= thirdNumber) {
            printf("%d\n", firstNumber);
        } else {
            printf("%d\n", thirdNumber);
        }
    } else {
        if (secondNumber >= thirdNumber) {
            printf("%d\n", secondNumber);
        } else {
            printf("%d\n", thirdNumber);
        }
    }
}
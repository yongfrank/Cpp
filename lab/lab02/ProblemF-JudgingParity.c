/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 08:50:50
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 08:51:54
 * @FilePath: /Cpp/lab/lab02/ProblemF-JudgingParity.c
 * @Description: Problem F: Zero-Based Learning Algorithm 24 - Judging Parity https://acm.zstu.edu.cn/problem.php?cid=6838&pid=5
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int positiveNumber;
    scanf("%d", &positiveNumber);
    if (positiveNumber % 2 == 0) {
        printf("odd\n");
    } else {
        printf("even\n");
    }
}
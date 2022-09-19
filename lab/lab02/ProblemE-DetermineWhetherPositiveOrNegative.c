/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 08:47:27
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 08:48:33
 * @FilePath: /Cpp/lab/lab02/ProblemE-DetermineWhetherPositiveOrNegative.c
 * @Description: Problem E: Determine whether an integer is a positive integer, a negative integer, or zero https://acm.zstu.edu.cn/problem.php?cid=6838&pid=4
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int inputNumber;
    scanf("%d", &inputNumber);

    if (inputNumber > 0) {
        printf("+\n");
    } else if (inputNumber == 0) {
        printf("0\n");
    } else {
        printf("-\n");
    }
}
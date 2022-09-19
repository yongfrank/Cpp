/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 09:42:50
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 09:43:03
 * @FilePath: /Cpp/lab/lab02/ProblemM-GradingSystem.c
 * @Description: Problem M: Zero Learning Algorithm 27 - Grading System https://acm.zstu.edu.cn/problem.php?cid=6838&pid=12
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (1500 + a * 5 + b * 5 >= 1800)
        printf("A\n");
    if (1500 + a * 5 + b * 5 >= 1700 && 1500 + a * 5 + b * 5 <= 1799)
        printf("B\n");
    if (1500 + a * 5 + b * 5 >= 1600 && 1500 + a * 5 + b * 5 <= 1699)
        printf("C\n");
    if (1500 + a * 5 + b * 5 < 1600)
        printf("D\n");
    return 0;
}

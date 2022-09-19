/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 09:39:13
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 09:41:51
 * @FilePath: /Cpp/lab/lab02/ProblemL-ChickenRabbitProblem.c
 * @Description: Problem L: Learning Algorithm 16 from Zero - Chicken and Rabbit in the Same Cage https://acm.zstu.edu.cn/problem.php?cid=6838&pid=11
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
int main()
{
    int n, m, a, b;
    scanf("%d %d", &n, &m);
    a = (m - 2 * n) / 2;
    b = (m - 2 * n) % 2;
    if (a > 0 && b == 0)
        printf("%d %d\n", n - a, a);
    else
        printf("No\n");
    return 0;
}

/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 09:45:23
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 09:45:27
 * @FilePath: /Cpp/lab/lab02/ProblemN-ParticipatingGames.c
 * @Description: Problem N: Learning Algorithms from Zero 28 - Participating in Programming Contests https://acm.zstu.edu.cn/problem.php?cid=6838&pid=13
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a <= 6 || b <= 2 || (a <= 20 && b < 5))
        printf("yes\n ");
    else
        printf("no\n ");

    return 0;
}
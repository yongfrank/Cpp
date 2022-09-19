/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 08:53:01
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 08:56:14
 * @FilePath: /Cpp/lab/lab02/ProblemG-RightTriangleJudge.c
 * @Description: Problem G: Zero Origin Learning Algorithm 25 - Judging Whether It Is a Right Triangle https://acm.zstu.edu.cn/problem.php?cid=6838&pid=6
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <math.h>

int main() {
    int first, second, third;
    scanf("%d %d %d", &first, &second, &third);
    if (pow(first, 2) + pow(second, 2) == pow(third, 2) || pow(third, 2) + pow(second, 2) == pow(first, 2) || pow(first, 2) + pow(third, 2) == pow(second, 2)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}
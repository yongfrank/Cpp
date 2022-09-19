/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 08:37:00
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 08:46:04
 * @FilePath: /Cpp/lab/lab02/ProblemD-AASystem.c
 * @Description: Question D: AA System - Ten of 100 Questions for Beginners in C Language https://acm.zstu.edu.cn/problem.php?cid=6838&pid=3
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int totalPeople;
    float first, second, third;
    float amountAfterGoingDutch;
    scanf("%d", &totalPeople);
    scanf("%f %f %f", &first, &second, &third);
    amountAfterGoingDutch = (first + second + third) / totalPeople;
    printf("%.2f\n", amountAfterGoingDutch);
    return 0;
}
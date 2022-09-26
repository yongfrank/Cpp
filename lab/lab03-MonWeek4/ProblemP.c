/*
 * @Author: Frank Chu
 * @Date: 2022-09-25 14:26:58
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-25 14:30:36
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemP.c
 * @Description: 问题 P: 百分制转换五级记分制
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include<stdio.h>

int main() {
    int scoreInput;
    scanf("%d", &scoreInput);

    switch (scoreInput)
    {
    case 90 ... 100:
        printf("good\n");
        break;
    case 80 ... 89:
        printf("nicer\n");
        break;
    case 70 ... 79:
        printf("medium\n");
        break;
    case 60 ... 69:
        printf("pass\n");
        break;
    case 0 ... 59:
        printf("fail\n");
        break;
    default:
        break;
    }
}
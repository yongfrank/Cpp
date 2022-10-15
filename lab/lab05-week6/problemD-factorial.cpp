/*
 * @Author: Frank Chu
 * @Date: 2022-10-10 08:29:41
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-10 08:30:00
 * @FilePath: /Cpp/lab/lab05-week6/problemD-factorial.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
double fact(int i);
int main()
{
    int i;
    float sum = 0;
    for (i = 1; i <= 10; i++)
        sum = sum + fact(i);
    printf("%.6f\n", sum);
    return 0;
}

double fact(int i)
{
    static int j = 1;
    j = j * i;
    return (j);
}
/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 10:04:59
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 10:05:39
 * @FilePath: /Cpp/lab/lab06-week7/problemA.cpp
 * @Description: https://blog.csdn.net/oyqho/article/details/125641165
 * 计算数列和2/1，3/2，5/3，8/5......
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int main()
{
    float a, s = 0.f;
    float y = 2.f, x = 1.f, t;
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        a = y / x;
        s = s + a;
        t = x;
        x = y;
        y = t + y;
    }
    printf("s=%.2f\n", s);
    return 0;
}
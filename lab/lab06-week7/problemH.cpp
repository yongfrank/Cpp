/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 11:00:28
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 11:00:31
 * @FilePath: /Cpp/lab/lab06-week7/problemH.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9940395.html
 * Problem G: 零起点学算法86——Fibonacc
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int main()
{
    int T, a[50] = {0, 1, 1};
    for (int i = 3; i <= 45; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", a[n]);
    }
    return 0;
}
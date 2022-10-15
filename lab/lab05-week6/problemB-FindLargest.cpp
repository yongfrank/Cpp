/*
 * @Author: Frank Chu
 * @Date: 2022-10-10 08:25:01
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-10 08:25:13
 * @FilePath: /Cpp/lab/lab05-week6/problemB-FindLargest.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int max(int a, int b, int c)
{
    int max;
    if (a < b)
    {
        max = b;
    }
    else
        max = a;
    if (max < c)
    {
        max = c;
    }
    return max;
}
int main()
{
    int a, b, c;
    while (scanf("%d%d%d", &a, &b, &c) != EOF)
    {
        printf("%d\n", max(a, b, c));
    }
    return 0;
}
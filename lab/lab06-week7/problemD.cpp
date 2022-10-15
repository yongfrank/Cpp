/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 10:25:00
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 10:28:27
 * @FilePath: /Cpp/lab/lab06-week7/problemD.cpp
 * @Description: https://blog.csdn.net/weixin_44708484/article/details/123544636
 * 输出菱形图案（数字版）
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
#include <math.h>
int main()
{
    // int num;
    // int n;
    int i, j;
    int a;
    // int N;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            // num = abs(j - i);
            printf("%d", i);
        }
        printf("\n");
    }
    for (i = 1; i <= a; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * (a - i) - 1; j++)
        {
            // n = j + a - 1;
            // num = abs(n - a);
            // N = abs(num + 1 - a + i);

            printf("%d", a - i);
        }
        printf("\n");
    }
    return 0;
}
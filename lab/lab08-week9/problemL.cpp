/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 16:20:19
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 16:20:21
 * @FilePath: /Cpp/lab/lab08-week9/problemL.cpp
 * @Description: https://blog.csdn.net/hqm793899006/article/details/103568656
 * 插入一个数到数列中
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int main()
{
    int m, i, k;
    while (scanf("%d", &m) != EOF)
    {
        int a[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80};
        k = 9;
        for (i = 0; i < 9; i++)
        {
            if (a[i] > m)
            {
                k = i;
                break;
            }
        }
        for (i = 9; i > k; i--)
        {
            a[i] = a[i - 1];
        }
        a[k] = m;
        printf("%d", a[0]);
        for (i = 1; i < 10; i++)
        {
            printf(" %d", a[i]);
        }
        printf("\n");
    }
}
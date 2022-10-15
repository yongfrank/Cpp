/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 10:28:39
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 10:29:35
 * @FilePath: /Cpp/lab/lab06-week7/problemE.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9939003.html
 * Problem A: 零起点学算法80——逆序输出（数组练习）
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
int main()
{
    int n, m, i, j, flag, a[20];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        flag = 1;
        for (j = 0; j < m; j++)
            scanf("%d", &a[j]);
        for (j = m - 1; j >= 0; j--)
        {
            if (flag)
            {
                printf("%d", a[j]);
                flag = 0;
            }
            else
                printf(" %d", a[j]);
        }
        printf("\n");
    }
    return 0;
}
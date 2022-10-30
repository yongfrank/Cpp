/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 14:04:23
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 15:45:40
 * @FilePath: /Cpp/lab/lab08-week9/problemC.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9967368.html
 * Problem C: 零起点学算法93——矩阵转置
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
int main()
{
    int n, m, a[10][10], b[10][10];
    while (scanf("%d%d", &n, &m) != EOF)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                b[i][j] = a[j][i];
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("%d\n", b[i][n - 1]);
        }
    }
    return 0;
}
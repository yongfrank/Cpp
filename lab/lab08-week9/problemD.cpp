/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 15:48:56
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 15:48:58
 * @FilePath: /Cpp/lab/lab08-week9/problemD.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9967419.html
 * Problem D: 零起点学算法94——输出矩阵
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int main()
{
    int n, m, i, j, a[20][20];
    while (scanf("%d %d", &n, &m) != EOF)
    {
        int t = 1;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                a[i][j] = t;
                t++;
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m - 1; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("%d\n", a[i][m - 1]);
        }
    }
    return 0;
}
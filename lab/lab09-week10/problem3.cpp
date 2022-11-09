/*
 * @Author: Frank Chu
 * @Date: 2022-11-09 11:17:17
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-09 11:17:20
 * @FilePath: /Cpp/lab/lab09-week10/problem3.cpp
 * @Description: 指针：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面m个数
 * https://blog.csdn.net/z2431435/article/details/84697613
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
void move(int *a, int n, int m)
{
    int t[100];
    int i;
    for (i = 0; i < n; i++)
    {
        t[i] = a[i];
    }
    for (i = 0; i < m; i++)
    {
        a[i] = t[n - m + i];
    }
    for (i = m; i < n; i++)
    {
        a[i] = t[i - m];
    }
}
int main()
{
    int a[20];
    int n, m;
    int i;
    while (scanf("%d%d", &n, &m) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        move(a, n, m);
        for (i = 0; i < n - 1; i++)
        {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[i]);
    }
}
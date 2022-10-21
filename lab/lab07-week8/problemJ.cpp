/*
 * @Author: Frank Chu
 * @Date: 2022-10-21 22:40:34
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-21 22:41:11
 * @FilePath: /Cpp/lab/lab07-week8/problemJ.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9940254.html
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
int main()
{
    int n, a[50], b[50];
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int m, k, j = 0;
        scanf("%d%d", &m, &k);
        for (int i = 0; i < n; i++)
        {
            if (a[i] < m)
            {
                b[j] = a[i];
                j++;
            }
            else
                break;
        }
        b[j] = m;
        j++;
        for (int i = j - 1; i < n; i++)
        {
            b[j] = a[i];
            j++;
        }
        for (int i = 0; i < j - 1; i++)
        {
            printf("%d ", b[i]);
        }
        printf("%d\n", b[j - 1]);
        printf("%d\n", b[k]);
    }
    return 0;
}
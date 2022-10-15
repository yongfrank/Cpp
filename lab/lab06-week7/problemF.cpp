/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 10:29:54
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 10:35:46
 * @FilePath: /Cpp/lab/lab06-week7/problemF.cpp
 * @Description: https://blog.csdn.net/oyqho/article/details/126808457
 * 找出数组中最大元素的位置（下标值）
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>

int main()
{
    int a[20];
    int n, x = 0, y, z, s, m, f;
    int i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &y);
            a[x] = y;
            x++;
        }
        if (x == 1)
        {
            z = a[0];
            f = 0;
        }
        x = 0;

        for (j = 1; j <= n - 1; j++)
        {
            s = a[x];
            m = a[x + 1];
            if (s >= m)
            {
                if (s > z)
                {
                    z = s;
                    f = x;
                }
            }
            else
            {
                if (m > z)
                {
                    z = m;
                    f = x + 1;
                }
            }
            x++;
        }
        printf("%d %d\n", z, f);
        x = 0;
        z = 0;
        f = 0;
    }

    return 0;
}
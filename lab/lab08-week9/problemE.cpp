/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 15:50:11
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 15:50:15
 * @FilePath: /Cpp/lab/lab08-week9/problemE.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9967519.html
 * Problem E: 零起点学算法97——进制转换
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int main()
{
    int n, r, a[100];
    while (scanf("%d%d", &n, &r) != EOF)
    {
        int flag = 1, i = 0;
        if (n < 0)
        {
            flag = 0;
            n = -n;
        }

        do
        {
            a[i++] = n % r;
            n = n / r;
        } while (n);

        if (flag == 0)
            printf("-");
        while (i--)
        {
            if (a[i] > 9)
            {
                printf("%c", 'A' + a[i] - 10);
            }
            else
            {
                printf("%d", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
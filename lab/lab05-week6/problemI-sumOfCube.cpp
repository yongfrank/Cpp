/*
 * @Author: Frank Chu
 * @Date: 2022-10-10 09:14:17
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-10 09:14:40
 * @FilePath: /Cpp/lab/lab05-week6/problemI-sumOfCube.cpp
 * @Description: https://blog.csdn.net/hqm793899006/article/details/102864992
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int is(int number);
int main()
{
    int m, n, i, a;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        a = 0;
        for (i = m; i <= n; i++)
        {
            if (is(i))
            {
                if (a == 0)
                {
                    printf("%d", i);
                }
                else
                {
                    printf(" %d", i);
                }
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}
int is(int number)
{
    int x, y = number, t = 0;
    while (number != 0)
    {
        x = number % 10;
        number = number / 10;
        t = t + x * x * x;
    }
    if (t == y)
        return 1;
    else
        return 0;
}
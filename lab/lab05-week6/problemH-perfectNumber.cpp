/*
 * @Author: Frank Chu
 * @Date: 2022-10-10 08:56:06
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-10 08:56:35
 * @FilePath: /Cpp/lab/lab05-week6/problemH-perfectNumber.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
int factorsum(int n)
{
    int i, s = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            s += i;
    }
    return s;
}
int main()
{
    int j, a, b, flag;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        flag = 1; // flag=1放这里使每次循环时flag都为1，即输出从首个格子开始
        for (j = a; j <= b; j++)
        {
            if (j == factorsum(j))
            {
                if (flag != 0)
                {
                    printf("%d", j);
                    flag = 0;
                }
                else
                    printf(" %d", j);
            }
        }
        printf("\n");
    }
    return 0;
}
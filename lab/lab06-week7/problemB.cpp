/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 10:06:29
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 10:06:37
 * @FilePath: /Cpp/lab/lab06-week7/problemB.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int main()
{
    int n, array[1000], a, b, sum = 0;
    scanf("%d", &n);
    for (a = 0; a < n; a++)
    {
        scanf("%d", &array[a]);
    }
    for (b = 0; b < n; b++)
    {
        sum = sum + array[b];
    }
    printf("s=%d\n", sum);
    return 0;
}
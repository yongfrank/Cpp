/*
 * @Author: Frank Chu
 * @Date: 2022-10-10 08:31:54
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-10 08:32:16
 * @FilePath: /Cpp/lab/lab05-week6/problemF-a+aa+aaa.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int fn(int a, int n)
{
    int i, ret;
    ret = 0;
    for (i = 0; i < n; i++)
    {
        ret = ret * 10 + a;
    }
    return ret;
}
int main()
{
    int a, n, i, sum;
    while(scanf("%d %d", &a, &n) != EOF) {    
        sum = 0;
        for (i = 1; i <= n; i++)
        {
            sum += fn(a, i);
        }
        printf("%d\n", sum);
    }
}
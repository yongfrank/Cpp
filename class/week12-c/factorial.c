/*
 * @Author: Frank Chu
 * @Date: 2022-11-25 14:39:00
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-25 14:44:00
 * @FilePath: /Cpp/class/week12-c/factorial.c
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>

double fact(int n);
int main()
{
    printf("%.1f", fact(5));
}

double fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
    int a = 3;
}
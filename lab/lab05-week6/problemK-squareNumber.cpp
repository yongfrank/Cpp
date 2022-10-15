/*
 * @Author: Frank Chu
 * @Date: 2022-10-10 09:22:17
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-10 09:23:04
 * @FilePath: /Cpp/lab/lab05-week6/problemK-squareNumber.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
int main()
{
    for (int i = 31; i < 100; i++)
    {
        int s = i * i;
        int a = s / 1000;
        int b = s % 1000 / 100;
        int c = s % 100 / 10;
        int d = s % 10;
        if (a == b && c == d)
            printf("%d\n", s);
    }
    return 0;
}
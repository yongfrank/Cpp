/*
 * @Author: Frank Chu
 * @Date: 2022-10-06 11:55:16
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-06 11:57:35
 * @FilePath: /Cpp/lab/lab04-week5/problemK-outputNumberByComma.cpp
 * @Description: https://blog.csdn.net/weixin_52423131/article/details/119983782
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
int main()
{
    long a, b;
    int i, num = 0, d;
    double c;
    scanf("%ld", &a);
    if (a < 0) { a = -a; }
    b = a;
    while (1) {
        if (a > 0)
            num++;
        a = a / 10;
        if (a == 0)
            break;
    }
    c = b;
    for (i = 1; i <= num; i++)
    {
        c = c / 10;
    }
    for (i = 1; i <= num; i++)
    {
        c *= 10;
        d = (int)c % 10;
        printf("%d", d);
        if(i != num) {
            printf(",");
        } else {
            printf("\n");
        }
    }
}
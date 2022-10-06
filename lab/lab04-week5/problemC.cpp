/*
 * @Author: Frank Chu
 * @Date: 2022-10-06 11:59:22
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-06 12:00:29
 * @FilePath: /Cpp/lab/lab04-week5/problemC.cpp
 * @Description: https://blog.51cto.com/u_13364038/3205830
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
/*

程序理解:当a = 5,n = 5
进入for循环后，
    依次执行:
            t = 5  sum = 5
            t = 5*10 sum = 5+55
            t = 55*10 sum = 5+55+555
            t = 555*10 sum = 5+55+555+5555
            t = 5555*10 sum  = 5+55+555+5555
    核心代码就是在每次for循环的时候 利用表达式t*10+a 生成 对应的 1位数 2位数 3位数
**/
int main()
{
    int i, a, n, sum = 0, t = 0;
    scanf("%d,%d", &a, &n);

    for (i = 1; i <= n; i++)
    {
        t = t * 10 + a;
        sum = sum + t;
    }
    printf("%d\n", sum);
    return 0;
}
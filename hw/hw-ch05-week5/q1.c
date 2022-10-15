/*
 * @Author: Frank Chu
 * @Date: 2022-10-14 14:24:09
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-14 14:24:12
 * @FilePath: /Cpp/hw/hw-ch05-week5/q1.c
 * @Description: 习题(5.3.1)
 * 使用函数计算分段函数的值：输入 x ，计算并输出下列分段函数 f(x) 的值。
 * 要求定义和调用函数 sign(x) 实现该分段函数。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
int sign(int x)
{
    int f;
    if (x < 0)
    {
        f = -1;
    }
    else if (x > 0)
    {
        f = 1;
    }
    else
        f = 0;
    return f;
}
int main(void)
{
    
    int x, y;
    printf("input x:");
    scanf("%d", &x);
    y = sign(x);
    printf("f(x) = %d\n", y);
    return 0;
}
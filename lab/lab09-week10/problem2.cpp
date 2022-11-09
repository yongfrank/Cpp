/*
 * @Author: Frank Chu
 * @Date: 2022-11-09 11:14:19
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-09 11:14:55
 * @FilePath: /Cpp/lab/lab09-week10/problem2.cpp
 * @Description: Problem B: 指针：调用自定义交换函数，完成5个浮点数从小到大排列
 * https://blog.csdn.net/weixin_30823833/article/details/95300397
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
int swap(float *p1, float *p2)
{
    float flag;
    if (*p1 > *p2)
    {
        flag = *p1;
        *p1 = *p2;
        *p2 = flag;
    }
}

int main()
{
    float a, b, c, d, e;
    while (scanf("%f%f%f%f%f", &a, &b, &c, &d, &e) != EOF)
    {
        swap(&a, &b);
        swap(&a, &c);
        swap(&a, &d);
        swap(&a, &e);
        swap(&b, &c);
        swap(&b, &d);
        swap(&b, &e);
        swap(&c, &d);
        swap(&c, &e);
        swap(&d, &e);
        printf("%.1f %.1f %.1f %.1f %.1f\n", a, b, c, d, e);
    }
    return 0;
}
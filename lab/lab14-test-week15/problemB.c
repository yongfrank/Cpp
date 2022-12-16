/*
 * @Author: Frank Chu
 * @Date: 2022-12-12 08:34:36
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-12 08:34:42
 * @FilePath: /Cpp/lab/lab14-test-week15/problemB.c
 * @Description:
问题 B: 计算公式
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

喜羊羊知道你一定学过加法和乘法，喜羊羊想让你写个程序来计算一个和加法、乘法有关的式子。 

给定4个整数a,b,c,d，计算表达式(a+b)×c-d的值。 
输入

输入仅一行，包括四个整数 a,b,c,d, 数与数之间以一个空格分开。 

(−10,000≤a,b,c,d≤10,000) 
输出

输出一行，即表达式的值。
样例输入 Copy

7 8 5 9
样例输出 Copy

66
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

long long int formula(int a, int b, int c, int d) {
    return (a + b) * c - d;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%lld", formula(a, b, c, d));
}
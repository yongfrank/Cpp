/*
 * @Author: Frank Chu
 * @Date: 2022-12-12 08:55:02
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-12 08:56:08
 * @FilePath: /Cpp/lab/lab14-test-week15/problemH.c
 * @Description: 
问题 H: 完数
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 64 MB

提交问题列表
题目描述

一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6的因子有：1，2，3；由于6=1+2+3，所以6是完数。要求对于输入的任意一个正整数，验证它是否是完数。

输入

输入大于2的正整数n。

输出

如果是完数，输出“xxx is cloze.”；否则输出“xxx is not cloze.”。这里的xxx是输入的整数。

样例输入 Copy

6
28
42
样例输出 Copy

6 is cloze.
28 is cloze.
42 is not cloze.

 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int isPerfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        if (isPerfectNumber(n)) {
            printf("%d is cloze.\n", n);
        } else {
            printf("%d is not cloze.\n", n);
        }
    }
    return 0;
}
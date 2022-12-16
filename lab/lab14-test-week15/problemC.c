/*
 * @Author: Frank Chu
 * @Date: 2022-12-12 08:39:40
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-12 08:42:33
 * @FilePath: /Cpp/lab/lab14-test-week15/problemC.c
 * @Description: 
问题 C: 数列
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

联欢会上，主持人先在黑板上写了四个数字，分别是：2，0，1，9，
然后说：“这串数字从第五个数起，每一个数都是它前四数字之和的个位数字”。
请你打印输出这个数列的前N项，并计算前N项的和。

输入

单个整数：表示项数N。
输出

第一行：N个数字，表示所求数列的前N项。
第二行：单个数字，表示前N项数字的和。
样例输入 Copy

10
样例输出 Copy

2 0 1 9 2 2 4 7 5 8
40
提示

1 ≤ N ≤ 100000。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

long long calculateSum(int n) {
    long long sum = 0;
    int a = 2, b = 0, c = 1, d = 9;
    for (int i = 0; i < n; i++) {
        if (i < 4) {
            printf("%d ", i == 0 ? a : i == 1 ? b : i == 2 ? c : d);
            sum += i == 0 ? a : i == 1 ? b : i == 2 ? c : d;
        } else {
            int temp = a + b + c + d;
            printf("%d ", temp % 10);
            sum += temp % 10;
            a = b;
            b = c;
            c = d;
            d = temp % 10;
        }
    }
    printf("\n");
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld", calculateSum(n));
}
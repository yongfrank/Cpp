/*
 * @Author: Frank Chu
 * @Date: 2022-12-12 08:43:58
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-12 08:44:05
 * @FilePath: /Cpp/lab/lab14-test-week15/problemD.c
 * @Description: 
问题 D: 循环判断输出
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

输入一个正整数n(3<=n<=100000) 

输出3, 6, 9, ...，即输出所有<=n的，3的倍数。 

从小到大依次输出，只考虑3的正整数倍。 

每行一个数字。 
输入

一行一个整数n
输出

输出若干行，每行一个3的倍数
样例输入 Copy

10
样例输出 Copy

3
6
9
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void outputThreeMultiple(int n) {
    for (int i = 3; i <= n; i += 3) {
        printf("%d\n", i);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    outputThreeMultiple(n);
    return 0;
}
/*
 * @Author: Frank Chu
 * @Date: 2022-12-16 15:33:18
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 18:03:22
 * @FilePath: /Cpp/class/week15-c/problemH.cpp
 * @Description: 
问题 H: 实验室的书
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

ACM实验室最近新进n本关于基础算法和数据结构的书。
9102年的一个早晨，海螺少年来到书架前，他想到一个问题：若重新摆放这些书，使每本书都不在原来放的位置。一共会有几种摆法？

输入

一行，输入一个整数n(1<=n<=20)

输出

输出一个整数，一共有多少种摆法?

样例输入 Copy

2
样例输出 Copy

1
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

long long bookMove(int leftBook) {
    if(leftBook == 1) {
        return 0;
    } else if (leftBook == 2) {
        return 1;
    } else {
        return (leftBook - 1) * (bookMove(leftBook - 1) + bookMove(leftBook - 2));
    }
}

int main() {
    int book;
    scanf("%d", &book);
    if (book == 1) {
        printf("0");
        return 0;
    }
    printf("%lld", bookMove(book));
}
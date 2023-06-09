/*
 * @Author: Frank Chu
 * @Date: 2023-02-19 11:34:13
 * @LastEditors: Frank Chu
 * @LastEditTime: 2023-02-19 13:41:49
 * @FilePath: /Cpp/final/2021-2022-1 年C程序设计（计算机类）期末考试-重现/problemA.cpp
 * @Description: 
问题 A: 计算钱的张数
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

题目描述
输入一个金额，试把它兑换为零钱，而且零钱个数要尽量少（零钱包括1元、5元、和10元）
输入
输入一个整数N。（1<N<32767）
输出
输出三种零钱的张数。
样例输入 Copy
46
样例输出 Copy
10yuan:4
5yuan:1
1yuan:1
 * 
 * Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
 */

#include <iostream>

void coinChange(int N, int* tenCount, int* fiveCount, int* oneCount) {
    if (N < 1 || N > 32767) return;

    *tenCount = N / 10;
    N %= 10;

    *fiveCount = N / 5;
    N -= *fiveCount * 5;
    
    *oneCount = N;
}

int main() {
    int N;
    scanf("%d", &N);
    int tenCount, fiveCount, oneCount;
    coinChange(N, &tenCount, &fiveCount, &oneCount);
    printf("10yuan:%d\n5yuan:%d\n1yuan:%d\n", tenCount, fiveCount, oneCount);
}
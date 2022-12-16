/*
 * @Author: Frank Chu
 * @Date: 2022-12-16 13:56:39
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-16 14:00:32
 * @FilePath: /Cpp/class/week15-c/problemC.c
 * @Description: 
问题 C: 倍数的个数
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

读入N，求出1..N的范围内所有2或3或5的倍数一共有多少个？

输入

单组测试数据 输入一个数N
输出

输出一个数，表示这样的数的个数
样例输入 Copy

10
样例输出 Copy

8
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

/**
#include <stdio.h>

int getMultipleCount(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", getMultipleCount(n));
}
*/
#include <stdio.h>

int getMultipleCount(int endNumber) {
    int count = 0;
    for(int i = 1; i <= endNumber; i++) {
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int endNumber;
    scanf("%d", &endNumber);
    printf("%d", getMultipleCount(endNumber));
}
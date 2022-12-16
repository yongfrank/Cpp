/*
 * @Author: Frank Chu
 * @Date: 2022-12-16 13:53:33
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-16 13:56:07
 * @FilePath: /Cpp/class/week15-c/problemB.c
 * @Description: 
问题 B: 条件输出2
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

编程实现输入两个整数a,b,
当0<=a+b<=3时输出YES,
当a+b>=4时输出NO，
当a+b<0时输出negative

输入

单组测试数据 输入两个整数a,b，以空格隔开
输出

根据判断结果输出“YES”“NO”或“negative”
样例输入 Copy

7 -1
样例输出 Copy

NO
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void getOutput(int lhs, int rhs) {
    if (lhs + rhs >= 4) {
        printf("NO");
    } else if (lhs + rhs < 0) {
        printf("negative");
    } else {
        printf("YES");
    }
}

int main () {
    int lhs, rhs;
    scanf("%d %d", &lhs, &rhs);
    getOutput(lhs, rhs);
    return 0;
}
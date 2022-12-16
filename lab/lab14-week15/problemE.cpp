/*
 * @Author: Frank Chu
 * @Date: 2022-12-10 11:49:50
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-10 14:42:40
 * @FilePath: /Cpp/lab/lab14-week15/problemE.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/10153779.html
问题 E: 深入浅出学算法002-n个1
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 64 MB

提交问题列表
题目描述

由n个1组成的整数能被K（K<10000)整除，n至少为多少？
输入

多组测试数据，第一行输入整数T,表示组数 然后是T行，每行输入1个整数代表K
输出

对于每组测试数据输出1行，值为n
样例输入 Copy

1
11
样例输出 Copy

2
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main () {
    int testCases;
    while(scanf("%d", &testCases) != EOF) {
        for(int i = 0; i < testCases; i++) {
            int kDenominator;
            scanf("%d", &kDenominator);
            int n = 1;
            int sum = 1;
            while(sum % kDenominator != 0) {
                n++;
                sum = sum * 10 + 1;
                sum = sum % kDenominator;
            }
            printf("%d\n", n);
        }
    }
    return 0;
}

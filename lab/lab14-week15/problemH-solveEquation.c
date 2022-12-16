/*
 * @Author: Frank Chu
 * @Date: 2022-12-10 16:04:29
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-10 16:11:21
 * @FilePath: /Cpp/lab/lab14-week15/problemH-solveEquation.c
 * @Description: 
问题 H: 深入浅出学算法006-求不定方程的所有解
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 64 MB

提交问题列表
题目描述

现有一方程ax+by=c,其中系数a、b、c均为整数，求符合条件的所有正整数解，
要求按x由小到大排列，其中a b c 均为不大于1000的正整数
输入

多组测试数据，第一行先输入整数T表示组数 然后每组输入3个整数分别表示a b c
输出

对于每组数据按要求输出所有正整数解 有多个解的情况下，每对解一行，要求按照x从小到大输出 无解时输出No
样例输入 Copy

1
1 2 3
样例输出 Copy

1 1
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);
    while (testCases--) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        int flag = 0;
        for (int x = 1; x <= 1000; x++) {
            if ((c - a * x) % b == 0) {
                int y = (c - a * x) / b;
                if (y >= 1) {
                    printf("%d %d\n", x, y);
                    flag = 1;
                }
            }
        }
        if (flag == 0)
        {
            printf("No\n");
        }
        
    }
}
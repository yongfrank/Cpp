/*
 * @Author: Frank Chu
 * @Date: 2022-12-10 16:13:11
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-10 16:14:30
 * @FilePath: /Cpp/lab/lab14-week15/problemI-csum.c
 * @Description: 
问题 I: 深入浅出学算法007-统计求和
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 64 MB

提交问题列表
题目描述

求含有数字a且不能被a整除的4位整数的个数，并求这些整数的和

输入

多组测试数据，先输入整数T表示组数然后每组输入1个整数a(1<=a<=9)

输出

对于每组测试数据输出一行，每行2个数分别是个数与和

样例输入 Copy

1
3
样例输出 Copy

2112 10568016
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);
    while (testCases--) {
        int a;
        scanf("%d", &a);
        int count = 0;
        int sum = 0;
        for (int i = 1000; i <= 9999; i++) {
            if (i % 10 == a || i / 10 % 10 == a || i / 100 % 10 == a || i / 1000 == a) {
                if (i % a != 0) {
                    count++;
                    sum += i;
                }
            }
        }
        printf("%d %d\n", count, sum);
    }
}
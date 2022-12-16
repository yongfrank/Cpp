/*
 * @Author: Frank Chu
 * @Date: 2022-12-10 16:15:17
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-10 16:18:41
 * @FilePath: /Cpp/lab/lab14-week15/problemJ.c
 * @Description: 
问题 J: 调用函数，求m-n之间的所有完数
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 64 MB

提交问题列表
题目描述

自定义函数factorsum(number),它的功能是返回number的因子和，如factorsum(12)的返回值是16（1+2+3+4+6）。 
在主函数中，输入两个正整数m和n(m>=1, n<=1000)，调用factorsum函数，输出m-n之间的所有完数，完数就是因子和与它本身相等的数。

输入

多组测试数据，每组输入两个正整数m和n。

输出

输出m-n之间的所有完数，"%d "形式输出，但最后一个数后面没有空格。

样例输入 Copy

10 100
100 500
10 900
样例输出 Copy

28
496
28 496
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int factorsum(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int m, n;
    while (scanf("%d %d", &m, &n) != EOF) {
        int countNumber = 0;
        for (int i = m; i <= n; i++) {
            if(countNumber == 0) {
                if (factorsum(i) == i) {
                    printf("%d", i);
                    countNumber++;
                }
            } else {
                if (factorsum(i) == i) {
                    printf(" %d", i);
                    countNumber++;
                }
            }
        }
        printf("\n");
    }
}
/*
 * @Author: Frank Chu
 * @Date: 2022-12-16 14:01:08
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-16 14:25:11
 * @FilePath: /Cpp/class/week15-c/problemD.c
 * @Description: 
问题 D: 最小公倍数
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

求两个整数M与N的和，M与N的差的最小公倍数。

输入

单组测试数据
输入一行，包括两个正整数M,N.(M > N)

输出

输出只有一行（这意味着末尾有一个回车符号），包括1个整数，该数是M-N与M+N的最小公倍数。

样例输入 Copy

60 45
样例输出 Copy

105
提交

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d", m * n / (m > n ? m - n : n - m));
}
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int getLowestCommonMultiple(int lhs, int rhs) {
    int numberA = lhs + rhs;
    int numberB = lhs - rhs < 0 ? rhs - lhs : lhs - rhs;
    
    int gcd = 1;
    int smallerNumber = numberA < numberB ? numberA : numberB;
    
    for(int i = 2; i <= smallerNumber; i++) {
        if(numberA % i == 0 && numberB % i == 0) {
            gcd = i;
        }
    }
    return numberA * numberB / gcd;
}

int main() {
    int lhs, rhs;
    scanf("%d %d", &lhs, &rhs);
    printf("%d", getLowestCommonMultiple(lhs, rhs));
}
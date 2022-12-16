/*
 * @Author: Frank Chu
 * @Date: 2022-12-12 08:50:26
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-12 08:51:31
 * @FilePath: /Cpp/lab/lab14-test-week15/problemF.c
 * @Description: 
问题 F: 求翻转数函数
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

数字反转： 
编写一个函数reverse，其功能是将一个正整数反转。如123可以反转为321，3682可以反转为2863，1200可以反转为21。 
reverse函数的原型可以参考如下： 
int  reverse（int num); 
其中num为要反转的数，函数的返回值为反转后的数。 

输入

从键盘上输入一个正整数n，代表要反转的数的个数，接着输入n个正整数，
输出

将这些正整数依次反转并输出。输出的数据之间用空格分隔。
样例输入 Copy

6 746 1422 18 4300 8 4076
样例输出 Copy

647 2241 81 34 8 6704
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int reverse(int number) {
    int reverseNumber = 0;
    while (number != 0) {
        reverseNumber = reverseNumber * 10 + number % 10;
        number /= 10;
    }
    return reverseNumber;
}

int main() {
    int testCases;
    scanf("%d", &testCases);
    int number;
    while (testCases--) {
        scanf("%d", &number);
        printf("%d ", reverse(number));
    }
    return 0;
}
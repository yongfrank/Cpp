/*
 * @Author: Frank Chu
 * @Date: 2022-12-10 16:19:51
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-10 16:22:06
 * @FilePath: /Cpp/lab/lab14-week15/problemK.c
 * @Description: 
问题 K: 调用函数，整数逆序输出
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 64 MB

提交问题列表
题目描述

自定义函数reverse(number),它的功能是返回number的逆序数，如reverse(123)的返回值是321。 
主函数中，输入一个任意整数，调用reverse函数，将该整数逆序输出。
输入

多组测试数据，每组输入一个整数。
输出

输出该整数的逆序数
样例输入 Copy

1234
-5678
样例输出 Copy

4321
-8765
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
    int number;
    while (scanf("%d", &number) != EOF) {
        printf("%d\n", reverse(number));
    }
}
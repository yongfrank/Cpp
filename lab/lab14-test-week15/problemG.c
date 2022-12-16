/*
 * @Author: Frank Chu
 * @Date: 2022-12-12 08:52:59
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-12 08:54:03
 * @FilePath: /Cpp/lab/lab14-test-week15/problemG.c
 * @Description: 
问题 G: 字母统计
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

用指针编写一个程序，当输入一个字符串后，要求不仅能统计出其中字符的个数，还能分别指出其中大写字母、小写字母、数字以及其他字符的个数
输入

一行字符串
输出

一行5个数，依次为大写字母、小写字母、数字、其他字符和总共含有的字符个数，每2个数之间用一个空格隔开
样例输入 Copy

I am 11 years old.
样例输出 Copy

1 10 2 5 18
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void calculateCharacter(char *str, int *upper, int *lower, int *digit, int *other) {
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z') {
            (*upper)++;
        } else if (*str >= 'a' && *str <= 'z') {
            (*lower)++;
        } else if (*str >= '0' && *str <= '9') {
            (*digit)++;
        } else {
            (*other)++;
        }
        str++;
    }
}

int main() {
    char str[10000];
    int upper = 0, lower = 0, digit = 0, other = 0;
    gets(str);
    calculateCharacter(str, &upper, &lower, &digit, &other);
    printf("%d %d %d %d %d", upper, lower, digit, other, upper + lower + digit + other);
    return 0;
}
/*
 * @Author: Frank Chu
 * @Date: 2022-11-28 08:59:26
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-28 09:07:22
 * @FilePath: /Cpp/lab/lab12-week13/problemF.c
 * @Description: 下面程序中“/ ***** N ***** /”的下一行中有错误，请改正（注意：不得加行、减行、加句、减句，否则后果自负）。
 * 该程序功能：用递归法将一个六位整数n转换成字符串，例如输入123456，应输出字符串"123456"。
 * https://blog.csdn.net/weixin_45485719/article/details/103476796
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h> 
void itoa(long i, char *s) {
    if (i == 0) return; 
    *s = '0' + i % 10; 
    itoa(i / 10, s - 1); 
} 
int main() {
    long n; 
    char str[7] = ""; 
    scanf("%ld", &n); 
    itoa(n, str + 5);
    printf("%s", str); 
}
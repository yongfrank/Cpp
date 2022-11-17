/*
 * @Author: Frank Chu
 * @Date: 2022-11-14 09:32:15
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-14 14:06:56
 * @FilePath: /Cpp/lab/lab10-week11/problemD.cpp
 * @Description: 问题 D: 指针：自定义函数sumDiff()，调用它来求两个数的和、差
 * 自定义一个计算两个数和、差的函数sumDiff(int op1, int op2, int *pSum, int *pDiff),功能是求两个数op1、op2的和、差，其中*psum和*pdiff是计算得出的和与差。
 * 在main函数中，调用它，计算输入的任意两个数的和与差。
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "stdio.h"

void sumDiff(int op1, int op2, int& pSum, int& pDiff);

int main() {
    
    int first, second;
    int pSum, pDiff;
    while(scanf("%d %d", &first, &second) != EOF) {
        sumDiff(first, second, pSum, pDiff);
        printf("sum=%d diff=%d\n", pSum, pDiff);
    }
}

void sumDiff(int op1, int op2, int& pSum, int& pDiff) {
    pSum = op1 + op2;
    pDiff = op1 - op2;
}
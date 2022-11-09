/*
 * @Author: Frank Chu
 * @Date: 2022-11-09 11:34:23
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-09 11:39:59
 * @FilePath: /Cpp/lab/lab09-week10/problem5.cpp
 * @Description:
 * 自定义一个计算两个数和、差的函数sumDiff(int op1, int op2, int *pSum, int *pDiff),
 * 功能是求两个数op1、op2的和、差，其中*psum和*pdiff是计算得出的和与差。在main函数中，调用它，计算输入的任意两个数的和与差。
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>

void sumDiff(int op1, int op2, int *pSum, int *pDiff);
int main()
{
    int op1, op2;
    while (scanf("%d %d", &op1, &op2)!=EOF)
    {
        int pSum;
        int pDiff;
        sumDiff(op1, op2, &pSum, &pDiff);

        printf("sum=%d diff=%d\n", pSum, pDiff);
    }
}

void sumDiff(int op1, int op2, int *pSum, int *pDiff)
{
    *pSum = op1 + op2;
    *pDiff = op1 - op2;
}
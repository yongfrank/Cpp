/*
 * @Author: Frank Chu
 * @Date: 2022-12-04 20:31:23
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-04 20:32:50
 * @FilePath: /Cpp/lab/lab13-week14/problemC.c
 * @Description: 问题 C: 利用函数从大到小输出2个数
 * 多组测试数据。每组测试数据输入2个整数。
 * 对于每组测试数据，从大到小输出数
2 3
4 5

3 2
5 4
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void switchNumber(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF) {
        if(a < b) {
            switchNumber(&a, &b);
        }
        printf("%d %d\n", a, b);
    }
}
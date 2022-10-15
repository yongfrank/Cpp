/*
 * @Author: Frank Chu
 * @Date: 2022-10-10 08:18:55
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-10 08:23:00
 * @FilePath: /Cpp/lab/lab05-week6/problemA.cpp
 * @Description: 问题 A: 调用函数，计算分段函数的值
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include<stdio.h>

int sign(int number) {
    if (number < 0) {
        return -1;
    } else if (number == 0)
    {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int number;
    while (scanf("%d", &number) != EOF) {
        printf("%d\n", sign(number));
    }
}
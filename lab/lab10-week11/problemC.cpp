/*
 * @Author: Frank Chu
 * @Date: 2022-11-14 09:16:16
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-14 09:31:26
 * @FilePath: /Cpp/lab/lab10-week11/problemC.cpp
 * @Description: 问题 C: 指针：调用自定义排序函数sort，对输入的n个数进行从小到大输出。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "stdio.h"
#include "stdlib.h"

int compare(const void* x, const void* y);
int main() {
    int amountOfNumbers = 0;
    while(scanf("%d", &amountOfNumbers) != EOF) {
        int a[amountOfNumbers];
        for(int i = 0; i < amountOfNumbers; i++) {
            scanf("%d", &a[i]);
        }
        qsort(a, sizeof(a) / sizeof(*a), sizeof(*a), compare);
        for(int i = 0; i < amountOfNumbers; i++) {
            printf("%d", a[i]);
            if(i != amountOfNumbers - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int compare(const void* x, const void* y) {
    int a = *(int*)x;
    int b = *(int*)y;
    return a - b;
}

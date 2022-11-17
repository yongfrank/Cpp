/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 10:26:02
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-16 10:41:53
 * @FilePath: /Cpp/lab/lab10-week11/problemI.cpp
 * @Description: 输入数据有多组，每组占一行，每行的第一个数字为n （ n <= 100),接着是n个整数，n=0表示输入数据的结束，不做处理。
 * 对于每个测试实例，输出排序后的结果，两个数之间用一个空格隔开。每个测试实例占一行。
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "stdio.h"
#include "stdlib.h"

int compareAscending(const void* lhs, const void* rhs) {
    return *(int *)lhs - *(int *)rhs;
}

void selectionSort(int array[], int nitems) {
    for(int i = 0; i < nitems; i++) {
        for(int j = i + 1; j < nitems; j++) {
            if(abs(array[i]) < abs(array[j])) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() {
    int amount;
    while (scanf("%d", &amount) != EOF && amount != 0) 
    {
        int arrayInput[amount];
        for(int i = 0; i < amount; i++) {
            scanf("%d", arrayInput + i);
        }
        // qsort(arrayInput, sizeof(arrayInput) / sizeof(*arrayInput), sizeof(*arrayInput), compareAscending);
        selectionSort(arrayInput, sizeof(arrayInput) / sizeof(*arrayInput));
        for(int i = 0; i < amount; i++) {
            printf("%d", *(arrayInput + i));
            if(i != amount - 1) { printf(" "); }
        }
        printf("\n");
    }
    
}
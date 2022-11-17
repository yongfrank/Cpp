/*
 * @Author: Frank Chu
 * @Date: 2022-11-14 14:28:22
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-14 15:19:32
 * @FilePath: /Cpp/lab/lab10-week11/problemE.cpp
 * @Description: 问题 E: 输入10个数，根据提示进行从小到大输出或从大到小输出
 * 从键盘输入一个字符和10个整数，若输入字符是'A'，将这10个数按从小到大的顺序输出；若输入字符是'D'，则按从大到小输出；若输入其他字符，就结束。
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "stdio.h"
#include "stdlib.h"

#include "iostream"
#include "typeinfo"

void sortCustom(int numArr[10], char sortMode);
int compareAscending(const void* lhs, const void* rhs);
int compareDscending(const void* lhs, const void* rhs);

int main() {
    char mode;
    while(scanf("%c", &mode) != EOF) {
        int const amount = 10;
        int numArr[20];
        for(int i = 0; i < amount; i++) {
            scanf("%d", numArr + i);
        }
        getchar();
        sortCustom(numArr, mode);
        // switch (mode)
        // {
        // case 'A':
        //     /* code */
        //     qsort(numArr, sizeof(numArr) / sizeof(*numArr), sizeof(*numArr), compareAscending);
        //     break;
        // case 'D':
        //     qsort(numArr, sizeof(numArr) / sizeof(*numArr), sizeof(*numArr), compareDscending);
        //     break;
        // default:
        //     break;
        // }
        
        for(int i = 0; i < amount; i++) {
            printf("%d", *(numArr + i));
            if(i != amount - 1) {
                printf(" ");
            }
        }
        printf("\n");
        
    }
}

int compareAscending(const void* lhs, const void* rhs) {
    return *(int*)lhs - *(int*)rhs;
}
int compareDscending(const void* lhs, const void* rhs) {
    return *(int*)rhs - *(int*)lhs;
}

void sortCustom(int numArr[10], char sortMode) {
    std::cout << typeid(numArr).name() << "\n";
    switch (sortMode)
    {
    case 'A':
        /* code */
        // qsort(numArr, sizeof(numArr) / sizeof(*numArr), sizeof(*numArr), compareAscending);
        qsort(numArr, 10, sizeof(int), compareAscending);
        break;
    case 'D':
        // qsort(numArr, sizeof(numArr) / sizeof(*numArr), sizeof(*numArr), compareDscending);
        qsort(numArr, 10, sizeof(int), compareAscending);
        break;
    default:
        break;
    }
}
/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 10:58:01
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-16 12:08:43
 * @FilePath: /Cpp/lab/lab10-week11/problemK.cpp
 * @Description: 输入一个十进制数N，将它转换成R进制数输出。
 * 7 2
 * 23 12
 * -4 3
 * 111
 * 1B
 * -11
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char* baseNNumberConverter(int decimal, int base);
int main() {
    int decimal;
    while(scanf("%d", &decimal) != EOF) {
        int base;
        scanf("%d", &base);

        char* convertedResult = baseNNumberConverter(decimal, base);
        if(decimal < 0) { printf("-"); }
        for(int i = (int)strlen(convertedResult) - 1; i >= 0; i--) {
            printf("%c", *(convertedResult + i));
        }
        printf("\n");
    }
}

char* baseNNumberConverter(int decimal, int base) {
    decimal = abs(decimal);
    char* convertedResult = (char*)malloc(decimal * sizeof(char));
    char baseCharacter[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int length = 0;
    while(decimal >= base) {
        *(convertedResult + length) = baseCharacter[decimal % base];
        decimal /= base;
        length++;
    }
    *(convertedResult + length) = baseCharacter[decimal];
    *(convertedResult + length + 1) = '\0';
    return convertedResult;
}
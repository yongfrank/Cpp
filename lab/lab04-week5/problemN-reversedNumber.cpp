/*
 * @Author: Frank Chu
 * @Date: 2022-10-06 11:20:35
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-06 11:35:18
 * @FilePath: /Cpp/lab/lab04-week5/problemN.cpp
 * @Description: reverse integer
 * https://www.programiz.com/c-programming/examples/reverse-number
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void reversedInteger(int* positiveNumber, int* reversedNumber, int* countOfNumberDigit);

int main() {
    int positiveNumber, outputNumber = 0, countOfNumberDigit = 0;
    scanf("%d", &positiveNumber);
    reversedInteger(&positiveNumber, &outputNumber, &countOfNumberDigit);
    printf("%d %d\n", outputNumber, countOfNumberDigit);
}

void reversedInteger(int* positiveNumber, int* reversedNumber, int* countOfNumberDigit) {
    int remainder;
    int isPositive = 1;
    if (*positiveNumber < 0) {
        isPositive = 0;
        *positiveNumber = -*positiveNumber;
    }
    while (*positiveNumber != 0) {
        remainder = *positiveNumber % 10;
        *reversedNumber = *reversedNumber * 10 + remainder;
        *positiveNumber /= 10;
        (*countOfNumberDigit)++;
    }

    if(!isPositive) {
        *reversedNumber = -*reversedNumber;
    }
}
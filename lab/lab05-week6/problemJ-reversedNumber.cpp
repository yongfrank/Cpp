/*
 * @Author: Frank Chu
 * @Date: 2022-10-06 11:20:35
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-10 09:18:34
 * @FilePath: /Cpp/lab/lab05-week6/problemJ-reversedNumber.cpp
 * @Description: reverse integer
 * https://www.programiz.com/c-programming/examples/reverse-number
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void reversedInteger(int* positiveNumber, int* reversedNumber, int* countOfNumberDigit);

int main() {
    int positiveNumber;
    while (scanf("%d", &positiveNumber) != EOF) {
        int outputNumber = 0, countOfNumberDigit = 0;
        reversedInteger(&positiveNumber, &outputNumber, &countOfNumberDigit);
        printf("%d\n", outputNumber);
    }
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
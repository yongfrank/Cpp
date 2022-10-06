/*
 * @Author: Frank Chu
 * @Date: 2022-10-05 10:40:05
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-05 10:50:14
 * @FilePath: /Cpp/lab/lab04-week5/problemF.cpp
 * @Description: How do I separate ones, tens, hundreds, and thousands from a four-digit user input in C programming?
 * https://www.quora.com/How-do-I-separate-ones-tens-hundreds-and-thousands-from-a-four-digit-user-input-in-C-programming
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include<stdio.h>

int main() {
    int integerNumber;
    int sum = 0;
    
    int countOfDigit = 0;
    scanf("%d", &integerNumber);
    if(integerNumber < 0) integerNumber = -integerNumber;

    while(integerNumber > 0) {
        sum += integerNumber % 10;
        integerNumber /= 10;
        countOfDigit += 1;
    }
    printf("%d %d\n", sum, countOfDigit);
}
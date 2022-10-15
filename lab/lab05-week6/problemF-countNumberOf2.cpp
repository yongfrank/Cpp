/*
 * @Author: Frank Chu
 * @Date: 2022-10-10 08:34:45
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-10 08:38:31
 * @FilePath: /Cpp/lab/lab05-week6/problemF-countNumberOf2.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
int countdigit(int, int);
int main() {
    int number, integer, digit = 2;
    while (scanf("%d", &integer) != EOF)
    {
        number = countdigit(integer, digit);
        printf("%d\n", number);
    }
    return 0;
}

int countdigit(int integer, int digit) {
    int a, number = 0;
    while (integer != 0) {
        a = integer % 10;
        integer = integer / 10;
        if (a == digit)
        {
            number++;
        }
    }
    return number;
}
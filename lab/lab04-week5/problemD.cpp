/*
 * @Author: Frank Chu
 * @Date: 2022-10-05 10:31:07
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-05 10:36:47
 * @FilePath: /Cpp/lab/lab04-week5/problemD.cpp
 * @Description: Problem D: Input any N numbers and sum them up
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int amountOfNumber;
    int inputNumber;
    int sum = 0;

    scanf("%d", &amountOfNumber);
    for(int i = 0; i < amountOfNumber; i++) {
        scanf("%d", &inputNumber);
        sum += inputNumber;
    }
    printf("s=%d\n", sum);
}
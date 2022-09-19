/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 09:18:21
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 09:22:00
 * @FilePath: /Cpp/lab/lab02/ProblemJ-LeapYear.c
 * @Description: Question J: Leap Years - The Seventeenth Battle of 100 Questions for Beginners in C Language https://acm.zstu.edu.cn/problem.php?cid=6838&pid=9
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    // leap year if perfectly divisible by 400
    if (year % 400 == 0) {
        printf("Yes\n");
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0) {
        printf("No\n");
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0) {
        printf("Yes\n");
    } 
    else {
        printf("No\n");
    }
}
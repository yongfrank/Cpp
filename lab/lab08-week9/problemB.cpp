/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 12:11:13
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 12:20:27
 * @FilePath: /Cpp/lab/lab08-week9/problemB.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9967296.html
 * Problem B: 零起点学算法92——元素前移1位
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void shiftNPosition(int position, int numberCount);
int main() {
    int numberCount;
    while(scanf("%d", &numberCount) != EOF) {
        shiftNPosition(1, numberCount);
    }
}

void shiftNPosition(int position, int numberCount) {
    int number[numberCount];
    for (int i = 0; i < numberCount; i++) {
        scanf("%d", &number[i]);
    }
    for (int i = position; i < numberCount; i++) {
        printf("%d ", number[i]);
    }
    for (int i = 0; i < position; i++) {
        if (i == position - 1) {
            printf("%d\n", number[i]);
        } else {
            printf("%d ", number[i]);
        }
    }
}
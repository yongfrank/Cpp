/*
 * @Author: Frank Chu
 * @Date: 2022-11-27 10:34:22
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-27 10:56:16
 * @FilePath: /Cpp/lab/lab12-week13/problemDHanoi.c
 * @Description: 问题 D: 深入浅出学算法022-汉诺塔问题II
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void hanoi(int numberOfDisk, char fromRod, char toRod, char auxRod);

int main() {
    int numberOfDisk;
    char fromRod = 'a', toRod = 'c', auxRod = 'b';
    while(scanf("%d", &numberOfDisk) != EOF) {
        hanoi(numberOfDisk, fromRod, toRod, auxRod);
    }
}

void hanoi(int numberOfDisk, char fromRod, char toRod, char auxRod) {
    if(numberOfDisk == 1) {
        printf("%c->%c\n", fromRod, toRod);
        return;
    } else {
        hanoi(numberOfDisk - 1, fromRod, auxRod, toRod);
        printf("%c->%c\n", fromRod, toRod);
        hanoi(numberOfDisk - 1, auxRod, toRod, fromRod);
    }
}

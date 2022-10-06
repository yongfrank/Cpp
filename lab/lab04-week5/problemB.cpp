/*
 * @Author: Frank Chu
 * @Date: 2022-10-05 10:02:34
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-05 10:19:48
 * @FilePath: /Cpp/lab/lab04-week5/problemB.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void printfNumberRhombus(int row);

int main() {
    int row = 3;
    
    scanf("%d", &row);
    printfNumberRhombus(row);
}

void printfNumberRhombus(int row) {
    for(int i = 0; i < row; i++) {

        // Row = 3; row - 0 - 1 = 2;
        // j = 0, j = 1; j < 2
        for(int j = 0; j < row - i - 1; j++) {
            printf(" ");
        }
        
        for(int k = 0; k <= 2 * i; k++) {
            printf("%d", i + 1);
        }
        printf("\n");
    }
    
    for(int i = 0; i < row - 1; i++) {

        // row = 3; j = row;
        // j > 3 - i = 3
        for(int j = row; j > row - i - 1; j--) {
            printf(" ");
        }

        // row = 3; k = 2 * (3 - 0 - 2) = 6; 
        for(int k = 2 * (row - i - 2); k >= 0; k--) {
            printf("%d", row - i - 1);
        }
        printf("\n");
    }
}
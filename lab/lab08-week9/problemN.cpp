/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 16:22:17
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 16:38:38
 * @FilePath: /Cpp/lab/lab08-week9/problemN.cpp
 * @Description: self-created
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>

void getinMatrix(int matrixDimension, int integerMatrix[100][100]);
int main() {
    int dimension = 0;
    int integerMatrix[100][100];
    scanf("%d", &dimension);
    getinMatrix(dimension, integerMatrix);
}

void getinMatrix(int matrixDimension, int integerMatrix[100][100]) {
    int mainDiagonal = 0; int sideDiagonal = 0;
    for(int i = 0; i < matrixDimension; i++) {
        for(int j = 0; j < matrixDimension; j++) {
            int inputTemp;
            scanf("%d", &inputTemp);
            integerMatrix[i][j] = inputTemp;
            if (i == j) {
                mainDiagonal += inputTemp;
            }
            if (i + j == matrixDimension - 1) {
                // printf("%d\n", inputTemp);
                sideDiagonal += inputTemp;
            }
        }
    }
    printf("%d %d\n", mainDiagonal, sideDiagonal);
}
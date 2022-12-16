/*
 * @Author: Frank Chu
 * @Date: 2022-12-16 14:25:57
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-16 14:40:49
 * @FilePath: /Cpp/class/week15-c/problemE.c
 * @Description: 
问题 E: 矩阵相加
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

输入2个矩阵A和B,输出矩阵C=A+B

输入

第一行输入n,m(1<=n,m<=10),表示矩阵的行和列
然后是2个n行m列的矩阵

输出

输出矩阵C

样例输入 Copy

2 3
1 2 3
4 5 6
10 20 30
40 50 60
样例输出 Copy

11 22 33
44 55 66
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

#include <stdio.h>

void getSumOfMatrix(int row, int column) {
    int matrixA[row][column];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }
    int matrixB[row][column];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    int outputMatrix[row][column];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            outputMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            printf("%d ", outputMatrix[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int row, column;
    scanf("%d %d", &row, &column);
    getSumOfMatrix(row, column);
}
/*
 * @Author: Frank Chu
 * @Date: 2022-12-04 19:58:42
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-04 20:30:36
 * @FilePath: /Cpp/lab/lab13-week14/problemB.c
 * @Description: 多组测试数据，每组输入2个整数n和m,其中1 < n <= m <= 1000
 * 在一行输出n和m之间（包含n和m)的所有素数,中间用空格隔开，最后一个数后面没有空格。
2 14

2 3 5 7 11 13
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

// Sieve of Eratosthenes
// https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
void sieveOfEratosthenes(int* array, int start, int end) {
    array[1] = array[2] = 1;
    for(int position = 2; position * position <= end; position++) {
        if(array[position] == 1) {
            for(int temp = position * position; temp <= end; temp += position) {
                array[temp] = 0;
            }
        }
    }
}

int main() {
    int start, end;
    int array[1001] = {0};
    for(int i = 0; i < 1001; i++) {
        array[i] = 1;
    }
    sieveOfEratosthenes(array, 1, 1000);
    while(scanf("%d %d", &start, &end) != EOF) {
        for(int i = start; i <= end; i++) {
            if(array[i] == 1) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}
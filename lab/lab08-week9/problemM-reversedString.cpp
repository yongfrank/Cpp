/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 11:28:48
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 11:43:26
 * @FilePath: /Cpp/lab/lab08-week9/problemM-reversedString.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9978256.html
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <string.h>
#define ARRAYSIZE 80

int main() {
    char array[ARRAYSIZE];

    gets(array);
    // for (int i = 0; i < 10; i++) {
    //     scanf("%c", &array[i]);
    // }
    int n = strlen(array);
    // printf("%d\n", n);
    for(int i = n - 1; i >= 0; i--) {
        printf("%c", array[i]);
    }
    printf("\n");
}
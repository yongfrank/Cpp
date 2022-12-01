/*
 * @Author: Frank Chu
 * @Date: 2022-11-28 08:28:35
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-28 08:30:55
 * @FilePath: /Cpp/lab/lab12-week13/problemI.c
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int factorial(int n);
int main() {
    int n;
    int amount;
    scanf("%d", &amount);
    while (amount--)
    {
        scanf("%d", &n);
        printf("%d\n", factorial(n));
    }
    
}

int factorial(int n) {
    if(n == 1) { return 1; }
    return factorial(n - 1) * n;
}
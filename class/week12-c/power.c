/*
 * @Author: Frank Chu
 * @Date: 2022-11-25 14:48:42
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-25 14:55:28
 * @FilePath: /Cpp/class/week12-c/power.c
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
int mi(int x, int n);
int main() {
    printf("%d", mi(2, 0));
}

int mi(int x, int n)
{
if (n == 0){
    return 1;
}else{
    return x * mi(x, n - 1);
  }
} 
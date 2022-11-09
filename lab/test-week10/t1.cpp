/*
 * @Author: Frank Chu
 * @Date: 2022-11-07 08:14:27
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-07 08:16:48
 * @FilePath: /Cpp/lab/test-week10/t1.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include<stdio.h>

int main() {
    int price;
    scanf("%d", &price);
    int tenth, fifth, once;
    tenth = price / 10;
    fifth = (price - tenth * 10) / 5;
    once = (price - tenth * 10 - fifth * 5);
    printf("10yuan:%d\n", tenth);
    printf("5yuan:%d\n", fifth);
    printf("1yuan:%d\n", once);
}
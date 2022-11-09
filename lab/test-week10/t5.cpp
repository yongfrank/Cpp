/*
 * @Author: Frank Chu
 * @Date: 2022-11-07 08:54:58
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-07 09:05:28
 * @FilePath: /Cpp/lab/test-week10/t5.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>

int main() {
    int amountOfRice;
    scanf("%d", &amountOfRice);
    
    int heightOfRice[amountOfRice];
    
    for(int i = 0; i < amountOfRice; i++) {
        scanf("%d", &heightOfRice[i]);
    }

    int days;
    scanf("%d", &days);
    for (int i = 0; i < days; i++) {
        int from, to;
        scanf("%d %d", &from, &to);
        if (from > to) {
            int temp;
            temp = to;
            to = from;
            from = temp;
        }
        int riseHeigh;
        scanf("%d", &riseHeigh);
        for(int j = from - 1; j <= to - 1; j++) {
            heightOfRice[j] += riseHeigh;
        }
    }
 
    for (int i = 0; i < amountOfRice; i++) {
        printf("%d", heightOfRice[i]);
        if(i != amountOfRice - 1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }
}
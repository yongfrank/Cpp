/*
 * @Author: Frank Chu
 * @Date: 2022-10-05 11:12:00
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-05 16:26:56
 * @FilePath: /Cpp/lab/lab04-week5/problemH.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
int main()
{
    int count = 0, money, i, j, m;
    scanf("%d", &money);
    
    for (i = 1; i < money; i++) {
        for (j = 1; j < money / 2; j++) {
            for (m = 1; m <= money / 5; m++) {
                if ((i + j * 2 + m * 5) == money) {
                    count++;
                }
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
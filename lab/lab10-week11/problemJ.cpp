/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 10:42:55
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-16 10:56:29
 * @FilePath: /Cpp/lab/lab10-week11/problemJ.cpp
 * @Description: 问题 J: 零起点学算法90——开灯问题
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include "stdio.h"

int main()
{
    int amountOfPC;

    while (scanf("%d", &amountOfPC) != EOF)
    {
        int PCStatus[amountOfPC + 1];
        for (int i = 1; i <= amountOfPC; i++) // i表示回合1--n
        {
            for (int j = 1; j <= amountOfPC; j++) // k表示电脑编号1--n
            {
                if (i == 1)
                {
                    PCStatus[j] = 1;
                }
                else if (j % i == 0)
                {
                    PCStatus[j] = 1 - PCStatus[j];
                }
                // printf("%d ", PCStatus[j]);
            }
            // printf("\n");
        }
        int openedPC = 0;
        for (int i = 1; i <= amountOfPC; i++)
        {
            if (PCStatus[i] == 1)
            {
                openedPC++;
            }
        }
        printf("%d\n", openedPC);
    }
}
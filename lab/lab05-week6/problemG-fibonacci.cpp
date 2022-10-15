/*
 * @Author: Frank Chu
 * @Date: 2022-10-10 08:40:17
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-10 08:53:54
 * @FilePath: /Cpp/lab/lab05-week6/problemG-fibonacci.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>

void fib(int startIndex, int endIndex)
{

    int previous = 1, current = 1, sumOfFibonacci = 2;
    for (int i = 1; i <= endIndex; i++)
    {
        if (i == 1 || i == 2)
        {
            sumOfFibonacci = 1;
            if (i >= startIndex && i <= endIndex)
            {
                printf("%5d", sumOfFibonacci);
            }
            continue;
        }
        sumOfFibonacci = previous + current;

        if (i >= startIndex && i <= endIndex)
        {
            printf("%5d", sumOfFibonacci);
        }
        previous = current;
        current = sumOfFibonacci;
    }
    printf("\n");
}

int main()
{
    int startIndex, endIndex;
    while (scanf("%d %d", &startIndex, &endIndex) != EOF)
    {
        fib(startIndex, endIndex);
    }
}
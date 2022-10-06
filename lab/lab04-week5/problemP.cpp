/*
 * @Author: Frank Chu
 * @Date: 2022-10-06 11:39:05
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-06 11:39:34
 * @FilePath: /Cpp/lab/lab04-week5/problemP.cpp
 * @Description: https://www.361shipin.com/blog/1537929624095293440
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, k;
    for (i = 0; i <= 100; i++)
    {
        for (j = 0; j <= 100; j++)
        {
            for (k = 0; k <= 100; k++)
            {
                if (i * 5 + j * 3 + k / 3 == 100 && k % 3 == 0 && i + j + k == 100)
                    printf("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}
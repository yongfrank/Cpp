/*
 * @Author: Frank Chu
 * @Date: 2022-11-07 08:33:31
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-07 08:54:10
 * @FilePath: /Cpp/lab/test-week10/t4.cpp
 * @Description: 问题 D: 镂空三角形 https://acm.zstu.edu.cn/problem.php?cid=7042&pid=3
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>

int main()
{
    char a[5];
    while (scanf("%s", a) != EOF)
    {
        if (a[0] == '@')
        {
            break;
        }

        char character = a[0];

        int height = 0;
        scanf("%d", &height);
        // printf("%c %d\n", character, height);
        for (int i = 0; i < height; i++)
        {
            if (i == height - 1) {
                for (int j = 0; j < height * 2 - 1; j++) {
                    printf("%c", character);
                }
                printf("\n\n");
            } else {
                for (int j = 0; j < height - i - 1; j++)
                {
                    printf(" ");
                }
                printf("%c", character);
                for (int j = 0; j < 2 * i - 1; j++) {
                    printf(" ");
                }
                if (i != 0) {
                    printf("%c", character);
                }
                printf("\n");
            }
        }
    }
}
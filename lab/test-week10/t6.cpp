/*
 * @Author: Frank Chu
 * @Date: 2022-11-07 09:15:23
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-07 09:24:13
 * @FilePath: /Cpp/lab/test-week10/t6.cpp
 * @Description: https://ask.csdn.net/questions/7502995
 * 读入一个n*m的矩阵,定义两个数是友好的，当且仅当他们位置相邻（上下左右）且值相同。求友好数对个数。
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int main(void)
{
    int row, line;
    scanf("%d %d", &line, &row);
    int arr[line][row];
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < row; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int num = 0;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i + 1 < line)
            {
                if (arr[i][j] == arr[i + 1][j])
                    num++;
            }
            if (j + 1 < row)
            {
                if (arr[i][j] == arr[i][j + 1])
                    num++;
            }
        }
    }
    printf("%d", num);
    return 0;
}
/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 15:57:03
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 16:04:36
 * @FilePath: /Cpp/lab/lab08-week9/problemG.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9977194.html
 * Problem G: 零起点学算法102——删除字符
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
#include <string.h>
int main()
{
    char stringToBeCutted[105], deletionLetter;
    while (gets(stringToBeCutted) != NULL)
    {
        scanf("%c", &deletionLetter);
        getchar(); //注意加这一行，它的作用是将上一行输入的回车符号'\n'符号读入
        getchar();
        for (int i = 0; stringToBeCutted[i] != '\0'; i++)
        {
            if (stringToBeCutted[i] != deletionLetter)
                printf("%c", stringToBeCutted[i]);
        }
        printf("\n");
    }
    return 0;
}
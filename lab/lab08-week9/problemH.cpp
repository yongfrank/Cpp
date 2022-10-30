/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 16:06:45
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 16:06:48
 * @FilePath: /Cpp/lab/lab08-week9/problemH.cpp
 * @Description: https://acm.zstu.edu.cn/problem.php?cid=7005&pid=7
 * 问题 H: 零起点学算法103——查找最大元素
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
#include <string.h>
int main()
{
    char a[105];
    while (gets(a) != NULL)
    {
        int k = a[0];
        for (int i = 1; a[i] != '\0'; i++)
        {
            if (a[i] > k)
            {
                k = a[i];
            }
        }

        for (int i = 0; a[i] != '\0'; i++)
        {
            printf("%c", a[i]);
            if (k == a[i])
            {
                printf("(max)");
            }
        }
        printf("\n");
    }
    return 0;
}
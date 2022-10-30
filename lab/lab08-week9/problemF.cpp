/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 15:53:21
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 15:53:29
 * @FilePath: /Cpp/lab/lab08-week9/problemF.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9977162.html
 * Problem F: 零起点学算法101——统计字母数字等个数
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
#include <string.h>
int main()
{
    char str[105];
    while (gets(str) != NULL)
    {
        int a = 0, b = 0, c = 0, d = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                a++;
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                b++;
            }
            else if (str[i] == ' ')
            {
                c++;
            }
            else
            {
                d++;
            }
        }
        printf("%d %d %d %d\n", a, b, c, d);
    }
    return 0;
}
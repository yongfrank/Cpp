/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 16:18:39
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 16:18:42
 * @FilePath: /Cpp/lab/lab08-week9/problemK.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9977378.html
 * Problem K: 零起点学算法107——统计元音
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
int main()
{
    int n;
    char a[100];
    while (scanf("%d%*c", &n) != EOF)
    {
        while (n--)
        {
            int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
            gets(a);
            for (int i = 0; a[i] != '\0'; i++)
            {
                switch (a[i]) //在这用switch语句会比较方便
                {
                case 'a':
                    num1++;
                    break;
                case 'e':
                    num2++;
                    break;
                case 'i':
                    num3++;
                    break;
                case 'o':
                    num4++;
                    break;
                case 'u':
                    num5++;
                    break;
                }
            }
            printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n", num1, num2, num3, num4, num5);
        }
    }
    return 0;
}
/*
 * @Author: Frank Chu
 * @Date: 2022-10-29 18:22:37
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 11:14:09
 * @FilePath: /Cpp/lab/lab08-week9/problemP-encrypt.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9978885.html
 * Problem F: 加密程序2
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int main()
{
    int i;
    char a[85];
    while (gets(a) != NULL)
    {
        // \0 is NUL
        for (i = 0; a[i] != '\0'; i++)
            if ('A' <= a[i] && a[i] <= 'Z')
                a[i] = 'Z' - a[i] + 'A';
        puts(a);
    }
    return 0;
}
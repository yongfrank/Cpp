/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 16:08:29
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 16:16:36
 * @FilePath: /Cpp/lab/lab08-week9/problemJ.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9977302.html
 * Problem J: 零起点学算法105——C语言合法标识符
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
#include <ctype.h> //调用isalpha函数
int main()
{
    int n;
    char a[55];
    while (scanf("%d%*c", &n) != EOF)
    {
        while (n--) {
            int d = 1;
            gets(a);
            if (a[0] != '_' && !isalpha(a[0])) // isalpha函数用来判断字符是否为英文字母
            {
                printf("no\n");
            } else {
                for (int j = 1; a[j] != '\0'; j++)
                {
                    if (a[j] != '_' && !isalnum(a[j]))
                    {

                        d = 0;
                        break;
                    }
                }
                puts(d ? "yes" : "no");
            }
        }
    }
    return 0;
}
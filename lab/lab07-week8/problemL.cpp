/*
 * @Author: Frank Chu
 * @Date: 2022-10-21 22:41:54
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-21 22:43:17
 * @FilePath: /Cpp/lab/lab07-week8/problemL.cpp
 * @Description: https://blog.csdn.net/weixin_34240657/article/details/93200092
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
int main()
{
    int n, a[20], b[20] = {0};
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    b[i]++;
                }
            }
        }

        int m = b[0];
        for (int i = 1; i < n; i++)
        {
            if (b[i] > m)
                m = b[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (b[i] == m)
            {
                printf("%d\n", a[i]);
            }
        }
    }
    return 0;
}
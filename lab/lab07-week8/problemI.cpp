/*
 * @Author: Frank Chu
 * @Date: 2022-10-21 22:28:43
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-21 22:39:52
 * @FilePath: /Cpp/lab/lab07-week8/problemI.cpp
 * @Description: https://blog.csdn.net/weixin_45485719/article/details/102925058
 * Problem D: 零起点学算法83——数组中删数
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int main()
{
    int n, a[20], b[20], i;
    int flag = 1;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int m, j = 0;
        scanf("%d", &m);
        for (i = 0; i < n; i++)
        {
            if (m != a[i])
            {
                b[j] = a[i];
                j++;
            }
        }
        
        if (j == 0)
            printf("\n");
        else
        {
            for (i = 0; i < j - 1; i++)
            {
                if (flag == 1)
                {
                    printf("%d", b[i]);
                    flag = 0;
                }
                else
                    printf(" %d", b[i]);
            }
            printf(" %d\n", b[j - 1]);
        }
        flag = 1;
    }
    return 0;
}
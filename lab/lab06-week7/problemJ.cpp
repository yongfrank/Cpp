/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 11:05:22
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 11:05:42
 * @FilePath: /Cpp/lab/lab06-week7/problemJ.cpp
 * @Description: https://blog.csdn.net/weixin_51713993/article/details/113555042
 * - 青年歌手大奖赛_评委会打分（去掉一个最高分去掉一个最低分，取平均分）
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
#include <string.h>

int main()
{
    int i, n;
    double a[1000], s, min, max, sum;
    while (~scanf("%d", &n))
    {

        for (i = 0; i < n; i++)
        {
            scanf("%lf", &a[i]);
        }
        sum = 0;
        min = a[0];
        max = a[0];
        for (i = 0; i < n; i++) //找最小数
        {
            if (min >= a[i])
                min = a[i];
        }
        for (i = 0; i < n; i++) //找最大数
        {
            if (max <= a[i])
                max = a[i];
        }
        for (i = 0; i < n; i++)
        {
            sum += a[i];
        }
        s = (sum - min - max) / (n - 2); //求平均数
        printf("%.2lf\n", s);
    }
    return 0;
}
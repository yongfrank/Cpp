/*
 * @Author: Frank Chu
 * @Date: 2022-10-21 16:36:29
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-21 16:41:27
 * @FilePath: /Cpp/lab/lab07-week8/problemA-MaxandMin.cpp
 * @Description: https://blog.csdn.net/Fan_xaing/article/details/120923610
 * n个数输出最大值和最小值
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int main()
{
    int a, i;
    float m, smallerNumber, maxNumber; //定义两个量n，f分别代表最大值和最小值
    maxNumber = 0;
    scanf("%d", &a); //输入所要输入的数的个数；
    if (a == 0)
    {
        printf(" \n"); //如果一共要输入的数为零则输出空格；
        return 0;
    }
    scanf("%f", &m); //输入第一个数赋给n；
    smallerNumber = m;
    maxNumber = m;
    for (i = 0; i < a - 1; i++)
    { // 循环输入m和n，f比较；
        scanf("%f", &m);
        if (m > maxNumber) //将大的值留在m中；
            maxNumber = m;
        if (m < smallerNumber) //将小的值留在n中；
            smallerNumber = m;
    }
    printf("max=%g, min=%g\n", maxNumber, smallerNumber);
    return 0;
}
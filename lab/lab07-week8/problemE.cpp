/*
 * @Author: Frank Chu
 * @Date: 2022-10-21 22:06:01
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-21 22:23:06
 * @FilePath: /Cpp/lab/lab07-week8/problemE.cpp
 * @Description: https://blog.csdn.net/weixin_49697516/article/details/107755441
 * c++中档题：最大数与数列最后一个数交换
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int numberAmount, i, temp, a[100], max, maxIndex;
    scanf("%d", &numberAmount);

    for (i = 0; i < numberAmount; i++) {
        cin >> a[i];
    }

    
    max = a[0];
    for (i = 0; i < numberAmount; i++)
    {
        if (max >= a[i])
        {
            max = a[i];
            maxIndex = i;
        }
    }
    
    temp = max;
    a[maxIndex] = a[0];

    a[0] = temp;
    
    for (i = 0; i < numberAmount; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}
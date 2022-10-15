/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 10:37:31
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 10:49:33
 * @FilePath: /Cpp/lab/lab06-week7/problemG.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
int main()
{
    int arraySize;
    while (scanf("%d", &arraySize) != EOF) {
        int numberToBeFound, i;
        
        int arr[arraySize];
        for (i = 0; i < arraySize; i++) //输入n个整数
        {
            scanf("%d ", &arr[i]);
        }
        scanf("%d", &numberToBeFound);
        
        for (i = 0; i < arraySize; i++)
        {
            if (numberToBeFound == arr[i]) //找到相同数字
            {
                printf("%d\n", i); //打印下标
                break;
            }
        }
        if (i == arraySize)
            printf("No\n");
    }
    return 0;
}
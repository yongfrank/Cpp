/*
 * @Author: Frank Chu
 * @Date: 2022-11-11 13:34:14
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-11 13:48:26
 * @FilePath: /Cpp/class/week10-cpp-template/test.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include "stdio.h"

void sort(int a[], int n)

{
    int k, j;
    for (k = 1; k < n; k++)

        for (j = 0; j < n - k; j++)

            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[] = {-1, 2, 0};
    sort(a, 3);
}
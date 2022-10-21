/*
 * @Author: Frank Chu
 * @Date: 2022-10-21 22:28:43
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-21 22:28:46
 * @FilePath: /Cpp/lab/lab07-week8/problemH.cpp
 * @Description: https://blog.csdn.net/weixin_45485719/article/details/102925058
 * Problem D: 零起点学算法83——数组中删数
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, a[50], dele, flag;
    while (cin >> n)
    {
        flag = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];
        cin >> dele;
        for (i = 0; i < n; i++)
            if (a[i] == dele)
            {
                flag = 1;
                for (j = i; j < n - 1; j++)
                    a[j] = a[j + 1];
                break;
            }
        for (i = 0; i < n - flag; i++)
            if (i == 0)
                cout << a[i];
            else
                cout << " " << a[i];
        cout << endl;
    }
    return 0;
}
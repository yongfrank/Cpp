/*
 * @Author: Frank Chu
 * @Date: 2022-11-09 11:41:08
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-09 11:42:15
 * @FilePath: /Cpp/lab/lab09-week10/problem6.cpp
 * @Description: https://blog.csdn.net/weixin_45485719/article/details/103375181
 * Problem D: 调用自定义函数search(int list[], int n),在数组中查找某个数
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <iostream>
using namespace std;
int search(int *a, int n)
{
    int i;
    for (i = 0; i <= 9; i++)
        if (*(a + i) == n)
            return i;
    return -1;
}
int main()
{
    int i, a[10], n;
    while (cin >> a[0])
    {
        for (i = 1; i <= 9; i++)
            cin >> a[i];
        cin >> n;
        if (search(a, n) != -1)
            cout << search(a, n) << endl;
        else
            cout << "Not found" << endl;
    }
    return 0;
}
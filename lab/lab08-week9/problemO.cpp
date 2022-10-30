/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 16:37:37
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 16:44:06
 * @FilePath: /Cpp/lab/lab08-week9/problemO.cpp
 * @Description: https://www.nowcoder.com/questionTerminal/5713b97d955a43b1b68fadf956a52575
 * https://blog.csdn.net/weixin_45485719/article/details/103043238
 * 判断是否上三角矩阵
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <iostream>
using namespace std;
int main()
{
    int n, a[10][10], i, j;
    while (cin >> n)
    {
        int flag = 1;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (j < i && a[i][j] != 0)
                    flag = 0;
            }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
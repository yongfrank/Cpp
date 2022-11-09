/*
 * @Author: Frank Chu
 * @Date: 2022-11-07 08:19:34
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-07 08:19:36
 * @FilePath: /Cpp/lab/test-week10/t2.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <iostream>
using namespace std;
int main()
{
    int s;
    while (cin >> s)
    {
        if (90 <= s && s <= 100)
            cout << "A" << endl;
        else if (80 <= s && s <= 90)
            cout << "B" << endl;
        else if (70 <= s && s <= 80)
            cout << "C" << endl;
        else if (60 <= s && s <= 70)
            cout << "D" << endl;
        else if (0 <= s && s <= 60)
            cout << "E" << endl;
    }
    return 0;
}
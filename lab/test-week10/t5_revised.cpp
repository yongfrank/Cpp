/*
 * @Author: Frank Chu
 * @Date: 2022-11-07 09:07:10
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-07 09:14:22
 * @FilePath: /Cpp/lab/test-week10/t5_revised.cpp
 * @Description: https://zhidao.baidu.com/question/1546691773136314667.html
 * 问题 E: 拔苗助长
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <iostream>

#include <vector>

using namespace std;

int main() {
    int days;
    int amountOfRice;
    vector<int> heightOfRice;
    cin >> amountOfRice;

    for (int i = 0; i < amountOfRice; i++) {
        int l = -1;
        cin >> l;
        heightOfRice.push_back(l);
    }

    cin >> days;

    for (int i = 0; i < days; i++) {
        int a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        if (a > b) {
            swap(a, b);
        }
        for (int j = a - 1; j <= b - 1; j++) {
            heightOfRice[j] += c;
        }
    }

    for (int t : heightOfRice) {
        cout << t << " ";
    }

    return 0;
}
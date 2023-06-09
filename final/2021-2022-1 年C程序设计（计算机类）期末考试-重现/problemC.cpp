/*
 * @Author: Frank Chu
 * @Date: 2023-02-19 12:04:46
 * @LastEditors: Frank Chu
 * @LastEditTime: 2023-02-19 12:32:00
 * @FilePath: /Cpp/final/2021-2022-1 年C程序设计（计算机类）期末考试-重现/problemC.cpp
 * @Description: 
问题 C: 爬山
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

题目描述
DD 现在想去爬山，她定义从第 i 座山到第 i+1 座山的疲劳度是∣ai−ai+1∣, 现在给定 n座山，初始状态下 DD 在第一座山上，她想知道整个爬山过程中单次疲劳度最大是多少
输入
第一行给定一个整数表示 n
第二行 n 个整数，第 i 个表示 ai
输出
输出疲劳度最大值是多少
样例输入 Copy
6
1 100 2 200 3 300
样例输出 Copy
297
提示
数据范围
对于 30% 的数据，2≤n≤5000
对于另外 20% 的数据，保证所有的ai 都相同
对于 100% 的数据,2≤n≤500000,1≤ai≤109
 * 
 * Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
 */

#include <iostream>
#include <vector>

int climbMountain(int peopleAmount, std::vector<int> mountainArray) {
    int max = 0;
    for(int i = 0; i < peopleAmount - 1; i++) {
        int tiredValue = abs(mountainArray[i] - mountainArray[i + 1]);
        max = (max > tiredValue) ? max : tiredValue;
    }
    return max;
}

int main() {
    int peopleAmount;
    std::cin >> peopleAmount;
    std::vector<int> mountainArray(peopleAmount);
    for(auto i = 0; i < peopleAmount; i++) {
        std::cin >> mountainArray[i];
    }

    std::cout << climbMountain(peopleAmount, mountainArray);
    return 0;
}
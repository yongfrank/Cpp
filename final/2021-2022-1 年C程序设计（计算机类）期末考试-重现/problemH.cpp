/*
 * @Author: Frank Chu
 * @Date: 2023-02-20 00:22:49
 * @LastEditors: Frank Chu
 * @LastEditTime: 2023-02-20 01:18:09
 * @FilePath: /Cpp/final/2021-2022-1 年C程序设计（计算机类）期末考试-重现/problemH.cpp
 * @Description: 
问题 H: 隔离区
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

题目描述
西安发生新冠疫情了。不少人进了隔离区。
隔离区是一个凸多边形，为了隔离人员的安全，我们需要用木板将隔离区分隔开。为了隔板的稳定，隔板两边分别与凸多边形的顶点相接，当然隔板不能被其他隔板断开。

凸多边形是5的情况，有上面5种划分方案。
现在知道顶点个数，你知道有多少种隔离方案,使得每个区域是三角形？

g.png


输入
一个整数n。
输出
一个整数，即方案数。
样例输入 Copy
5
样例输出 Copy
5
提示
3<=N<=20
 * 
 * Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
 */

#include <iostream>
int Catalan_Number(int edges) {
    int note[edges];
    for(int i = 0; i <= edges; i++) { note[i] = 0; }
    note[2] = 1;
    note[3] = 1;
    for(int edge = 4; edge < edges + 1; edge++) {
        for(int pointChoose = 0; pointChoose < edge - 2; pointChoose++) {
            note[edge] = note[edge] + note[pointChoose + 2] * note[edge - pointChoose - 1];
        }
    }
    return note[edges];
}

int main() {
    int number;
    std::cin >> number;
    std::cout << Catalan_Number(number);
}

// int main() {
//     int edges;
//     std::cin >> edges;
//     int note[edges];
//     for(int i = 0; i <= edges; i++) { note[i] = 0; }
//     note[2] = 1;
//     note[3] = 1;
//     for(int edge = 4; edge < edges + 1; edge++) {
//         for(int pointChoose = 0; pointChoose < edge - 2; pointChoose++) {
//             note[edge] = note[edge] + note[pointChoose + 2] * note[edge - pointChoose - 1];
//         }
//     }
//     std::cout << note[edges];
// }
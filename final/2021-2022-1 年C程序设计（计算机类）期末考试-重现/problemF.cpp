/*
 * @Author: Frank Chu
 * @Date: 2023-02-19 20:45:38
 * @LastEditors: Frank Chu
 * @LastEditTime: 2023-02-19 22:07:03
 * @FilePath: /Cpp/final/2021-2022-1 年C程序设计（计算机类）期末考试-重现/problemF.cpp
 * @Description: 
问题 F: 友好数对
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

题目描述
读入一个n*m的矩阵,定义两个数是友好的，当且仅当他们位置相邻（上下左右）且值相同。求友好数对个数。
输入
第一行两个整数n，m
之后n行，每行m个0到100间的整数
输出
一个整数，表示答案。
样例输入 Copy
5 4
3 3 3 4
2 0 0 3
0 3 1 4
3 4 3 3
1 0 3 3
[[3, 3, 3, 4], [2, 0, 0, 3]]
样例输出 Copy
7
提示
1<=n，m<=500

 * 
 * Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
 */

#include <iostream>
#include <vector>

int main() {
    int rows, columns;
    std::cin >> rows >> columns;
    int array_map[rows][columns];
    for(int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cin >> array_map[i][j];
        }
    }
    int friend_pair = 0;
    for(int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            if(column != columns - 1) {
                if (array_map[row][column] == array_map[row][column + 1]) friend_pair++;
            }
            if (row != rows - 1) {
                if (array_map[row][column] == array_map[row + 1][column]) friend_pair++;
            }
        }
    }
    std::cout << friend_pair << std::endl;
}
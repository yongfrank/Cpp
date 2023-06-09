/*
 * @Author: Frank Chu
 * @Date: 2022-12-19 10:19:24
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-19 13:12:58
 * @FilePath: /Cpp/lab/lab15-week16-c/problemF.cpp
 * @Description: 
问题 F: 小明画画
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

还在上幼儿园的小明很喜欢画画，他喜欢用*组成很多图案

有一天他画了例子中的画，画了一组又一组

每一组有个特点哦，你有没有发现？

比如他认定一个整数2，他会先画2个星号，然后空2格，然后再画2个星号，这样总共画2行，然后下面画一整行的星号，然后再下面画2行星号，不过这2行星号正好是上面空着的位置，移上去的话正好填满上面的空

你会用计算机画吗？

输入

多组测试数据，每组输入1个2到9之间的整数

输出

输出小明画的图画

样例输入 Copy

2
3
样例输出 Copy

**  **
**  **
******
  **
  **
***   ***
***   ***
***   ***
*********
   ***
   ***
   ***
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>

void drawPictures(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << "*";
        }
        for (int j = 0; j < n; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < n; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int j = 0; j < n * 3; j++) {
        std::cout << "*";
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < n; j++) {
            std::cout << "*";
        }
        for (int j = 0; j < n; j++) {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    while (std::cin >> n) {
        drawPictures(n);
    }
    return 0;
}
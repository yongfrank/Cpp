/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 12:39:04
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-16 12:55:13
 * @FilePath: /Cpp/hw/hw07cpp-week10/main.cpp
 * @Description: 1. (简答题) 7.6 设计一个函数模板，实现两数的交换，并用int、float、char等类型的数据进行测试。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "iostream"

template <typename T> 
void switchTwoNumbers(T& lhs, T& rhs);

int main() {
    std::cout << "Input Int\n";
    int lhsInt, rhsInt;
    std::cin >> lhsInt >> rhsInt;
    switchTwoNumbers(lhsInt, rhsInt);
    std::cout << lhsInt << " " << rhsInt << "\n";

    std::cout << "Input Float\n";
    float lhsFloat, rhsFloat;
    std::cin >> lhsFloat >> rhsFloat;
    switchTwoNumbers(lhsFloat, rhsFloat);
    std::cout << lhsFloat << " " << rhsFloat << "\n";

    std::cout << "Input Char\n";
    char lhsChar, rhsChar;
    std::cin >> lhsChar >> rhsChar;
    switchTwoNumbers(lhsChar, rhsChar);
    std::cout << lhsChar << " " << rhsChar << "\n";
}

template <typename T> 
void switchTwoNumbers(T& lhs, T& rhs) {
    T temp;
    temp = lhs;
    lhs = rhs;
    rhs = temp;
}
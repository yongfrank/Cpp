/*
 * @Author: Frank Chu
 * @Date: 2022-11-11 10:19:30
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-11 10:30:35
 * @FilePath: /Cpp/class/week10-cpp-template/template-motivation.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include "iostream"

template<class T>
void swap(T& a, T& b) {
    auto temp = std::move(b);
    b = std::move(a);
    a = std::move(temp);
}

int main() {
    float a = 20.4, b = 50;
    swap(a, b);
    std::cout << a << " " << b << "\n";

}
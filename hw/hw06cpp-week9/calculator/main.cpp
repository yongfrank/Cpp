/*
 * @Author: Frank Chu
 * @Date: 2022-11-09 11:52:17
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-09 14:24:56
 * @FilePath: /Cpp/hw/hw06cpp-week9/calculator/main.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include "./Calculator.cpp"

int main() {
    Calculator cal(2);
    cal++;
    ++cal;
    cal--;
    --cal;
    std::cout << "\n";
    cal + Calculator(5);
    cal - Calculator(4);
}
/*
 * @Author: Frank Chu
 * @Date: 2022-11-09 11:54:24
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-09 14:27:19
 * @FilePath: /Cpp/hw/hw06cpp-week9/calculator/Calculator.cpp
 * @Description: 
 * 1. (简答题) 6.6 设计一个计数器类Calculator。它只有一个用于计数的数据成员count。
 * 该计数器的有效计数范围是0~65535。
 * 对其重载如下单目运算符：前自增，后自增，前自减，后自减，和双目运算符+，-。
 * https://blog.csdn.net/u012653518/article/details/17083999
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>

class Calculator
{
private:
    unsigned int count;
public:
    Calculator(unsigned int count);
    ~Calculator();
    void operator++(int);
    void operator++();
    void operator--(int);
    void operator--();
    void operator+(Calculator b);
    void operator-(Calculator b);
};

Calculator::Calculator(unsigned int count)
{
    this->count = count;
    std::cout << "Initialized count: " << count << "\n";
}

Calculator::~Calculator()
{
}

void Calculator::operator++(int) {
    int b = count++;
    std::cout << "post-increment, b=count++, count = " << count << ", b = " << b << "\n";
}

void Calculator::operator++() {
    int b = ++count;
    std::cout << "pre-increment, b=++count, count = " << count << ", b = " << b << "\n";
}

void Calculator::operator--(int) {
    int b = count--;
    std::cout << "post-decrement, b=count--, count = " << count << ", b = " << b << "\n";
}

void Calculator::operator--() {
    int b = --count;
    std::cout << "pre-decrement, b=--count, count = " << count << ", b = " << b << "\n";
}

void Calculator::operator+(Calculator b) {
    this->count += b.count;
    std::cout << "count + b.count = " << count << "\n";
}

void Calculator::operator-(Calculator b) {
    this->count -= b.count;
    std::cout << "count - b.count = " << count << "\n";
}
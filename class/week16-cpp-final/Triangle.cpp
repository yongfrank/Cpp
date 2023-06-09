/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 10:52:04
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 11:03:21
 * @FilePath: /Cpp/class/week16-cpp-final/Triangle.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

Triangle::Triangle(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

double Triangle::area() {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void Triangle::printName() {
    std::cout << "Triangle" << std::endl;
}
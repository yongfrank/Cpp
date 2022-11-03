/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 18:48:22
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 19:03:39
 * @FilePath: /Cpp/hw/hw05cpp-week8/Triangle.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include "TDShape.cpp"

class Triangle: TDShape
{
private:
    /* data */
public:
    Triangle(double width, double height);
    ~Triangle();

    double area();
    void printName();
};

Triangle::Triangle(double width, double height)
{
    this->width = width;
    this->height = height;
}

Triangle::~Triangle()
{
}

double Triangle::area() {
    return width * height * 0.5;
}

void Triangle::printName() {
    std::cout << "Triangle";
}
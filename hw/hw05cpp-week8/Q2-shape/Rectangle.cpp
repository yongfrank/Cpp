/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 18:49:17
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 19:04:03
 * @FilePath: /Cpp/hw/hw05cpp-week8/Rectangle.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include "TDShape.cpp"
#include <iostream>

class Rectangle: TDShape
{
private:
    /* data */
public:
    Rectangle(double width, double height);
    ~Rectangle();

    double area();
    void printName();

};

Rectangle::Rectangle(double width, double height)
{   
    this->width = width;
    this->height = height;
}

Rectangle::~Rectangle()
{
}

double Rectangle::area() {
    return width * height;
}

void Rectangle::printName() {
    std::cout << "Rectangle";
}
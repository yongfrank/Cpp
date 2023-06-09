/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 10:52:48
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 11:11:19
 * @FilePath: /Cpp/class/week16-cpp-final/main.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include "Rectangle.hpp"
#include "Rectangle.cpp"
#include "Triangle.hpp"
#include "Triangle.cpp"

int main() {
    Triangle triangle(3, 4, 5);
    Rectangle rectangle(3, 4);
    TDshape *shape = &triangle;
    shape->printName();
    std::cout << shape->area() << std::endl;

    shape = &rectangle;
    shape->printName();
    std::cout << shape->area() << std::endl;
    
    return 0;
    // TDshape *p1 = new Rectangle(3, 4);
    // TDshape *p2 = new Triangle(3, 4, 5);
    // p1->printName();
    // std::cout << p1->area() << std::endl;
    // p2->printName();
    // std::cout << p2->area() << std::endl;
    // return 0;
}
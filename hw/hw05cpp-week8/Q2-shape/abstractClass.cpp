/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 18:18:12
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 19:04:05
 * @FilePath: /Cpp/hw/hw05cpp-week8/abstractClass.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <iostream>
#include "Triangle.cpp"
#include "Rectangle.cpp"

int main() {
    Triangle trig(3, 2);
    trig.printName();
    std::cout << " Area is " << trig.area() << std::endl;

    Rectangle rect(3, 2);
    rect.printName();
    std::cout << " Area is " << rect.area() << std:: endl;
}
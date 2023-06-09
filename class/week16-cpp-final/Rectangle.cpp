/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 10:50:35
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 11:05:01
 * @FilePath: /Cpp/class/week16-cpp-final/Rectangle.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

// Rectangle::Rectangle(double a, double b) {
//     this->a = a;
//     this->b = b;
// }

double Rectangle::area() {
    return a * b;
}

void Rectangle::printName() {
    std::cout << "Rectangle" << std::endl;
}
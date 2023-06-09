/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 10:39:28
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 10:55:45
 * @FilePath: /Cpp/class/week16-cpp-final/E.cpp
 * @Description: 
四、（20 分）用抽象类设计计算二维平面图形面积的程序。在基类 TDshape 中设计纯虚函数 area()和 printName()。area()用于计算几何图形面积，printName()用于打印输出几何图形的类名。在 TDshape 的派生类 Triangle 和 Rectangle 中实现 area()和 printName()。并设计合适的 main 函数进行虚函数测试。
答案需包括基类和派生类和main函数的完整代码。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include <cmath>

/**
 * @brief 用抽象类设计计算二维平面图形面积的程序。
 * @note 
 * 在基类 TDshape 中设计纯虚函数 area()和 printName()。
 * area()用于计算几何图形面积，printName()用于打印输出几何图形的类名。
 */
class TDshape {
public:
    virtual double area() = 0;
    virtual void printName() = 0;
};

/**
 * @brief 在 TDshape 的派生类 Triangle 和 Rectangle 中实现 area()和 printName()。
 */
class Triangle : public TDshape {
    double a, b, c;
public:
    Triangle(double a, double b, double c);

    virtual double area();
    virtual void printName();
};

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


/**
 * @brief 在 TDshape 的派生类 Triangle 和 Rectangle 中实现 area()和 printName()。
 */
class Rectangle : public TDshape {
    double a, b;
public:
    Rectangle(double a, double b);

    double area();
    void printName();
};

Rectangle::Rectangle(double a, double b) {
    this->a = a;
    this->b = b;
}

double Rectangle::area() {
    return a * b;
}

void Rectangle::printName() {
    std::cout << "Rectangle" << std::endl;
}

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
}
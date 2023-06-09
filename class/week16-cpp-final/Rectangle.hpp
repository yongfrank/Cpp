/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 10:50:11
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 11:06:49
 * @FilePath: /Cpp/class/week16-cpp-final/Rectangle.hpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */


#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "TDShape.hpp"
#include <iostream>

/**
 * @brief 在 TDshape 的派生类 Triangle 和 Rectangle 中实现 area()和 printName()。
 */
class Rectangle : public TDshape {
    double a, b;
public:
    Rectangle(double a, double b) {
        this->a = a;
        this->b = b;
    }
    
    virtual double area();
    virtual void printName();
};

#endif
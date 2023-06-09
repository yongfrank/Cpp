/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 10:49:49
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 11:09:48
 * @FilePath: /Cpp/class/week16-cpp-final/Triangle.hpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "TDShape.hpp"
#include <iostream>
#include <cmath>

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

#endif

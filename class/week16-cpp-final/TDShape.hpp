/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 10:49:16
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 10:58:03
 * @FilePath: /Cpp/class/week16-cpp-final/TDShape.hpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#ifndef TD_SHAPE_HPP
#define TD_SHAPE_HPP

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

#endif
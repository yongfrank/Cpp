/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 18:46:38
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 19:02:04
 * @FilePath: /Cpp/hw/hw05cpp-week8/TDShape.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#ifndef TDSHAPE_CPP
#define TDSHAPE_CPP
class TDShape {
    public:
        virtual double area() = 0;
        virtual void printName() = 0;
    protected:
        double width;
        double height;
};
#endif
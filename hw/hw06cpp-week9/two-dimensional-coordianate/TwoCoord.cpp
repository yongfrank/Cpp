/*
 * @Author: Frank Chu
 * @Date: 2022-11-09 16:10:53
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-16 21:31:57
 * @FilePath: /Cpp/hw/hw06cpp-week9/two-dimensional-coordianate/TwoCoord.cpp
 * @Description: https://blog.csdn.net/u012651730/article/details/16369469
 * 6.7建立一个二维坐标系的类TwoCoord。
 * 用x,y表示坐标值。实现两坐标点的加、减运算。
 * 计算两坐标点之间的距离，并重载<<,>>运算符
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <cmath>
#include <iostream>

class TwoCoord
{
private:
    double x, y;
public:
    TwoCoord(){ };
    TwoCoord(double x, double y);
    ~TwoCoord();
    void getCurrentPosition();
    void operator+(TwoCoord another);
    void operator-(TwoCoord another);
    void distance(TwoCoord another);

    friend void operator<<(std::ostream &os, TwoCoord &t) {
        os << "(" << t.x << ", " << t.y << ")" << "\n";
    }
    friend void operator>>(std::istream &is, TwoCoord &t) {
        std::cout << "Enter position" << "\n";
        is >> t.x;
        is >> t.y;
    }
};

TwoCoord::TwoCoord(double x, double y)
{
    this->x = x;
    this->y = y;
    // printf("Initialization Success! Position: ");
    // this->getCurrentPosition();
}

TwoCoord::~TwoCoord()
{
}

void TwoCoord::getCurrentPosition() {
    printf("(%.2f, %.2f)\n", this->x, this->y);
}

void TwoCoord::operator+(TwoCoord another) {
    this->x += another.x;
    this->y += another.y;
    this->getCurrentPosition();
}
void TwoCoord::operator-(TwoCoord another) {
    this->x -= another.x;
    this->y -= another.y;
    this->getCurrentPosition();
}

void TwoCoord::distance(TwoCoord another) {
    double distance = sqrt(pow(this->x + another.x, 2) + pow(this->y + another.y, 2));
    printf("Distance is %.2f\n", distance);
}

// void TwoCoord::operator<<(std::ostream &os, TwoCoord &t) {
//     os << "(" << t.x << "," << t.y << ")" << "\n";
// }

// void TwoCoord::operator>>(std::istream &is, TwoCoord &t) {

// }
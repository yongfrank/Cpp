/*
 * @Author: Frank Chu
 * @Date: 2022-09-16 12:14:27
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-16 12:23:51
 * @FilePath: /Cpp/class/week2/inheritance-example.cpp
 * @Description: 5.2 继承方式
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

class Point
{
private:
    /* data */
    float X, Y;
public:
    void InitP(float xx = 0, float yy = 0) {
        X = xx; 
        Y = yy;
    }

    void Move(float xOff, float yOff) {
        X += xOff;
        Y += yOff;
    }

    float GetX() {
        return X;
    }

    float GetY() {
        return Y;
    }
};

class Rectangle: public Point {
    public:
        void InitR(float x, float y, float w, float h) {
            InitP(x, y); 
            W = w;
            H = h;
        }

        float GetH() {
            return H;
        }

        float GetW() {
            return W;
        }

    private:
        float W, H;
};

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    Rectangle rect;
    rect.InitR(2, 3, 20, 10);
    rect.Move(3, 2);
    cout << rect.GetX() << ", " << rect.GetY() << ", " << rect.GetH() << ", " << rect.GetW() << endl;

    return 0;
}
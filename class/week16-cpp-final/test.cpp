/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 11:40:49
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 11:40:52
 * @FilePath: /Cpp/class/week16-cpp-final/test.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <iostream>
#include <ostream>
#include <istream>
#include <string>

using namespace std;

class Complex {
public:
    int x;
    int y;

    Complex& operator*(Complex& c);
};

Complex& Complex::operator*(Complex& c) {
    int t1 = 0;
    int t2 = 0;

    t1 = x * c.x - y * c.y;
    t2 = x * c.y + y * c.x;

    x = t1;
    y = t2;
    return *this;
}

istream& operator>>(istream& in, Complex& c) {
    string str;

    in >> str;

    int i = 0;
    int sum = 0;
    for (i = 0; str[i] != '+' && str[i] != '-'; i++) {
        sum *= 10;
        sum += str[i] - '0';
    }
    c.x = sum;

    sum = 0;

    i++;
    for (; i < str.size() - 1; i++) {
        sum *= 10;
        sum += str[i] - '0';
    }
    c.y = sum;
    return in;
}

ostream& operator<<(ostream& out, Complex& c) {
    cout << c.x;

    if (c.y > 0) {
        cout << "+" << c.y << "i" << endl;
    }
    else if (c.y < 0) {
        cout << c.y << "i" << endl;
    }
    return out;
}


int main() {
    Complex c1, c2;
    cin >> c1;
    cin >> c2;

    cout << c1 * c2;

    cout << c1;
    cout << c2;
    system("pause");
    return 0;
}
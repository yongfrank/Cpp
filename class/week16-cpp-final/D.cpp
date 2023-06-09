/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 10:29:30
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 11:45:35
 * @FilePath: /Cpp/class/week16-cpp-final/D.cpp
 * @Description: 
三（20 分）声明复数类 Complex，并重载其乘法*运算符，实现复数乘法运算；重载<<，>>运算符，以 2+3i 的格式实现输入输出。
答案应包括Complex类的声明和实现的完整代码。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>

/**
 * @brief 声明复数类 Complex
 * @note 
 * 并重载其乘法*运算符，实现复数乘法运算；
 * 重载<<，>>运算符，以 2+3i 的格式实现输入输出。
 * 答案应包括Complex类的声明和实现的完整代码。
 */
class Complex {
    double real;
    double imag;
public:
    Complex(double real, double imag);
    Complex();
    Complex operator*(Complex &c);

    // 重载<<，>>运算符，以 2+3i 的格式实现输入输出。
    friend std::ostream& operator<<(std::ostream &os, Complex &c);

    // 重载<<，>>运算符，以 2+3i 的格式实现输入输出。
    friend std::istream& operator>>(std::istream &is, Complex &c);
};

Complex::Complex(double real, double imag) {
    this->real = real;
    this->imag = imag;
}

Complex::Complex() {}

Complex Complex::operator*(Complex &c) {
    return Complex(this->real * c.real - this->imag * c.imag, this->real * c.imag + this->imag * c.real);
}

std::ostream& operator<<(std::ostream &os, Complex &c) {
    os << c.real << "+" << c.imag << "i";
    return os;
}

std::istream& operator>>(std::istream &is, Complex &c) {
    std::string str;
    is >> str;
    unsigned long i = 0;
    int sum = 0;
    for (i = 0; str[i] != '+' && str[i] != '-'; i++) {
        sum *= 10;
        sum += str[i] - '0';
    }
    c.real = sum;

    sum = 0;

    i++;
    for (; i < str.size() - 1; i++) {
        sum *= 10;
        sum += str[i] - '0';
    }
    c.imag = sum;
    return is;
}

int main() {
    Complex c1, c2;
    std::cin >> c1 >> c2;
    Complex c3 = c1 * c2;
    std::cout << c3 << std::endl;
    return 0;
}

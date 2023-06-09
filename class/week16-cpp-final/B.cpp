/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 10:01:43
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 11:57:25
 * @FilePath: /Cpp/class/week16-cpp-final/B.cpp
 * @Description: 
2. (简答题, 25分)
一、 （25分）设计一个时钟“Clock”类，其中必须包含Hour，Minute，Second三个数据成员， 成员必须符合日常时钟小时（模12计数）、分钟（模60计数）、秒（模60计数）的合理要求。并且成员函数必须重载前、后缀“++”,“--”运算符，并设计有源函数重载<<与>>运算符。以如下形式输入输出当前时间：
hh:mm:ss
其余成员函数的设计请自行按完备性原则考虑。
答案需包括完整的类声明，类方法实现。但无须提供main函数。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>

/**
 * @brief 时钟类
 * @note 设计一个时钟“Clock”类，其中必须包含Hour，Minute，Second三个数据成员，
 * 成员必须符合日常时钟小时（模12计数）、分钟（模60计数）、秒（模60计数）的合理要求。
 * 并且成员函数必须重载前、后缀“++”,“--”运算符，并设计有源函数重载 <<与>>运算符。
 * 以如下形式输入输出当前时间：hh:mm:ss
 */
class Clock {
public:
    Clock(int hour, int minute, int second) : hour(hour), minute(minute), second(second) {}
    Clock() {}
    Clock& operator++();
    Clock& operator--();
    Clock operator++(int);
    Clock operator--(int);
    friend std::ostream& operator<<(std::ostream& os, const Clock& clock);
    friend std::istream& operator>>(std::istream& is, Clock& clock);
private:
    int hour;
    int minute;
    int second;
};

Clock& Clock::operator++() {
    second++;
    if (second == 60) {
        second = 0;
        minute++;
        if (minute == 60) {
            minute = 0;
            hour++;
            if (hour == 12) {
                hour = 0;
            }
        }
    }
    return *this;
}

Clock& Clock::operator--() {
    second--;
    if (second == -1) {
        second = 59;
        minute--;
        if (minute == -1) {
            minute = 59;
            hour--;
            if (hour == -1) {
                hour = 11;
            }
        }
    }
    return *this;
}

Clock Clock::operator++(int) {
    Clock temp = *this;
    ++(*this);
    return temp;
}

Clock Clock::operator--(int) {
    Clock temp = *this;
    --(*this);
    return temp;
}

// 时钟输出格式：hh:mm:ss
std::ostream& operator<<(std::ostream& os, const Clock& clock) {
    if (clock.hour < 10) {
        os << "0";
    }
    os << clock.hour << ":";
    if (clock.minute < 10) {
        os << "0";
    }
    os << clock.minute << ":";
    if (clock.second < 10) {
        os << "0";
    }
    os << clock.second;
    return os;
}

// 时钟输入格式：hh:mm:ss
std::istream& operator>>(std::istream& is, Clock& clock) {
    char c;
    is >> clock.hour >> c >> clock.minute >> c >> clock.second;
    return is;
}

int main() {
    Clock clock1;

    std::cout << "--------Seconds -> Minutes--------" << std::endl;
    std::cin >> clock1;
    std::cout << clock1 << std::endl;
    clock1++;
    std::cout << clock1 << std::endl;
    clock1--;
    std::cout << clock1 << std::endl;

    std::cout << "--------Minutes -> Hours--------" << std::endl;
    Clock clock2;
    std::cin >> clock2;
    std::cout << clock2 << std::endl;
    clock2++;
    std::cout << clock2 << std::endl;
    clock2--;
    std::cout << clock2 << std::endl;
    
    std::cout << "--------Hours -> Days--------" << std::endl;
    Clock clock3;
    std::cin >> clock3;
    std::cout << clock3 << std::endl;
    ++clock3;
    std::cout << clock3 << std::endl;
    --clock3;
    std::cout << clock3 << std::endl;

    return 0;
}
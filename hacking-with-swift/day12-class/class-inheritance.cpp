/*
 * @Author: Frank Chu
 * @Date: 2022-09-16 10:17:51
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-16 11:14:29
 * @FilePath: /Cpp/Hacking With Swift Rewrite/day12-class/class-inheritance.cpp
 * @Description: https://www.hackingwithswift.com/quick-start/beginners/how-to-make-one-class-inherit-from-another
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */


#include <iostream>

using namespace std;

class Employee {
    private:
    int hours;

    public:
    Employee(int workTime) {
        hours = workTime;
    }
};

class Developer: private Employee {
    void work() {
        cout << "I'm writing code for" <<  << "hours" << endl;
    }
};

int main() {

    std::cout << "hello world!" << std::endl;
    return 0;
}
/*
 * @Author: Frank Chu
 * @Date: 2022-09-16 10:17:51
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-12 16:05:55
 * @FilePath: /Cpp/hacking-with-swift/day12-class/class-inheritance.cpp
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

class Developer: public Employee {
    
    public:
    Developer(int worktime) : Employee(worktime) {

    }
    void work() {
        cout << "I'm writing code for " << "3" << " hours" << endl;
    }
};

int main() {

    std::cout << "hello world!" << std::endl;
    Developer frank(3);
    frank.work();
    return 0;
}
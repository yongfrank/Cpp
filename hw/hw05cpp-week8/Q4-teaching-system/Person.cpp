/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 21:49:03
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 22:04:37
 * @FilePath: /Cpp/hw/hw05cpp-week8/Q4-teaching-system/Person.cpp
 * @Description: https://blog.csdn.net/u012651730/article/details/16013013
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#ifndef PERSON_CPP
#define PERSON_CPP

#include <iostream>
#include <iomanip>

class Person
{
private:
    /* data */
    char name[20];
    int age;
    char sex;
public:
    Person(/* args */);
    ~Person();
    void inputData();
    void display();
};

Person::Person(/* args */) {}
Person::~Person() {}

void Person::inputData() {
    std::cin >> name >> age >> sex;
}

void Person::display() {
    std::cout << std::setw(8) << name << std::setw(8) << age << std::setw(8) << sex;
}

#endif
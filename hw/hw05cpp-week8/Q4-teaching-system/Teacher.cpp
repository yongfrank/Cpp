/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 21:53:04
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 22:01:49
 * @FilePath: /Cpp/hw/hw05cpp-week8/Q4-teaching-system/Teacher.cpp
 * @Description: https://blog.csdn.net/u012651730/article/details/16013013
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include <iomanip>
#include "Person.cpp"
class Teacher: public Person
{
private:
    /* data */
    int id;
    char title[20];
    char department[20];
public:
    Teacher(/* args */);
    ~Teacher();
    void inputData();
    void display();
};

Teacher::Teacher(/* args */) {}
Teacher::~Teacher() {}

void Teacher::inputData() {
    std::cout << "Enter name, age, sex, ID, title and department" << "\n";
    Person::inputData();
    std::cin >> id >> title >> department;
}

void Teacher::display() {
    std::cout << std::setiosflags(std::ios::left);
    std::cout 
    << std::setw(8) << "Name" << std::setw(8) << "Age" << std::setw(8) << "Sex" 
    << std::setw(8) << "ID" << std::setw(8) << "Title" << std::setw(8) << "Department" << "\n";

    Person::display();
    std::cout << std::setw(8) << id << std::setw(8) << title << std::setw(8) << department << "\n";
}
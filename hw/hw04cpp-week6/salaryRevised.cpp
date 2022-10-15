/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 12:10:28
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 12:41:27
 * @FilePath: /Cpp/hw/hw04cpp-week6/salaryRevised.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <iostream>
#include <string.h>
#include "salary.cpp"

class Worker
{
private:
    std::string name, Dept;
    Salary salary;
    int age;

    static int workerCount;
public:

    // constructor
    Worker(std::string name, int age, std::string dept, Salary salary);
    
    // set methods
    void setName(std::string f) { this->name = f; }
    void setAge(int f) { this->age = f; }
    void setDept(std::string f) { this->Dept = f; }
    void setSalary(Salary f) { this->salary = f; }

    // get methods
    std::string getName() { return this->name; }
    int getAge() { return this->age; }
    std::string getDept() { return this->Dept; }
    Salary getSalary() { return this->salary; }

    // print the number of worker.
    static void countWorker() {
        if(workerCount <= 1) {
            std::cout << "There is " + std::to_string(workerCount) + " person." << std::endl;
        } else
        {
            std::cout << "There are " + std::to_string(workerCount) + " person." << std::endl;
        }
    }

    // destructor
    ~Worker();
};

Worker::Worker(std::string name, int age, std::string dept, Salary salary)
{
    this->workerCount += 1;

    this->name = name;
    this->age = age;
    this->Dept = dept;
    this->salary = salary;
}

Worker::~Worker()
{
}

int Worker::workerCount = 0;

int main() {
    Worker::countWorker();
    
    // Create one person.
    Worker frank("Frank Chu", 20, "EE", Salary(10000, 2000, 500, 200, 200));
    Worker::countWorker();
    std::cout << frank.getName() << std::endl;

    // Create another person.
    Worker amy("Amy Jin", 25, "EE", Salary(10000, 2000, 500, 200, 200));
    Worker::countWorker();
    std::cout << amy.getName() << std::endl;
    std::cout << amy.getDept() << std::endl;
}
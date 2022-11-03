/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 22:02:24
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 22:10:21
 * @FilePath: /Cpp/hw/hw05cpp-week8/Q4-teaching-system/main.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "Teacher.cpp"
#include "Student.cpp"

int main() {
    Teacher teacher;
    teacher.inputData();
    teacher.display();   

    Student student;
    student.inputData();
    student.display();
}
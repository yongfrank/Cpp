/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 15:52:59
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 16:02:52
 * @FilePath: /Cpp/class/week16-c/problemI.cpp
 * @Description: 
问题 I: 查询成绩（要求用链表完成）
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

知道如何创建链表了。
本题继续要求用链表完成。输入同学成成绩后，现在再输入1个同学的姓名，输出该同学的成绩。

输入

输入一些学生的信息，每个学生信息一行，分别为学号、姓名和成绩，中间用空格隔开，其中学号和成绩均为整数，姓名为不超过15个仅包含大小写字母的字符。
如果输入的一行是非正整数时，表示结束
在成绩结束后，输入一行，为一个同学的姓名

输出

输出一个整数，表示该同学的成绩

样例输入 Copy

1001 xiangwang 90
1002 xiaoli 85
1003 xiaohong 97
1004 xiaoma 76
-1
xiaoli
样例输出 Copy

85
提示

如果班上有重名，则只需输出按输入顺序的第一个该名字同学的成绩
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include <cstring>

struct Student {
    int id;
    std::string name;
    int score;
    Student *next;
};

Student *createStudent(int id, std::string name, int score) {
    Student *student = new Student;
    student->id = id;
    student->name = name;
    student->score = score;
    student->next = NULL;
    return student;
}

void addStudent(Student *tail, Student *student) {
    tail->next = student;
    tail = student;
}

int getScore(Student *head, std::string name) {
    while (head != NULL) {
        if (head->name == name) {
            return head->score;
        }
        head = head->next;
    }
    return -1;
}

int main() {
    int id, score;
    std::string name;
    std::cin >> id >> name >> score;
    Student *head = createStudent(id, name, score);
    Student *tail = head;
    while (std::cin >> id && id > 0) {
        std::cin >> name >> score;
        Student *student = createStudent(id, name, score);
        addStudent(tail, student);
        tail = student;
    }
    std::cin >> name;
    std::cout << getScore(head, name) << std::endl;
    return 0;
}
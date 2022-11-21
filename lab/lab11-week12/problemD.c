/*
 * @Author: Frank Chu
 * @Date: 2022-11-21 10:42:36
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-21 10:56:46
 * @FilePath: /Cpp/lab/lab11-week12/problemD.c
 * @Description: 问题 D: 结构体：按成绩排序
 * 定义一个学生结构体，含学号（一维字符数组）、姓名、成绩（整型）。从键盘输入n(n<20)，再输入n个学生的信息，按学生成绩从小到大顺序输出学生信息。
 * 输入一个n,接着输入n个学生的信息。
 * 按成绩从小到大顺序输出学生信息。
 * @test
```
4
1001
Li
76
1002
Zhang
92
1003
Liu
85
1004
Wang
70
```
```
1004 Wang 70
1001 Li 76
1003 Liu 85
1002 Zhang 92
```
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char studentID[100];
    char name[100];
    int score;
};

void inputScore(struct Student* student) {
    scanf("%s%s%d", student->studentID, student->name, &student->score);
}

int compareOfStudent(const void* lhs, const void* rhs) {
    struct Student* leftHandSideStudent = (struct Student*)lhs;
    struct Student* rightHandSideStudent = (struct Student*)rhs;
    return leftHandSideStudent->score - rightHandSideStudent->score;
}

int main() {
    int studentAmount;
    scanf("%d", &studentAmount);
    struct Student student[studentAmount];

    for(int i = 0; i < studentAmount; i++) {
        inputScore(&student[i]);
    }
    
    qsort(student, sizeof(student) / sizeof(student[0]), sizeof(student[0]), compareOfStudent);
    
    for(int i = 0; i < studentAmount; i++) {
        printf("%s %s %d\n", student[i].studentID, student[i].name, student[i].score);
    }
}
/*
 * @Author: Frank Chu
 * @Date: 2022-11-21 08:58:23
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-21 13:58:24
 * @FilePath: /Cpp/lab/lab11-week12/problemC.c
 * @Description: 定义一个学生结构体，含学号（字符型）、姓名、成绩(整型)。从键盘输入数字n(n<20)，并输入n个学生的信息，输出最高分和最低分同学的信息。
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
1002 Zhang 92
1004 Wang 70
```
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

typedef struct Student {
    char studentID[100];
    char name[100];
    int score;
} Student;

/**
 * @brief 
 * @param  student          inputStudent
 * @param  maxStudentInfo   Max Score Student Info
 * @param  minStudentInfo   Min Score Student Info
 * @note
 * 结构体：求最高分和最低分 https://juejin.cn/post/7080809284451172366
 * @test
```c
scanf("%s%s%d", student.studentID, student.name, &student.score);
if(student.score > maxStudentInfo.score) {
    printf("bigger\n");
    maxStudentInfo = student;
    // maxStudentInfo->score = student->score;
}
```
 */
void inputScore(Student* student, Student* maxStudentInfo, Student* minStudentInfo) {
    scanf("%s%s%d", student->studentID, student->name, &student->score);
    if(student->score > maxStudentInfo->score) {
        *maxStudentInfo = *student;
    }
    if(student->score < minStudentInfo->score) {
        *minStudentInfo = *student;
    }
}

int main() {
    int studentAmount;
    Student student[100];
    Student maxStudentInfo = {"", "", -1}, minStudentInfo = {"", "", 1000};

    scanf("%d", &studentAmount);
    for(int i = 0; i < studentAmount; i++) {
        inputScore(&student[i], &maxStudentInfo, &minStudentInfo);
    }
    printf("%s %s %d\n", maxStudentInfo.studentID, maxStudentInfo.name, maxStudentInfo.score);
    printf("%s %s %d\n", minStudentInfo.studentID, minStudentInfo.name, minStudentInfo.score);
}

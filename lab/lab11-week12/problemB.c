/*
 * @Author: Frank Chu
 * @Date: 2022-11-21 08:40:21
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-21 08:57:25
 * @FilePath: /Cpp/lab/lab11-week12/problemB.c
 * @Description: 问题 B: 结构体：计算学生平均分
 * 定义一个学生结构体，含学号(字符型)、姓名、2门课程的成绩。从键盘输入3个学生的信息，计算并输出每个学生的平均成绩。
 * 按学号、姓名、成绩1、成绩2的顺序输入学生信息
 * 输出每个学生的平均分
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

typedef struct StudentScore
{
    char StudentID;
    char StudentName;
    double firstClassScore;
    double secondClassScore;
    double AverageScore;
} StudentScore;

/**
 * @brief 
 * @param  studentScore     My Param doc
 * @see 结构体：计算学生平均分 https://juejin.cn/post/7080809278977605640
 */
void inputStudentScore(StudentScore* studentScore) {
    scanf("%s %s %lf %lf", &studentScore->StudentID, &studentScore->StudentName, &studentScore->firstClassScore, &studentScore->secondClassScore);
    studentScore->AverageScore = (studentScore->firstClassScore + studentScore->secondClassScore) / 2;
}

int main() {
    int studentAmount = 3;
    StudentScore studentScore;
    for(int i = 0; i < studentAmount; i++) {
        inputStudentScore(&studentScore);
        printf("ave[%d]=%.1lf\n", i, studentScore.AverageScore);
    }
}
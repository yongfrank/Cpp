/*
 * @Author: Frank Chu
 * @Date: 2023-02-19 11:55:45
 * @LastEditors: Frank Chu
 * @LastEditTime: 2023-02-19 12:02:40
 * @FilePath: /Cpp/final/2021-2022-1 年C程序设计（计算机类）期末考试-重现/problemB.cpp
 * @Description: 
问题 B: 分数评级
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

题目描述
程序读入一个整数S，作为一个学生的期末成绩，请你输出他的成绩评级。
评级规则：
A级：90 <= S <= 100，B级：80 <= S < 90，C级：70 <= S < 80，D级：60 <= S < 70，E级：0 <= S < 60。
输入
输入一个数S，表示该学生的分数
输出
输出一个大写字母，表示学生成绩的评级
样例输入 Copy
72
样例输出 Copy
C
 * 
 * Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
 */

#include <iostream>

char getGrade(int score) {

    if (score >= 90 && score <= 100) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else if (score < 60 && score >= 0) {
        return 'E';
    }

    return '?';
}

int main() {
    int score;
    scanf("%d", &score);
    char grade = getGrade(score);
    printf("%c", grade);
}
/*
 * @Author: Frank Chu
 * @Date: 2023-02-20 12:47:52
 * @LastEditors: Frank Chu
 * @LastEditTime: 2023-02-20 13:04:06
 * @FilePath: /Cpp/final/2020-2021-2 学年第2学期C语言期末考试-重现/problemG.cpp
 * @Description: 
问题 G: 选举
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

题目描述
选举
有一次选举活动，要从候选人中选出得票最多的若干人选。定义一个结构体，描述候选人的信息，可参考如下：
struct candidate {
char name[20]; //姓名
int poll; //所得票数
};
从键盘输入两个整数n (1 <= n < = 100)和m(1<=m<=1000)，表示有n位候选人，要从中选出得票最多的一位候选人，m表示收集到的有效选票数（每张选票上有一位候选人的名字）。再输入n名候选人的名单，每个人占一行。最后输入m行数据，分别代表有效选票上的候选人姓名。现在要统计并输出得票最多的一位候选人的姓名。如果有并列的人选，要把所有并列的人选输出，每行上输入一位得票最多的人选。

输入
第一行输入2个整数n和m
然后是n行，每行一个候选人姓
然后是m行，每行一个投票

输出
按要求输出得票最多的人选

样例输入 Copy
3 10

Zhao
Qian
Sun

Sun
Qian
Sun
Zhao
Sun
Sun
Zhao
Zhao
Qian
Sun
样例输出 Copy
Sun
提示
姓名仅由字母组成，且长度不超过10
 * 
 * Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
 */

#include <iostream>
#include <algorithm>

struct candidate {
std::string name; //姓名
int poll = 0; //所得票数
};

bool customSort(const candidate& left, const candidate& right) {
    return left.poll > right.poll;
}

int main() {
    int amount, polls;
    std::cin >> amount >> polls;
    std::string test;
    std::getline(std::cin, test);
    candidate student[amount];

    std::string name;
    for(int i = 0; i < amount; i++) {
        std::cin >> name;
        student[i].name = name;
        student[i].poll = 0;
    }
    std::getline(std::cin, test);
    
    for(int i = 0; i < polls; i++) {
        std::cin >> name;
        for(int stu = 0; stu < amount; stu++) {
            if(student[stu].name == name) { student[stu].poll++; }
        }
    }

    std::sort(student, student + amount, customSort);
    std::cout << student[0].name;
    // for(int i = 0; i < amount; i++) {
    //     std::cout << student[i].name << student[i].poll;
    // }
}


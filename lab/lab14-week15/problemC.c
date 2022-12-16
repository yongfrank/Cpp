/*
 * @Author: Frank Chu
 * @Date: 2022-12-10 10:45:07
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-10 11:35:34
 * @FilePath: /Cpp/lab/lab14-week15/problemC.c
 * @Description: 
问题 C: 用链表实现登记成绩
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

叶老师想要用链表登记成绩。对于每张试卷有两个信息：学号和成绩。

对于登记成绩，要求学号小的成绩登记在学号大的成绩之前。

叶老师有两种操作：

1 a b：向链表中加入学号为a成绩为b的同学的成绩，题目保证不同的卷子不会有相同的学号。

2 k  : 查询当前链表中第k个同学的成绩是多少，题目保证k小于等于当前链表的长度。

请用链表做这道题！

输入

第一行输入一个整数Q，表示操作的个数。

接下来输入Q行，每一行是（1 a b）或者（2 k）格式，分别表示第一种和第二种操作。

1 <= k, Q <= 1000

1 <= a <= 1000000000

1 <= b <= 100 

输出

对于每一个第二个操作，输出一个整数表示第k个同学的成绩。

样例输入 Copy

3
1 20163266 100
1 20163265 99
2 1

4
1 20163266 100
1 20163265 99
1 20163261 90
2 1
样例输出 Copy

99

90
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>

struct StudentNode {
    int studentId;
    int score;
    struct StudentNode *next;
};

void insertStudent(struct StudentNode* head, int studentId, int score) {
    struct StudentNode* newStudent = (struct StudentNode*)malloc(sizeof(struct StudentNode));
    while(head->next != NULL && head->next->studentId < studentId) {
        head = head->next;
    }
    newStudent->studentId = studentId;
    newStudent->score = score;
    newStudent->next = head->next;
    head->next = newStudent;
}

void queryStudent(struct StudentNode* head, int k) {
    struct StudentNode* currentStudent = head;
    while(k--) {
        currentStudent = currentStudent->next;
    }
    printf("%d\n", currentStudent->score);
}

int main() {
    int operationTimes;
    scanf("%d", &operationTimes);
    struct StudentNode* head = (struct StudentNode*)malloc(sizeof(struct StudentNode));
    struct StudentNode* movingPosition = (struct StudentNode*)malloc(sizeof(struct StudentNode));
    while(operationTimes--) {
        movingPosition = head;
        int operationType;
        scanf("%d", &operationType);
        if(operationType == 1) {
            int studentId, score;
            scanf("%d %d", &studentId, &score);
            insertStudent(movingPosition, studentId, score);
        } else {
            int k;
            scanf("%d", &k);
            queryStudent(movingPosition, k);
        }
    }
    return 0;
}
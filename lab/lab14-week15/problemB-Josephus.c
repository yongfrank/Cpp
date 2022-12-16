/*
 * @Author: Frank Chu
 * @Date: 2022-12-10 10:12:24
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-10 10:43:17
 * @FilePath: /Cpp/lab/lab14-week15/problemB-Joseph.c
 * @Description: 
问题 B: 用链表实现约瑟夫环
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

你听说过约瑟夫问题吗？问题大致如下：首先n个人围成一个圈，标记为1到n号。接着，从1号开始报数（从1开始），然后2号报数，然后3号。。。当有人报到到m时，这个人就要踢出比赛，然后从被踢出的人的下一个人开始，重新报数（从1开始）。这样经过n-1次后，就只剩下了一个人，问最后剩下的那个人是几号？

输入

第1行为T，表示有T组数据；

第2行到第T+1开始,每行输入n和m，n表示有几个人，m为上述的每报数m次就要踢出一个人

1=<n<=100, 1=<m<=100

输出

一个数，表示最后剩下了几号     

样例输入 Copy

2
5 3
6 4
样例输出 Copy

4
5
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>

struct people {
    int number;
    struct people* next;
};

int findTheWinner(int numberOfPeople, int mToKick) {
    struct people* head = (struct people*)malloc(sizeof(struct people));
    struct people* movingPointer = (struct people*)malloc(sizeof(struct people));
    for (int i = 1; i <= numberOfPeople; i++) {
        struct people* newPeople = (struct people*)malloc(sizeof(struct people));
        newPeople->number = i;
        if (i == 1) {
            head = newPeople;
            movingPointer = newPeople;
        } else {
            movingPointer->next = newPeople;
            movingPointer = newPeople;
        }
    }
    movingPointer->next = head;
    // movingPointer = head;
    while (numberOfPeople > 1) {
        for (int i = 1; i < mToKick; i++) {
            movingPointer = movingPointer->next;
        }
        // printf("deleting %d\n", movingPointer->next->number);
        movingPointer->next = movingPointer->next->next;
        numberOfPeople--;
    }
    return movingPointer->number;
}

int main() {
    int testCases;
    scanf("%d", &testCases);
    while(testCases--) {
        int numberOfPeople, mToKick;
        scanf("%d %d", &numberOfPeople, &mToKick);
        printf("%d\n", findTheWinner(numberOfPeople, mToKick));
    }
}
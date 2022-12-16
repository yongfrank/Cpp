/*
 * @Author: Frank Chu
 * @Date: 2022-12-16 15:20:44
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-16 16:15:33
 * @FilePath: /Cpp/class/week15-c/problemG.c
 * @Description: 
问题 G: 线性链表的删除
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

输入一个正整数序列，遇负数时停止，建立一个线性链表存储读入的数据，然后从键盘读入一数据x，在该链表中删除比x大的数据后输出。

输入

单组测试数据
第一行输入很多个整数，最后一个是负数，其他都是正数
第二行输入一个整数x

输出

按照输入的顺序，输出删除后链表的值

样例输入 Copy

1 2 3 4 5 -1
3
样例输出 Copy

1 2 3
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    int inputNumber;
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->next = NULL;
    struct Node* tail = NULL;
    while(scanf("%d", &inputNumber) && inputNumber > 0) {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = inputNumber;
        newNode->next = NULL;
        if(head->next == NULL) {
            head->next = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }
    int removeLargeThanIt;
    scanf("%d", &removeLargeThanIt);
    struct Node* currentNode = head;
    while(currentNode->next != NULL) {
        if(currentNode->next->data > removeLargeThanIt) {
            currentNode->next = currentNode->next->next;
        } else {
            currentNode = currentNode->next;
        }
    }
    currentNode = head;
    while(currentNode->next != NULL) {
        printf("%d ", currentNode->next->data);
        currentNode = currentNode->next;
    }
}

// int main() {
//     int inputNumber;
//     int array[100000];
//     int count = 0;
//     while(scanf("%d", &inputNumber) && inputNumber > 0) {
//         array[count] = inputNumber;
//         count++;
//     }
//     int removeNumberLargeThanIt;
//     scanf("%d", &removeNumberLargeThanIt);
//     for(int i = 0; i < count; i++) {
//         if(removeNumberLargeThanIt >= array[i]) {
//             printf("%d ", array[i]);
//         }
//     }
// }
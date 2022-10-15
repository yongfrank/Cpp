/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 13:05:22
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 14:40:56
 * @FilePath: /Cpp/hw/hw04cpp-week6/linkedlist.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "./linkedlist.h"
#include <iostream>

/// @brief insert specific data before Node at index
/// @param index insert before the index
/// @param data insert the data
void List::insertBeforeIndex(int index, int data) {
    Node* p = new Node();
    p->data = data;
    
    Node* nowPointer = this->head;

    if(nowPointer == NULL) {
        this->head = p;
        return;
    }

    for(int i = 0; i < index; i++) {
        if(nowPointer->next == NULL) {
            nowPointer->next = p;
            p->prvs = nowPointer;
            return;
        }
        nowPointer = nowPointer->next;
    }

    p->prvs = nowPointer->prvs;
    if(nowPointer->prvs != NULL) {
        nowPointer->prvs->next = p;
    } else {
        this->head = p;
    }
    
    p->next = nowPointer;
    nowPointer->prvs = p;
}

/// @brief delete specific Node at index
/// @param index 
void List::deleteNodeAt(int index) {
    Node* nowPointer = this->head;
    for(int i = 0; i < index; i++) {
        nowPointer = nowPointer->next;
    }
    if(nowPointer->next == NULL) {
        nowPointer->prvs->next = nowPointer->next;
        return;
    }
    if(nowPointer->prvs == NULL) {
        this->head = nowPointer->next;
        return;
    }
    nowPointer->prvs->next = nowPointer->next;
    nowPointer->next->prvs = nowPointer->prvs;
}

/// @brief print the whole list with format like 1->2->3
void List::print() {
    Node* nowPointer = head;
    while (nowPointer != NULL)
    {
        std::cout << nowPointer->data;
        if(nowPointer->next != NULL) {
            std::cout << "->";
        }
        nowPointer = nowPointer->next;
    }
    std::cout << std::endl;
}
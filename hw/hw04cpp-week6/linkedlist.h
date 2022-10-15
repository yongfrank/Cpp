/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 12:50:49
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 14:18:14
 * @FilePath: /Cpp/hw/hw04cpp-week6/linkedlist.h
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class List
{
private:
    class Node {
    public:
        int data;
        Node* next;
        Node* prvs;

        // Constructor and destructor
        Node();
        ~Node();
    };
    Node* head;
    void release();
    
public:
    void insertBeforeIndex(int index = 0, int data = 0);
    void deleteNodeAt(int index);
    void print();

    // Constructor and destructor
    List();
    ~List();
};

List::Node::Node() {
    this->next = NULL;
    this->prvs = NULL;
}

List::List() {
    this->head = NULL;
}

List::~List() {
}



#endif //LINKEDLIST_H
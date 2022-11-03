/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 19:07:26
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 19:33:15
 * @FilePath: /Cpp/hw/hw05cpp-week8/stringlink/stringlink.h
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#ifndef STRINGLINK_H
#define STRINGLINK_H

#include <string>
using namespace std;

class Link
{
protected:
    class Node{//抽象类
    public:
        Node* next;
        Node* prvs;
        Node();//默认构造函数，实现初始化
        virtual ~Node(){}
        virtual int compare(Node*)=0;//纯虚函数
        virtual void swap(Node*)=0;
        virtual void print()=0;
    };
    Node* head;
    void release();//释放链表空间
    void push(Node*);
    Node* pop();
public:
    void print();//输出链表
    void sort();//排序链表
    void clear();//Delegate of release
    Link();
    virtual ~Link();
};

class SLink : public Link
{
    class SNode:public Link::Node
    {
    public:
        string data;
        SNode(string);
        int compare(Node*);//虚函数
        void swap(Node*);
        void print();
    };
public:
    void push(string);
    string pop();
    virtual ~SLink(){}
};

class ILink : public Link
{
   class INode:public Link::Node
   {
   public:
       int data;
       INode(int);
       int compare(Node*);//虚函数
       void swap(Node*);
       void print();
   };
public:
   void push(int);
   int pop();
   virtual ~ILink(){};
};

#endif // STRINGLINK_H
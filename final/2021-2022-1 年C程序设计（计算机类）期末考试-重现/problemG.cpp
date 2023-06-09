/*
 * @Author: Frank Chu
 * @Date: 2023-02-19 22:09:42
 * @LastEditors: Frank Chu
 * @LastEditTime: 2023-02-19 23:50:57
 * @FilePath: /Cpp/final/2021-2022-1 年C程序设计（计算机类）期末考试-重现/problemG.cpp
 * @Description: 
问题 G: 打新冠疫苗
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 512 MB

题目描述
信息学院的很多学生在学生活动中心排成了长长的队伍，他们准备打新冠疫苗加强针。如图所示，其中A为入口，B为出口，S为打疫苗处。队伍行走都是单向，只能从A到S,再从S到B,此外严格的学生工作者小虎老师盯着，没有人敢插队。因为打疫苗处有几个侯打宝位，所以打完疫苗从B端出来的次序，可能与从A端进入的次序不同。不过侯打宝座容量有限，同时等等打疫苗的人不得超过m人（含正在打疫苗的人）。侯打宝座你可以理解为一个栈，即来的人尽可能往里坐，不能插队，医生给最外面位置上的人打疫苗，打完的人马上走人。
设从A进来的人编号为1，2，...,n,在出口处等待的楼辅导员希望知道，这些人能否以{a1,a2,...,an}的次序，打完疫苗后从B端出去。楼辅导员非常着急，她非常希望这些同学能按顺序出去，以便尽快完成学院布置的下一个任务。你能协助小虎老师和医生，如何打疫苗能达到辅导员的要求吗？如果可行，该怎么打？

see g.png

输入
共两行
第一行为两个整数n，m。
第二行为以空格分隔的n个整数，保证为{1, 2, ..., n}的一个排列，表示待判断可行性的出去的序列{a1，a2，...，an}。
输出
若出去序列可行，则输出操作序列，其中jin表示排队的人从A进入S，da表示医生给最外面的同学打针，该同学打完从S进入B，每个操作占一行。
若不可行，则输出mei ban fa。
样例输入 Copy
【样例输入1】
5 2
1 2 3 5 4
【样例输入2】
5 5
3 1 2 4 5
样例输出 Copy
【样例输出1】
jin
da
jin
da
jin
da
jin
jin
da
da
【样例输出2】
mei ban fa
提示
1<=n<=1000000
0<=m<=1000000

提示：本题可以用双向链表实现。
双向链表  双向链表也叫双链表，是链表的一种，它的每个数据结点中都有两个指针，分别指向直接后继和直接前驱。
  用链表解题的关键其实就在设立一个*P指向A栈顶元素，每一次比对p和p的上一个元素，若能够匹配则删除该元素，并将指针指向该元素的下一个元素，也就是说如果匹配p，则p = p->next,如果匹配p的上一个元素则不动。

  这里的p和p的上一个元素其实就是模拟A栈顶元素和S栈顶元素，这里的时间度为O(n)。
 * 
 * Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
 */

#include <iostream>
struct Node {
    int value;
    Node* previous = nullptr;
    Node* next = nullptr;
};

struct Stack {
    Node* top = nullptr;
    int size = 0;

    int pop_last() {
        if (this->top == nullptr) {
            return -1;
        }
        int value = this->top->value;
        
        if (this->top->previous == nullptr) {
            this->top = nullptr;
        } else {
            this->top = this->top->previous;
            this->top->next = nullptr;
        }
        this->size -= 1;
        return value;
    }

    void push(int value) {
        if(this->top == nullptr) {
            this->top = new Node;
            this->top->value = value;
        } else {
            Node* new_node = new Node;
            new_node->value = value;

            this->top->next = new_node;
            
            this->top->next->previous = this->top;
            this->top = this->top->next;
        }
        this->size += 1;
    }
};

int main() {
    Stack stack_for_vaccine;
    int people_amount, max_wait_queue;
    std::cin >> people_amount >> max_wait_queue;

    int queue[people_amount];
    for(int i = 0; i < people_amount; i++) {
        std::cin >> queue[i];
    }

    int now_index = 0;
    int personOut = 1;
    std::string output = "";
    
    while(1) {
        if (personOut > people_amount && now_index == people_amount) { std::cout << output; break; }
        // std::cout <<  "personout: " << personOut << queue[now_index] << std::endl;
        if (personOut != queue[now_index]) {
            stack_for_vaccine.push(personOut);
            if(stack_for_vaccine.size > max_wait_queue) { printf("mei ban fa"); break; }
            personOut++;
            output += "jin\n";
        } else {

            output += "jin\nda\n";
            now_index++;
            personOut++;
            while(stack_for_vaccine.size > 0 && stack_for_vaccine.top->value == queue[now_index]) {
                stack_for_vaccine.pop_last();
                output += "da\n";
                now_index++;
            }
        }
    }
}
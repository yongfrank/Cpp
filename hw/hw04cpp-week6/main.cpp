/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 13:29:37
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 14:41:23
 * @FilePath: /Cpp/hw/hw04cpp-week6/main.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <iostream>
#include <string.h>
#include "./linkedlist.h"
#include "./linkedlist.cpp"

int main() {
    List link;
    std::string command;
    int data, index;

    std::cout << "Please input a line of int seperated by spaces: " << std::endl;
    while(1) {
        std::cin >> command;
        if(command == "break") {
            break;
        } else if(command == "insert") {
            std::cout << "insert before index: ";
            std::cin >> index >> data;
            link.insertBeforeIndex(index, data);
            link.print();
            continue;
        } else if (command == "delete") {
            std::cout << "delete at index: ";
            std::cin >> index;
            link.deleteNodeAt(index);
            link.print();
            continue;
        }

        data = std::stoi(command);
        link.insertBeforeIndex(0, data);
        link.print();
    }
    
    std::cout << "~~~~Over~~~~" << std::endl;
    return 0;
}
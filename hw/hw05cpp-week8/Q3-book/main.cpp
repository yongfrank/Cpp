/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 20:11:26
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 21:41:59
 * @FilePath: /Cpp/hw/hw05cpp-week8/Q3-book/main.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <iostream>
#include "Book.cpp"
#include "CD.cpp"

int main() {
    Book jobs(std::string("Steve Jobs"), 19.99, 2008, 12, 8, 100);
    CD red(std::string("Red (Taylor's Version)"), 14.99, 2021, 9, 21, 283);
    
    while (true) {
        std::string commandInput;
        std::cout << "Command:>";
        std::cin >> commandInput;
        if (commandInput == "inputData") {
            red.inputData();
        } else if (commandInput == "display") {
            red.display();
        } else if (commandInput == "exit") {
            break;
        }
    }
}

/*
 * @Author: Frank Chu
 * @Date: 2022-09-16 14:07:08
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 15:04:02
 * @FilePath: /Cpp/hw/hw01cpp/01cout.cpp
 * @Description: https://www.programiz.com/c-programming/examples/pyramid-pattern
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include <iomanip>

int main() {
    int i, rows, k = 0;
    // int space;
    rows = 4;
    // scanf("%d", &rows);

    for(i = 1; i <= rows; i++, k = 0) {
        // for(space = 1; space <= rows - i; space++) {
        //     std::cout << " ";
        // }
        std::cout << std::setw(rows - i + 1);
        while(k != 2 * i - 1) {
            std::cout << "*";
            k++;
        }
        std::cout << std::endl;
    }
    return 0;
}
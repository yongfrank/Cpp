/*
 * @Author: Frank Chu
 * @Date: 2022-11-09 11:53:37
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-09 16:48:24
 * @FilePath: /Cpp/hw/hw06cpp-week9/two-dimensional-coordianate/main.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "TwoCoord.cpp"
#include "iostream"

int main() {
    TwoCoord descartes(3.5, 2.5);
    descartes.getCurrentPosition();
    descartes + TwoCoord(1, 2);
    descartes - TwoCoord(4.5, 4.5);
    descartes.distance(TwoCoord(3, 4));
    
    std::cout << std::endl;
    TwoCoord tempPoint;
    std::cin >> tempPoint;
    std::cout << tempPoint;
}
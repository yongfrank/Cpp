/*
 * @Author: Frank Chu
 * @Date: 2022-10-06 12:03:57
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-06 14:34:02
 * @FilePath: /Cpp/lab/lab04-week5/problemI-narcissisticNumber.cpp
 * @Description: https://www.geeksforgeeks.org/narcissistic-number/
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <iomanip>

bool getResult(int narcissisticNumber);

int main() {
    int number;
    std::cin >> number;
    for(int i = 2; i <= number; i++) {
        if (getResult(i)) {
            // iomanip
            // https://www.runoob.com/w3cnote/cpp-func-setw.html
            std::cout << i << std::setw(6);
        }
    }
    std::cout << std::endl;
}

bool getResult(int inputNumber) {
    std::string narcissisticNumber = std::to_string(inputNumber);
    
    int sumOfNarcissisticNumber = 0;
    int lenthOfNarcissisticNumber = narcissisticNumber.length();

    // Traversing through the string
    for (int i = 0; i < lenthOfNarcissisticNumber; i++) {
        // Since ascii value of numbers
        // starts from 48 so we subtract it from sum
        sumOfNarcissisticNumber = sumOfNarcissisticNumber + pow(narcissisticNumber[i] - '0', 3);
        // std::cout << std::endl << "pow is" << pow(narcissisticNumber[i] - '0', lenthOfNarcissisticNumber) << std::endl;
    }
    
    // Converting string to integer
    // _LIBCPP_FUNC_VIS int                stoi  (const string& __str, size_t* __idx = nullptr, int __base = 10);
    int number = stoi(narcissisticNumber);
    
    // Comparing number and sum
    if (number == sumOfNarcissisticNumber) {
        return true;
    } else {
        return false;
    }

}
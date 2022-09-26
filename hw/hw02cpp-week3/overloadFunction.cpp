/*
 * @Author: Frank Chu
 * @Date: 2022-09-25 11:58:11
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-25 12:38:17
 * @FilePath: /Cpp/hw/hw02cpp-week3/overloadFunction.cpp
 * @Description: 5. (论述题) 编写重载函数min()，分别计算int、double、float、long类型数组中的最小值。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>

using namespace std;

int min(int inputArray[], int size) {
    int minIndex = 0;

    for(int i = 0; i < size; i++) {
        if(inputArray[minIndex] > inputArray[i]) {
            minIndex = i;
        }
    }
    return inputArray[minIndex];
}

double min(double inputArray[], int size) {
    int minIndex = 0;

    for(int i = 0; i < size; i++) {
        if(inputArray[minIndex] > inputArray[i]) {
            minIndex = i;
        }
    }
    return inputArray[minIndex];
}

float min(float inputArray[], int size) {
    int minIndex = 0;

    for(int i = 0; i < size; i++) {
        if(inputArray[minIndex] > inputArray[i]) {
            minIndex = i;
        }
    }
    return inputArray[minIndex];
}

long min(long inputArray[], int size) {
    int minIndex = 0;

    for(int i = 0; i < size; i++) {
        if(inputArray[minIndex] > inputArray[i]) {
            minIndex = i;
        }
    }
    return inputArray[minIndex];
}

int main() {
    float array[] = {1.5, 2, 3, 4};
    int size = sizeof(array) / sizeof(array[0]);
    
    cout << min(array, size) << endl;
}
/*
 * @Author: Frank Chu
 * @Date: 2022-09-16 11:36:05
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-16 11:48:49
 * @FilePath: /Cpp/class/week2/overload-example.cpp
 * @Description: Week 2 Class Code
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int max(int&, int&, int&);
    int max(int&, int&);
    cout << "Please input 3 integers: " << endl;
    cin >> a >> b >> c;
    cout << "The largest number is: " << max(a, b, c) << endl;
    cout << "The larger number of the first two is: " << max(a, b) << endl;
    
    return 0;
}

int max(int& a, int& b, int& c) {
    int maxOfABC;
    if (a > b) maxOfABC = a; else maxOfABC = b;
    if (maxOfABC < c) maxOfABC = c;

    return maxOfABC;
}

int max(int& a, int& b) {
    if (a > b) return a;
    return b;
}
/*
 * @Author: Frank Chu
 * @Date: 2023-02-19 19:49:18
 * @LastEditors: Frank Chu
 * @LastEditTime: 2023-02-19 19:49:21
 * @FilePath: /Cpp/final/2021-2022-1 年C程序设计（计算机类）期末考试-重现/D.cpp
 * @Description: 
 * 
 * Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> get_triangle(char triangleComponent, int lineCount) {
    vector<string> triangle;
    for (int i = 1; i <= lineCount; i++) {
        string line(lineCount + i - 1, ' ');
        for (int j = 0; j < 2 * lineCount - 1; j++) {
            if (i == lineCount || j == lineCount - i || j == lineCount + i - 2) {
                line[j] = triangleComponent;
            }
        }
        triangle.push_back(line);
    }
    return triangle;
}

int main() {
    char triangleComponent;
    int lineCount;
    while (cin >> triangleComponent >> lineCount && triangleComponent != '@') {
        auto triangle = get_triangle(triangleComponent, lineCount);
        for (const auto& line : triangle) {
            cout << line << endl;
        }
    }
    return 0;
}

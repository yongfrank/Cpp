/*
 * @Author: Frank Chu
 * @Date: 2022-09-30 10:36:25
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-30 10:38:44
 * @FilePath: /Cpp/onlineVideo/CppLessonPart7.cpp
 * @Description: https://www.bilibili.com/video/BV1XV411j7oo/?spm_id_from=333.999.0.0&vd_source=4c66f8c5cfa0134c7d37b554951f6920
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>

template<typename T>
T maxValue(const T& lhs, const T& rhs) {
    return lhs > rhs ? lhs : rhs;
}

int main() {
    float a = 3.5, b = 4.8;
    std::cout << "Max is " << maxValue(a, b) << std::endl;
}
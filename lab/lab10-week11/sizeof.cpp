/*
 * @Author: Frank Chu
 * @Date: 2022-11-14 14:28:22
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-14 15:34:43
 * @FilePath: /Cpp/lab/lab10-week11/sizeof.cpp
 * @Description: 问题 E: 输入10个数，根据提示进行从小到大输出或从大到小输出
 * 从键盘输入一个字符和10个整数，若输入字符是'A'，将这10个数按从小到大的顺序输出；若输入字符是'D'，则按从大到小输出；若输入其他字符，就结束。
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "stdio.h"
#include "stdlib.h"

#include "iostream"
#include "typeinfo"

void typeCustom(int (&numArr)[3]);

int main() {
    int arrayTest[3] = {1, 2, 3};
    std::cout << "Type before passing: " << typeid(arrayTest).name() << "\n";
    std::cout << "Size before passing: " << sizeof(arrayTest) << "\n";
    typeCustom(arrayTest);
}

void typeCustom(int (&numArr)[3]) {
    std::cout << "Type after passing: " << typeid(numArr).name() << "\n";
    std::cout << "Type after passing: " << sizeof(numArr) << "\n";
}
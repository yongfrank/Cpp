/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 13:09:45
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-17 11:24:06
 * @FilePath: /Cpp/lab/Cpp-lab01-week11/source/main.cpp
 * @Description: 
 * VSCodeでDoxygenのプレビューをしたい！
 * https://qiita.com/hakua-doublemoon/items/c328a7bf0bc7a1fbef14
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "CContact.h"
#include "CContact.cpp"

#include <iostream>
#include <string>

int main() {
    std::string name = "Frank Chu", number = "15968126783", group = "Student";
    CContact frank = CContact(name, number, group);
    
    name = "Panda", number = "22", group = "32";
    CContact panda = CContact(name, number, group);
    
    if (frank < panda) {
        std::cout << "frank < panda";
    } else {
        std::cout << "frank > panda";
    }
}
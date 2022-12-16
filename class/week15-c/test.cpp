/*
 * @Author: Frank Chu
 * @Date: 2022-12-16 13:41:07
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-16 13:42:14
 * @FilePath: /Cpp/class/week15-c/test.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
/**
 * 最小复现代码
 * Qt Creator 9.0.0
 * Based on Qt 6.4.1 (Clang 13.0 (Apple), arm64)
 */
#include <iostream>
#include <algorithm>
#include <vector>

class Contact {
public:
    Contact(std::string name) { this->name = name; }
    friend bool customSort(const Contact& lhs, const Contact& rhs);
private:
    std::string name;
};

bool customSort(const Contact& lhs, const Contact& rhs) { return lhs.name < rhs.name; }

class Book {
public:
    void sortBookByName() {
        /**
         * @bug
         * Semantic Issue
         * Use of undeclared identifier 'customSort'
         * [Source: clangd for friendTest<项目的名字>]
         * 别人在 Windows Qt 上也测试过，提示错误相同
         */
        std::sort(this->addressBook.begin(), this->addressBook.end(), customSort);
        
        // 这个就是正常的
        // std::sort(this->addressBook.begin(), this->addressBook.end(), [](const Contact& lhs, const Contact& rhs) {
        //     return customSort(lhs, rhs);
        // });
    }
    std::vector<Contact> addressBook;
};

int main() {
    Book book;
    book.addressBook.push_back(Contact("Frank"));
    book.addressBook.push_back(Contact("Chu"));
    book.addressBook.push_back(Contact("Hello"));
    book.addressBook.push_back(Contact("World"));
    book.sortBookByName();
    // for (auto& contact : book.addressBook) {
    //     std::cout << contact.name << std::endl;
    // }
    return 0;
}
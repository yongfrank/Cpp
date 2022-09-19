/*
 * @Author: Frank Chu
 * @Date: 2022-09-09 14:36:00
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-16 10:18:08
 * @FilePath: /Cpp/Hacking With Swift Rewrite/classTest.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <iostream>
#include <string>

using namespace std;

class Book {
    string name;
    string author;
    bool isBorrowed;

    public:
    Book(){}
    Book(string bookname, string setAuthor, bool setIsBorrowed = false) {
        name = bookname;
        author = setAuthor;
        isBorrowed = setIsBorrowed;
    }
    
    void bookInit(string bookname, string setAuthor, bool setIsBorrowed) {
        name = bookname;
        author = setAuthor;
        isBorrowed = setIsBorrowed;
    }

    string getBookInfo() {
        return name;
    }
    
};

int main() {

    cout << "hello world" << endl;
    Book mybook;
    mybook.bookInit("Harry Potter", "JK Rolling", false);
    cout << mybook.getBookInfo() << endl;
    
    Book newbook("The Little Prince", "");
    cout << newbook.getBookInfo() << endl;
    return 0;
}
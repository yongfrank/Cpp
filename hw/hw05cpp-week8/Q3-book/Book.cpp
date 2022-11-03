/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 20:51:14
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 21:41:02
 * @FilePath: /Cpp/hw/hw05cpp-week8/Q3-book/Book.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#ifndef BOOK_CPP
#define BOOK_CPP
#include "Publication.cpp"

// C++ Inheritance
// https://www.runoob.com/cplusplus/cpp-inheritance.html
class Book: public Publication
{
private:
    /* data */
    int page;
public:
    Book(std::string title, double price, int y, int m, int d, int page);
    ~Book();
    void inputData();
    void display();
    
    // https://blog.csdn.net/JHXXH/article/details/108766261
//    std::string getTitle() { return Publication::getTitle(); };
//    void printPublicationDate() { Publication::printPublicationDate(); };
};

Book::Book(std::string title, double price, int y, int m, int d, int page):Publication(title, price, y, m, d)
{
    this->page = page;
}

Book::~Book()
{
}

void Book::inputData() {
    std::cout << "Input Title, price, Publication Date and playtime." << "\n";
    std::string title;
    double price;
    int y, m, d, page;
    std::cin >> title >> price >> y >> m >> d >> page;
    
    setData(title, price, y, m, d);
    this->page = page;
}

void Book::display() {
    std::cout << "Book Title: " << this->getTitle() << "\n" << "Release Time: ";
    this->printPublicationDate();
    std::cout << "Page: " << this->page << "\n";
}

#endif


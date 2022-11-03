/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 21:40:50
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 21:40:52
 * @FilePath: /Cpp/hw/hw05cpp-week8/Q3-book/CD.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#ifndef CD_CPP
#define CD_CPP
#include "Publication.cpp"

class CD: public Publication
{
private:
    /* data */
    int playtime;
public:
    CD(std::string title, double price, int y, int m, int d, int playtime);
    ~CD();
//    std::string getTitle() { return Publication::getTitle(); };
//    void printPublicationDate() { Publication::printPublicationDate(); };
    void inputData();
    void display();
};

CD::CD(std::string title, double price, int y, int m, int d, int playtime):Publication(title, price, y, m, d)
{
    this->playtime = playtime;
}

CD::~CD()
{
}

void CD::inputData() {
    std::cout << "Input Title, price, Publication Date and playtime." << "\n";
    std::string title;
    double price;
    int y, m, d, playtime;
    std::cin >> title >> price >> y >> m >> d >> playtime;
    
    setData(title, price, y, m, d);
    this->playtime = playtime;
}

void CD::display() {
    std::cout << "CD Title: " << this->getTitle() << "\n" << "Release Time: ";
    this->printPublicationDate();
    std::cout << "Play Time: " << this->playtime << "\n";
}

#endif
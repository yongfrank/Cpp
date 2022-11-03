/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 19:53:20
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 21:41:12
 * @FilePath: /Cpp/hw/hw05cpp-week8/Q3-book/publication.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#ifndef PUBLICATION_CPP
#define PUBLICATION_CPP

#include <string>
#include <chrono>
#include <iostream>

class Publication
{
private:
    /* data */
    std::string title;
    double price;
    std::chrono::year_month_day pubDate;
public:
    Publication(std::string title, double price, int year, int month, int day);
    ~Publication();

    std::string getTitle() { return this->title; }
    void printPublicationDate();
    void setData(std::string title, double price, int year, int month, int day);
    virtual void display() = 0;
};

/// @brief Constructor for Publication
/// @param title title for publication
/// @param price price for publication
/// @param y year of publication
/// @param m month of publication
/// @param d day of publication
Publication::Publication(std::string title, double price, int y, int m, int d)
{
    this->title = title;
    this->price = price;
    this->pubDate = std::chrono::year_month_day{std::chrono::year(y), std::chrono::month(m), std::chrono::day(d)};
}

Publication::~Publication()
{
}

// https://learn.microsoft.com/en-us/cpp/standard-library/year-month-day-class?view=msvc-170
// https://youtu.be/QYaQStudgnE C++ Chrono Time Library Tutorial In 12minutes
// https://en.cppreference.com/w/cpp/chrono/year_month_day std::chrono::year_month_day
void Publication::printPublicationDate() {
    std::cout
    << static_cast<int>(this->pubDate.year()) << "/"
    << static_cast<unsigned>(this->pubDate.month()) << "/"
    << static_cast<unsigned>(this->pubDate.day()) << "\n";
}

void Publication::setData(std::string title, double price, int y, int m, int d) {
    this->title = title;
    this->price = price;
    this->pubDate = std::chrono::year_month_day{std::chrono::year(y), std::chrono::month(m), std::chrono::day(d)};
}
#endif


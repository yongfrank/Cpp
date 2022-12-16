/*
 * @Author: Frank Chu
 * @Date: 2022-12-14 00:14:39
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-14 00:18:36
 * @FilePath: /Cpp/lab/Cpp-lab03-week14/red.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <iostream>

class Album {
public: 
    Album(std::string name, std::string intro, std::string singer);
    ~Album();
    std::string name;
private:
    
    std::string intro;
    std::string singer;
};

Album::Album(std::string name, std::string intro, std::string singer): name("Red"), intro("Taylor's Version"), singer("Taylor Swift") {
    this->intro = intro;
    this->singer = singer;
    this->name = name;
}
Album::~Album() {}

int main() {
    Album red("Reputation", "Taylor's Version", "Taylor Swift");
    std::cout << red.name << std::endl;

  std::cout << "Hello, world!" << std::endl;
  return 0;
}
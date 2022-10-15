/*
 * @Author: Frank Chu
 * @Date: 2022-10-12 15:49:01
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-12 16:01:03
 * @FilePath: /Cpp/hw/hw03cpp-week5/constructor.cpp
 * @Description: https://www.runoob.com/cplusplus/cpp-constructor-destructor.html
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <iostream>

using namespace std;

class Line {
    public:
        void setLength( double len );
        double getLength( void );
        Line( void ); // Constructor

    private:
        double length;
};

// Member function definition, including constructor function
Line::Line(void) {
    cout << "Object is being created" << endl;
}

void Line::setLength( double len) {
    length = len;
}

double Line::getLength( void ) {

    // private: doueble length;
    return length;
}

int main() {
    Line line;
    line.setLength(6.0);
    cout << "Length of line: " << line.getLength() << endl;

    return 0;
}
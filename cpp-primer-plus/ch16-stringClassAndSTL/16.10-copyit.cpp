/*
 * @Author: Frank Chu
 * @Date: 2022-09-12 00:06:57
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-12 00:18:00
 * @FilePath: /Cpp/cppPrimerPlus/ch16-stringClassAndSTL/16.10copyit.cpp
 * @Description: ch16.10
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

// copyit.cpp -- copy() and iterators

#include <iostream>
#include <iterator>
#include <vector>

int main() {
    using namespace std;

    int casts[10] = {6, 7, 2, 9, 4, 11, 8, 7, 10, 5};
    vector<int> dice(10);

    // copy from array to vector
    copy(casts, casts + 10, dice.begin());
    cout << "Let the dice be cast!\n";
    
    //create an ostream iterator
    ostream_iterator<int, char> out_iter(cout, " ");
    cout << endl;
    
    cout << "Implicit use of reverse iterator.\n";
    copy(dice.rbegin(), dice.rend(), out_iter);
    cout << endl;

    cout << "Explicit use of reverse iterator.\n";
    vector<int>::reverse_iterator ri;
    for (ri = dice.rbegin(); ri != dice.rend(); ++ri) {
        cout << *ri << " ";
    }
    cout << endl;

    return 0;
}
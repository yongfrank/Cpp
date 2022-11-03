/*
 * @Author: Frank Chu
 * @Date: 2022-10-31 08:53:18
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-31 15:07:52
 * @FilePath: /Cpp/interesting-project/cpp-chrono-timer.cpp
 * @Description: https://www.youtube.com/watch?v=QYaQStudgnE
 * C++ Chrono Time Library Tutorial In 12minutes ⌛
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <chrono>
#include <iostream>
#include <thread>
#include <vector>

using namespace std::chrono;

int main() {
    // int array[] = { 1, 2, 3, 4, 5 };

    // for(auto temp : array) {
    //     cout << temp << " ";
    // }

    // for (unsigned long i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
    //     cout << array[i] << endl;
    // }
    // unsigned a = 10;
    // cout << "a is " << a << endl;
    // cout << typeid(array).name() << endl;

    auto old = steady_clock::now();
    
    auto five_seconds = 5s;
    std::this_thread::sleep_for(five_seconds);
    // auto custom_five_seconds = duration<double, std::ratio<5/1>>(2);
    // std::chrono::seconds five_seconds = std::chrono::seconds(5);

    // auto day = 24h;
    // auto my_seconds = seconds(day);
    // cout << my_seconds.count() << "\n";

    // auto time_point = system_clock::now();
    // std::cout << duration_cast<days>(time_point.time_since_epoch()).count() << "\n";


    // std::vector<int> v(1000000);
    // std::cout << std::count_if(v.begin(), v.end(), [](int i) { return i == 0; }) << "\n";

    auto dur = steady_clock::now() - old;
    std::cout << duration_cast<seconds>(dur).count() << "\n";
}
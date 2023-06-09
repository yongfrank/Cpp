/*
 * @Author: Frank Chu
 * @Date: 2023-02-20 13:18:17
 * @LastEditors: Frank Chu
 * @LastEditTime: 2023-02-20 13:24:54
 * @FilePath: /Cpp/final/2020-2021-2 学年第2学期C语言期末考试-重现/probelmD.cpp
 * @Description: 
问题 D: 三角形难题
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

题目描述
有一个程序员叫Doge，今天他遇到了个难题。

Doge很开心的向一个妹子表白，没想到妹子扔给他一个题目，要他解决后再来找她。可是他最近智商不够用，所以他请你这个程序员帮她解决下。题目是这样的，给你一些棍子，从中选出三个棍子，问有多少种方案使得选出的三个棍子能构成一个三角形。

输入
 题目有多组测试数据。

对于每组测试数据，第一行为一个数n (3 <= n <= 100)表示给你n个棍子，第二行有n个数，每个数表示该棍子的长度，棍子的长度范围为1到100000。

输出
 对于每组测试数据，输出方案数。

样例输入 Copy
4
1 2 3 4
3
1 2 3
样例输出 Copy
1
0
 * 
 * Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
 */

#include <iostream>

int main() {
    int amount;
    while(std::cin >> amount) {
        int stick[amount];
        for(int i = 0; i < amount; i++) {
            std::cin >> stick[i];
        }
        int plan = 0;
        for(int i = 0; i < amount - 2; i++) {
            for (int j = i + 1; j < amount - 1; j++) {
                for(int k = j + 1; k < amount; k++) {
                    if(stick[i] + stick[k] > stick[j] && stick[i] + stick[j] > stick[k] && stick[j] + stick[k] > stick[i]) { plan++; }
                }
            }
        }
        std::cout << plan << std::endl;
    }
}
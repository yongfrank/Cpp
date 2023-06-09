/*
 * @Author: Frank Chu
 * @Date: 2022-12-19 14:28:35
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-19 14:36:36
 * @FilePath: /Cpp/lab/lab15-week16-c/problemI.cpp
 * @Description: 
问题 I: 网站泄密
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 64 MB

提交问题列表
题目描述

陈盖历回来后，给小娥一个不幸的消息，网站密码泄露了，银行密码泄露了。让小娥赶快就修改密码。小娥追问道，密码不是加密了吗？怎么会泄密？当然有些没有加密，有些加密算法很简单。陈盖历还告诉小娥，素数在加密学中起了很大的作用。 现在告诉你2个数，你能找出这2个数之间所有的素数吗？
输入

首先输入一个整数n表示n组测试数据 然后是n行，每行输入2个整数m1和m2
输出

输出m1和m2之间的所有素数（包括m1 m2)
样例输入 Copy

2
2 10
5 21
样例输出 Copy

2 3 5 7
5 7 11 13 17 19
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<bool> getPrimeVector(int maxNumber) {
        std::vector<bool> isPrime(maxNumber + 1, true);
        isPrime[0] = isPrime[1] = false;
        for(int i = 2; i < sqrt(maxNumber) + 1; i++) {
            if(isPrime[i]) {
                for(int j = i * i; j < maxNumber + 1; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        return isPrime;
    }

    void printSpecificRangePrime(int lhs, int rhs) {
        std::vector<bool> isPrime = getPrimeVector(rhs);
        for(int i = lhs; i < rhs + 1; i++) {
            if(isPrime[i]) {
                std::cout << i << " ";
            }
        }
        std::cout << std::endl;
    }
};

int main() {
    int n;
    std::cin >> n;
    Solution solution;
    for(int i = 0; i < n; i++) {
        int lhs, rhs;
        std::cin >> lhs >> rhs;
        solution.printSpecificRangePrime(lhs, rhs);
    }
    return 0;
}

/*
 * @Author: Frank Chu
 * @Date: 2022-12-19 14:37:01
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-19 14:40:21
 * @FilePath: /Cpp/lab/lab15-week16-c/problemJ.cpp
 * @Description: 
问题 J: 判断回文字符串
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 64 MB

提交问题列表
题目描述

输入一字符串（少于80个字符），所谓“回文：是指顺读和倒读都一样的字符串，如“XYZYX”。若是回文，以输出“Yes”，否则“No”。
输入

多则测试数据，每组输入一字符串（少于80个字符）。
输出

若是回文，以输出“Yes”，否则输出“No”。
样例输入 Copy

XYZYX
HOWAREYOU
样例输出 Copy

Yes
No
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int n = s.size();
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
    
    void run() {
        std::string s;
        while (std::cin >> s) {
            if (isPalindrome(s)) {
                std::cout << "Yes" << std::endl;
            } else {
                std::cout << "No" << std::endl;
            }
        }
    }
};

int main() {
    Solution solution;
    solution.run();
    return 0;
}
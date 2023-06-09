/*
 * @Author: Frank Chu
 * @Date: 2023-02-20 12:29:07
 * @LastEditors: Frank Chu
 * @LastEditTime: 2023-02-20 12:45:36
 * @FilePath: /Cpp/final/2020-2021-2 学年第2学期C语言期末考试-重现/problemF.cpp
 * @Description: 
问题 F: 账单
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

题目描述
 在宇宙的某个角落，有一个星球也住着人类，不过那里的人类喜欢用十六进制表示数字。现在有个人类霸霸将他的账单输入到了电脑上，
 这本账单中只包含数字1~9、大写字母‘A’~‘F’（表示10~15）以及空格。这位人类霸霸在输入账单的时候，如果有一个数表示的交易为坏账（这笔交易不成功），
 则他会在这个数字左边加至少一个前导零（如：当123是坏账的时候，他将其输入成0123、00123....）。他输入完后忘了锁屏，结果他家的崽就在账单上任意地输入了换行。
 现在可怜的人类霸霸需要找回原本账单中的非坏账数（无前导零的数）。

输入
包含不超过200行的字符串，每行长度不超过1000个字符。

保证每行都不是空行（只包含空格的行 不算空行）

输出
第一行，按顺序输出原本账单中的非坏账数，用空格隔开。

接着输出每一行中包含的非坏账数的个数（当一个数分布在多行时，把这个数算在它的第一个数字所在的行）。

样例输入 Copy
a19 01 17b
12 bdc 13
23 14 344 bc
样例输出 Copy
a19 17b12 bdc 1323 14 344 bc
2
2
3
 * 
 * Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
 */

#include <iostream>
#include <string>

int main() {
    std::string line;
    std::string bill;
    while (std::getline(std::cin, line))
    {
        if (line.empty()) { break; }
        std::cout << line << std::endl;
        bill += line;
        bill += "_";
    }
    std::cout << bill;
    for(int i = 0; i < bill.size(); i++) {
        if (i == 0 && bill[i] != '0' || bill[i] != '0' && bill[i - 1] == ' ') {

        }
    }
    
}
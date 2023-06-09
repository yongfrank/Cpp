/*
 * @Author: Frank Chu
 * @Date: 2023-02-20 11:46:02
 * @LastEditors: Frank Chu
 * @LastEditTime: 2023-02-20 12:27:25
 * @FilePath: /Cpp/final/2020-2021-2 学年第2学期C语言期末考试-重现/problemA.cpp
 * @Description: 

2020331200003
Language
问题 A: 小明的秘密
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 64 MB

题目描述
小明有很多秘密，但是他不知道怎么样保存这些秘密。有一天，他突然想到了一个方法，就是对秘密进行加密。 他的秘密只由大写字母，小写字母，和空格组成。然后他先把26个小写字母按a-z排成一排，然后随机打乱，接下来第一个字母就是a对应的字母，第二个字母就是b对应的依此类推。 比如，现在打乱后的顺序为： yrwhsoujgcxqbativndfezmlpk 要加密的文字是： I love acm 那结果就是： G qtzs ywb 注意：加密的时候只对字母进行加密，其他字符不变，大小写也不变。 如果想知道小明的秘密的话,Just do it!
输入
多组测试数据，每一组测试数据两行。 第一行为：26个字母打乱后的顺序。 第二行为：要加密的信息，只由小写字母，大字字母和空格组成，最长长度不超过80。
输出
输出占一行，为加密后的信息。
样例输入 Copy
yrwhsoujgcxqbativndfezmlpk
I love acm
eydbkmiqugjxlvtzpnwohracsf
Kifq oua zarxa suar bti yaagrj fa xtfgrj
样例输出 Copy
G qtzs ywb
Jump the fence when you seeing me coming
 * 
 * Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
 */

#include <iostream>
#include <string>

int main() {
    std::string order;
    std::string secret;

    while (std::getline(std::cin, order)) {
        std::getline(std::cin, secret);
        std::string cipher;

        for (auto ch : secret) {
            if (ch == ' ') {
                cipher += ' ';
                continue;
            }

            char target;
            if (islower(ch)) {
                target = order[ch - 'a'];
            } else if (isupper(ch)) {
                target = toupper(order[tolower(ch) - 'a']);
            } else {
                target = ch;
            }

            cipher += target;
        }

        std::cout << cipher << std::endl;
    }

    return 0;
}
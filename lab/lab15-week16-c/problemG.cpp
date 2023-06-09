/*
 * @Author: Frank Chu
 * @Date: 2022-12-19 13:13:57
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-19 13:14:05
 * @FilePath: /Cpp/lab/lab15-week16-c/problemG.cpp
 * @Description: 
问题 G: 人工智能的智商等级
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

2017年11月我校邀请了百度的李经理给我们介绍了人工智能在百度的发展。随着AI的不断发展，人工智能的智商也在不断提高。人工智能系统的智商我们目前将分为6个级别：
（1）第O级，没有现实对应的东西（NULL)，我们假设智商为0~50
（2）第I级，无法进行交互的，比如石头，木棍，铁块，水滴，我们假设智商为51~70
（3）第II级，能够与人类进行交互，比如智能冰箱，智能电视，智能扫地机，我们假设智商为71~90
（4）第III级，除了能与人类交互，数据可以不断升级，比如智能手机，家用电脑，我们假设智商为91~110
（5）第IV级，除了包含第3级的特征外，还可以与其他智能系统共享，比如谷歌大脑，百度大脑，RoboEarth云机器人，我们假设智商为111~130
（6）第V级，除了包含前面的特征外，还可以创新知识，比如人类，我们假设智商为131及以上。
当然以上的等级仅仅作为划分智能系统等级，与人类的智商是不同的。
现在输入一个人工智能系统的智商，你需要把它的等级输出，

输入

输入一个整数，表示人工智能系统的智商

输出

根据上面的划分，输出对应的等级（O、I、II、III、IV或V）。

样例输入 Copy

89
样例输出 Copy

II
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include <string>

std::string getLevel(int score) {
    if (score <= 50) {
        return "O";
    } else if (score <= 70) {
        return "I";
    } else if (score <= 90) {
        return "II";
    } else if (score <= 110) {
        return "III";
    } else if (score <= 130) {
        return "IV";
    } else {
        return "V";
    }
}

int main() {
    int score;
    std::cin >> score;
    std::cout << getLevel(score) << std::endl;
    return 0;
}
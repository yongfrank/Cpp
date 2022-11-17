/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 13:11:56
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-17 01:07:08
 * @FilePath: /Cpp/lab/Cpp-lab01-week11/CContact.h
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#ifndef CCONTACT_H
#define CCONTACT_H
#include <iostream>
#include <string>

// 判断字符串source是否匹配pattern
// 或者说字符串source是pattern所表达的集合中的某个成员

// bool match(std::string &pattern, std::string &source); //字符串匹配

/**
 * @brief CContact 是联系人类
 */
class CContact
{
private:
    std::string Name;   // 姓名
    std::string Number; // 电话号码
    std::string Group;  // 群组
public:
    CContact();                                                           // 默认构造函数
    CContact(std::string &Name, std::string &Number, std::string &Group); // 使用 Name, Number, Group 创建联系人对象
    CContact(const CContact &);                                           // 拷贝构造函数
    virtual ~CContact();                                                  // 析构函数

    bool operator<(CContact &);                                  // 重载 < 运算符，供算法 sort 使用,按姓名排序
    void operator=(const CContact &);                            // 重载赋值运算符
    friend std::ostream &operator<<(std::ostream &, CContact);   // 利用友元函数重载运算符 <<
    friend std::istream &operator>>(std::istream &, CContact &); // 利用友元函数重载运算符 >>

    friend bool pr(const CContact &, const CContact &);             //定义组排序函数，供算法sort使用
    void getContact(std::string &, std::string &, std::string &);   // 获取对象的三个成员
    void setContact(std::string &, std::string &, std::string &);   // 设定对象的三个成员
    bool PatternMatch(std::string &, std::string &, std::string &); // 判定本对象是否匹配搜索条件
};

#endif
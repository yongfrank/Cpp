/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 16:04:46
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-17 11:17:31
 * @FilePath: /Cpp/lab/Cpp-lab01-week11/source/AddressBook.h
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <string>
#include <vector>

#include "CContact.h"

/**
 * @brief 地址簿类
 * 
 * Detailed Describer
 * 
 */
class AddressBook
{
    std::vector<CContact> Book;
    // 以CContact类实例化类模板vector形成CContact向量作为存储结构。
    // Book是CContact向量类的一个实例
public:
    AddressBook(); //建立空地址簿
    ~AddressBook(); //地址簿析构函数，其中必须清空联系人向量Book

    void AddContact(std::string &, std::string &, std::string &); //在向量中增加一个联系人

    int Find(int startIndex, std::string &, std::string &, std::string &); //从下标startIndex开始寻找符合匹配条件的联系人，如果找到，则返回下标，否则返回-1

    CContact operator[](int);                                //重载下标运算符
    int Delete(std::string &, std::string &, std::string &); //按条件删除联系人，返回删除的人数。如果没有删除任何人，返回0
    void Sort();                                             //按姓名排序Book； void SortGroup();//按群组排序Book;
    void List();                                             //输出Book中所有联系人。
    void ListGroup(std::string &group);                      //输出某组别中的所有联系人
};
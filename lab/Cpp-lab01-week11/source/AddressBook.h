/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 16:04:46
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-20 19:43:21
 * @FilePath: /Cpp/lab/Cpp-lab01-week11/source/AddressBook.h
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

#include "CContact.h"

#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
/**
 * @brief 地址簿类
 *
 * Detailed Describer
 *
 */
class AddressBook
{
private:
    /**
     * @brief 以CContact类实例化类模板vector形成CContact向量作为存储结构。Book是CContact向量类的一个实例
     */
    std::vector<CContact> Book;

public:
    AddressBook();  //建立空地址簿
    ~AddressBook(); //地址簿析构函数，其中必须清空联系人向量Book

    void AddContact(std::string &, std::string &, std::string &);          //在向量中增加一个联系人

    /**
     * @brief 在向量中增加一个类型为 CContact 联系人
     * @param  contact          输入已经建立好的 CContact 类型
     */
    void Add(CContact& contact);

    /**
     * @brief 重载下标运算符
     * @param indexOfContact index of contact
     * @return CContact at specific index
     */
    CContact operator[](int indexOfContact);

    /**
     * @brief 按姓名排序 AddressBook
     */
    void Sort();

    /**
     * @brief 按群组排序Book，群组名字拼音升序排序
     */
    void SortGroup();

    /**
     * @brief `std::cout` 输出Book中所有联系人。
     */
    void List();

    void ListGroup(std::string& group);                      //输出某组别中的所有联系人

    int Delete(std::string &, std::string &, std::string &); //按条件删除联系人，返回删除的人数。如果没有删除任何人，返回0
    int Find(int startIndex, std::string &, std::string &, std::string &); //从下标startIndex开始寻找符合匹配条件的联系人，如果找到，则返回下标，否则返回-1
};
#endif
/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 13:11:56
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-22 00:50:06
 * @FilePath: /Cpp/lab/Cpp-lab01-week11/source/CContact.h
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#ifndef CCONTACT_H
#define CCONTACT_H
#include <iostream>
#include <string>
#include <regex>

/**
 * @brief CContact 是联系人类
 * @author Frank Chu
 * @version v1.0.0
 * @date 16-Nov-2022
 */
class CContact
{
private:
    std::string Name;   ///< 姓名
    std::string Number; ///< 电话号码
    std::string Group;  ///< 群组
public:
    /**
     * @brief Construct a new CContact object 默认构造函数，构造一个空联系人类
     */
    CContact();                                                           

    /// @brief 使用Name,Number,Group创建联系人对象
    /// @param Name Contact Name
    /// @param Number Phone Number 
    /// @param Group Contact Group
    CContact(std::string &, std::string &, std::string &);

    /// @brief 拷贝构造函数
    /// @param ContactInfo Initialized Contact 
    CContact(const CContact &);
    
    /// @brief 析构函数
    virtual ~CContact();

    /// @brief 获取对象的三个成员
    /// @param Name return Name as reference
    /// @param Number return Number as reference
    /// @param Group return Group as reference
    void getContact(std::string &, std::string &, std::string &);

    /// @brief 设定对象的三个成员
    /// @param Name Contact Name
    /// @param Number Phone Number 
    /// @param Group Contact Group
    void setContact(std::string &, std::string &, std::string &);

    /**
     * @brief 重载 < 运算符，供算法 Sort 使用,按姓名排序
     * @param contactToBeCompared contact info to be compared.
     * @return true thisCContact < contactToBeCompared
     * @return false thisCContact > contactToBeCompared
     */
    bool operator<(const CContact &) const;

    /// @brief 重载赋值 = 运算符，重载赋值运算符
    /// @param oldContact local variable, newContact = oldContact, set new is equal to old.
    CContact& operator=(const CContact &);

    /// @brief 利用友元函数重载运算符 << 
    /// @param std::ostream file stream
    /// @param CContact output contact class
    /// @return ostream 
    friend std::ostream &operator<<(std::ostream &, CContact);

    /// @brief 利用友元函数重载运算符 >>
    /// @param std::istream& is
    /// @param CContact
    /// @return istream
    friend std::istream &operator>>(std::istream &, CContact &);

    /**
     * @brief  定义组排序函数，供算法sort使用, 
     * @param  lhsContact       left hand side of Contact to be compared
     * @param  rhsContact       right hand side of Contact to be compared
     * @return true lhsContact.Group < rhsContact.Group;
     * @return false lhsContact.Group > rhsContact.Group;
     */
    friend bool pr(const CContact &, const CContact &);

    /**
     * @brief 判定本对象是否匹配搜索条件
     * @param  name             name pattern
     * @param  number           number pattern
     * @param  group            group pattern
     * @return true 符合
     * @return false 不符合
     */
    bool PatternMatch(std::string& name, std::string& number, std::string& group);

};

/**
 * @brief  字符串匹配，判断字符串source是否匹配pattern，或者说字符串source是pattern所表达的集合中的某个成员
 * @param  pattern          Pattern string including '*'
 * @param  source           Source string
 * @return true             can find pattern in the source
 * @return false            cannot find pattern in the source
 * 
 */
bool match(std::string &pattern, std::string &source);

#endif
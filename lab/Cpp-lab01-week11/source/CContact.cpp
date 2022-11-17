/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 16:25:59
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-17 08:43:53
 * @FilePath: /Cpp/lab/Cpp-lab01-week11/CContact.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include "CContact.h"

CContact::CContact() {}

/// @brief 使用Name,Number,Group创建联系人对象
/// @param Name Contact Name
/// @param Number Phone Number 
/// @param Group Contact Group
/// @note Visual Studio Code C++ Extension July 2020 Update: Doxygen comments and Log points https://devblogs.microsoft.com/cppblog/visual-studio-code-c-extension-july-2020-update-doxygen-comments-and-logpoints/
CContact::CContact(std::string& Name, std::string& Number, std::string& Group) {
    this->Name = Name;
    this->Number = Number;
    this->Group = Group;
}

/// @brief 拷贝构造函数
/// @param ContactInfo Initialized Contact 
CContact::CContact(const CContact& ContactInfo) {
    this->Name = ContactInfo.Name;
    this->Number = ContactInfo.Number;
    this->Group = ContactInfo.Group;
}

/// @brief 析构函数
CContact::~CContact() { }


/// @brief 重载 < 运算符，供算法sort使用,按姓名排序
/// @param contactToBeCompared contact info to be compared.
/// @return if thisCContact < contactToBeCompared, return true;
/// @note https://www.runoob.com/cplusplus/cpp-overloading.html
bool CContact::operator<(CContact& contactToBeCompared) {
    if (this->Name < contactToBeCompared.Name) {
        return true;
    } else {
        return false;
    }
}

/// @brief 重载赋值 = 运算符
/// @param oldContact local variable, newContact = oldContact, set new is equal to old.
/// @note C++ 赋值运算符 = 重载 https://www.runoob.com/cplusplus/assignment-operators-overloading.html
void CContact::operator=(const CContact& oldContact) {
    this->Name = oldContact.Name;
    this->Number = oldContact.Number;
    this->Group = oldContact.Group;
}

/// @brief 利用友元函数重载运算符 << 
/// @param std::ostream file stream
/// @param CContact output contact class
/// @return ostream 
/// @see 【懒猫老师-最简版C++-(18)类的友元】 https://www.bilibili.com/video/BV127411Q7eu/ 
/// @note Overloading the << Operator for Your Own Classes https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170
std::ostream &operator<<(std::ostream& os, CContact contactInfo) {
    // Overloading the >> Operator for Your Own Classes
    os << contactInfo.Name << ", " << contactInfo.Number << ", " << contactInfo.Group << "\n";
    return os;
}

/// @brief 利用友元函数重载运算符 >>
/// @param std::istream& is
/// @param CContact
/// @return istream
/// @note Overloading the >> Operator for Your Own Classes https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-input-operator-for-your-own-classes?view=msvc-170
std::istream &operator>>(std::istream& is, CContact& contactToBeRevised) {
    std::string name, number, group;
    is >> name >> number >> group;
    contactToBeRevised.setContact(name, number, group);
    // std::cout << name << number << group;
    return is;
}


//定义组排序函数，供算法sort使用
// bool pr(const CContact &, const CContact &) {

// }

/// @brief 获取对象的三个成员
/// @param Name return Name as reference
/// @param Number return Number as reference
/// @param Group return Group as reference
void CContact::getContact(std::string& Name, std::string& Number, std::string& Group) {
    Name = this->Name;
    Number = this->Number;
    Group = this->Group;
}

/// @brief 设定对象的三个成员
/// @param Name Contact Name
/// @param Number Phone Number 
/// @param Group Contact Group
void CContact::setContact(std::string& Name, std::string& Number, std::string& Group) {
    this->Name = Name;
    this->Number = Number;
    this->Group = Group;
}

// bool PatternMatch(std::string &, std::string &, std::string &) {} // 判定本对象是否匹配搜索条件


/*
0xFFFF搬砖艺术
荼黑 23:19:25
doxygen 有什么推荐教程不，就是那个写注释的，想在 vs code 里面用
还有就是 vs code 自带的这个注释工具只支持一部分的语法吗，这个有文档不，查了一下没找到[表情]

@荼黑 你可以写个代码片段按doxygen规则写一个就行

@0x1234 https://devblogs.microsoft.com/cppblog/visual-studio-code-c-extension-july-2020-update-doxygen-comments-and-logpoints/
荼黑 00:37:25
我看了下，好像就提到的几个 doxygen 标签可以正常用，其他官方的 intelliSense 没支持好像。cpp 这个注释有点令人难受。隔壁 js 可以直接写 example code，复制粘贴

@0x1234 我反正试了好久，查了好久，各种翻 github issue，目前看来是这样的。如果查到其他资料，请 at 我[表情]

还有很多奇葩问题，换行只能识别成空格这些
https://github.com/microsoft/vscode-cpptools/issues/5741
the missing newline becomes a space

设置不简化注释，但也有问题
https://github.com/microsoft/vscode-cpptools/issues/8525
If true, tooltips of hover and auto-complete will only display certain labels of structured comments. Otherwise, all
comments are displayed.

https://devblogs.microsoft.com/cppblog/visual-studio-code-c-extension-july-2020-update-doxygen-comments-and-logpoints/
Visual Studio Code C++ Extension July 2020 Update: Doxygen comments and Log points

C/C++ doc comments preview doesn't react to newlines #3464
https://github.com/microsoft/vscode-cpptools/issues/3464
*/
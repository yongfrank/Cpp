/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 16:25:59
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-21 22:10:57
 * @FilePath: /Cpp/lab/Cpp-lab01-week11/source/CContact.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include "CContact.h"

CContact::CContact() {}

/// @note Visual Studio Code C++ Extension July 2020 Update: Doxygen comments and Log points https://devblogs.microsoft.com/cppblog/visual-studio-code-c-extension-july-2020-update-doxygen-comments-and-logpoints/
CContact::CContact(std::string& Name, std::string& Number, std::string& Group) {
    this->Name = Name;
    this->Number = Number;
    this->Group = Group;
}

CContact::CContact(const CContact& ContactInfo) {
    this->Name = ContactInfo.Name;
    this->Number = ContactInfo.Number;
    this->Group = ContactInfo.Group;
}

CContact::~CContact() { }


/**
 * @test
    name = "Frank", number = "1596", Group = "Student"
    ```cpp
        std::string name = "Frank Chu", number = "1596", group = "Student";
        CContact frank = CContact(name, number, group);
        name = "Panda", number = "22", group = "32";
        CContact panda = CContact(name, number, group);
        if(frank < panda) {
            std::cout << "<" << "\n";
        } else {
            std::cout << ">" << "\n";
        }
    ```
 * @note C++ 重载运算符和重载函数 
 * * C++ 中的运算符重载 `Box operator+(const Box&);` https://www.runoob.com/cplusplus/cpp-overloading.html
 * * C++使用greater报错‘this‘ argument has type ‘const xxx‘, but method is not marked const的解决方案 https://blog.csdn.net/HermitSun/article/details/107101944
 */
bool CContact::operator<(const CContact& contactToBeCompared) const {
    return this->Name < contactToBeCompared.Name;
    // return (this->Name < contactToBeCompared.Name) ? true : false;
    // if (Name < contactToBeCompared.Name) {
    //     return true;
    // } else {
    //     return false;
    // }
}

/// @note C++ 赋值运算符 = 重载 https://www.runoob.com/cplusplus/assignment-operators-overloading.html
CContact& CContact::operator=(const CContact& oldContact) {
    this->Name = oldContact.Name;
    this->Number = oldContact.Number;
    this->Group = oldContact.Group;
    return *this;
}

/// @see 【懒猫老师-最简版C++-(18)类的友元】 https://www.bilibili.com/video/BV127411Q7eu/ 
/// @note Overloading the << Operator for Your Own Classes https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170
std::ostream &operator<<(std::ostream& os, CContact contactInfo) {
    // Overloading the >> Operator for Your Own Classes
    os << contactInfo.Name << ", " << contactInfo.Number << ", " << contactInfo.Group << "\n";
    return os;
}

/// @note Overloading the >> Operator for Your Own Classes https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-input-operator-for-your-own-classes?view=msvc-170
std::istream &operator>>(std::istream& is, CContact& contactToBeRevised) {
    std::string name, number, group;
    is >> name >> number >> group;
    contactToBeRevised.setContact(name, number, group);
    // std::cout << name << number << group;
    return is;
}


/**
 * @test
```cpp
    std::string name = "Frank Chu", number = "1596", group = "Student";
    std::string rhsName = "Panda", rhsNumber = "22", rhsGroup = "Teacher";
    if(pr(CContact(name, number, group), CContact(rhsName, rhsNumber, rhsGroup))) {
        std::cout << "< change postion" << "\n";
    } else {
        std::cout << "> do not change" << "\n";
    }
```
 */
bool pr(const CContact& lhsContact, const CContact& rhsContact) {
    return lhsContact.Group < rhsContact.Group;
}

void CContact::getContact(std::string& Name, std::string& Number, std::string& Group) {
    Name = this->Name;
    Number = this->Number;
    Group = this->Group;
}

void CContact::setContact(std::string& Name, std::string& Number, std::string& Group) {
    this->Name = Name;
    this->Number = Number;
    this->Group = Group;
}

/**
 * @see
 * C++ 函数默认参数 https://www.w3cschool.cn/cpp/cpp-function-default-parameters.html
 */
bool CContact::PatternMatch(std::string& NamePattern, std::string& NumberPattern, std::string& GroupPattern) {
    return (
        match(NamePattern, this->Name) && match(NumberPattern, this->Number) && match(GroupPattern, this->Group)
    ) ? true : false;
} 

/**
 * @details  
 * `string::npos` 静态成员常量
 * 
 * 是对类型为 `size_t` 的元素具有最大可能的值。
 * 当这个值在字符串成员函数中的长度或者子长度被使用时，该值表示“直到字符串结尾”。
 * 作为返回值他通常被用作表明没有匹配。
 * @code {.cpp}
    if (s1.find(s2) != std::string::npos) {
        std::cout << "found!" << '\n';
    }
 * @endcode
 * @test
```cpp
std::string matchTestCase1Pattern = "Franek", matchTestCase1Source = "Frank Chu";
if(match(matchTestCase1Pattern, matchTestCase1Source)) {
    std::cout << "Yes" << "\n";
} else {
    std::cout << "No" << "\n";
}
```
 * @see
 * * Check if a string contains a string in C++ https://stackoverflow.com/questions/2340281/check-if-a-string-contains-a-string-in-c
 * * C++ 中 `string::find()` 函数和 `string::npos` 函数的使用 https://www.cnblogs.com/lixuejian/p/10844905.html
 * * std::string::find 空字符串 返回结果不是 string::npos https://blog.csdn.net/yasi_xi/article/details/7305443
 * * 查找字符串，支持通配符查找，通配符包含 .和? https://blog.csdn.net/wang_anna/article/details/117019969
 * * 通配符（？，*）与正则表达式 https://blog.csdn.net/yh13572438258/article/details/121545229
 * * str::string和wchar_t*相互转化 https://blog.csdn.net/zddblog/article/details/38670349
 * * C++：wchar_t* & string相互转换 https://codeantenna.com/a/uDA7bfXIkF
 * * C++11之正则表达式（regex_match、regex_search、regex_replace） https://blog.csdn.net/qq_45254369/article/details/125491031
 * @details
不区分大小写，需包含头文件
From: 查找字符串，支持通配符查找，通配符包含 .和? https://blog.csdn.net/wang_anna/article/details/117019969
```cpp
#include<regex>
using namespace regex_constants;
ECMAScript | icase // Case insensitive
```
 */
bool match(std::string &pattern, std::string &source) {
    auto positionOfQuestionMark = pattern.find("?");
    auto positionOfAsteriskMark = pattern.find("*");
    if(positionOfQuestionMark != std::string::npos) {
        pattern.replace(positionOfQuestionMark, 1, ".");
    }
    if(positionOfAsteriskMark != std::string::npos) {
        pattern.replace(positionOfAsteriskMark, 1, ".*");
    }

    return std::regex_match(source, std::regex(pattern));
    // return (source.find(pattern) != std::string::npos) ? true : false;
}

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
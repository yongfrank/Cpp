/*
 * @Author: Frank Chu
 * @Date: 2022-11-17 23:42:03
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-20 19:46:30
 * @FilePath: /Cpp/lab/Cpp-lab01-week11/source/AddressBook.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "AddressBook.h"

/**
 * @brief Construct a new Address Book:: Address Book object 建立空地址簿
 */
AddressBook::AddressBook() {}

/**
 * @brief 地址簿析构函数，其中必须清空联系人向量 Book Destroy the Address Book:: Address Book object 
 */
AddressBook::~AddressBook() {
    this->Book.clear();
}

/**
 * @brief 在向量中增加一个联系人
 * @param  Name             Name of Contact
 * @param  Number           Number of Contact
 * @param  Group            Group of Contact
 */
void AddressBook::AddContact(std::string& Name, std::string& Number, std::string& Group) {
    this->Book.push_back(CContact(Name, Number, Group));
}

/**
 * @test
```cpp
    AddressBook book1;
    std::string name = "Frank Chu", number = "15968126783", group = "Student";
    CContact amy = CContact(name, number, group);
    book1.Add(amy);
```
 */
void AddressBook::Add(CContact& contact) {
    this->Book.push_back(contact);
}

// /**
//  * @brief 从下标startIndex开始寻找符合匹配条件的联系人，如果找到，则返回下标，否则返回-1
//  * @param  startIndex       My Param doc
//  * @param  Name             My Param doc
//  * @param  Number           My Param doc
//  * @param  Group            My Param doc
//  * @return int 
//  */
// int Find(int startIndex, std::string& Name, std::string& Number, std::string& Group) {
//     int indexOfContact = -1;
    
//     return -1;
// }

/**
 * @test
```cpp
    AddressBook book1;
    std::string name = "Frank Chu", number = "15968126783", group = "Student";
    book1.AddContact(name, number, group);
    std::string rhsName = "APanda", rhsNumber = "22", rhsGroup = "Teacher";
    book1.AddContact(rhsName, rhsNumber, rhsGroup);
    book1.List();
    std::cout << book1[0];
    std::cout << book1[1];
    std::cout << book1[2];
```
 * @note
 * * C++ 下标运算符 [] 重载 https://www.runoob.com/cplusplus/subscripting-operator-overloading.html
 */
CContact AddressBook::operator[](int indexOfContact) {
    auto sizeOfBook = this->Book.size() - 1;
    if (indexOfContact > static_cast<int>(sizeOfBook)) {
        std::cout << "ERROR: Larger than max index, return the first item" << "\n";
        return this->Book[0];
    }
    return this->Book[indexOfContact];
}

// int AddressBook::Delete(std::string& name, std::string& number, std::string& group) {
    
// } //按条件删除联系人，返回删除的人数。如果没有删除任何人，返回0

/**
 * @test
    ```cpp
    AddressBook book1;
    std::string name = "Frank Chu", number = "15968", group = "Student";
    std::string rhsName = "APanda", rhsNumber = "22", rhsGroup = "Teacher";
    book1.AddContact(name, number, group);
    book1.AddContact(rhsName, rhsNumber, rhsGroup);
    book1.List();
    book1.Sort();
    book1.List();
    ```
 * @see
 * * C++中,结构体vector使用sort排序 https://blog.csdn.net/zhouxun623/article/details/49887555
 */
void AddressBook::Sort() {
    // std::sort(this->Book.begin(), this->Book.end(), [](const CContact& lhs, const CContact& rhs) { return lhs < rhs;});
    std::sort(this->Book.begin(), this->Book.end());
}

/**
 * @test
```cpp
    AddressBook book1;
    std::string name = "Frank Chu", number = "15968126783", group = "Student";
    std::string rhsName = "APanda", rhsNumber = "22", rhsGroup = "Teacher";
    book1.AddContact(name, number, group);
    book1.AddContact(rhsName, rhsNumber, rhsGroup);
    // book1.List();
    // book1.Sort();
    // book1.List();

    CContact frank = CContact(name, number, group);
    name = "Panda", number = "22", group = "Teacher";
    CContact panda = CContact(name, number, group);
    name = "Panda", number = "22", group = "Student";
    CContact amy = CContact(name, number, group);
    book1.AddContact(name, number, group);
    book1.List();
    book1.Sort();
    book1.List();
    book1.SortGroup();
    book1.List();
```
 */
void AddressBook::SortGroup() {
    std::sort(this->Book.begin(), this->Book.end(), pr);
}

/**
 * @code {.cpp}
 * // vector::begin/end
 * #include <iostream>
 * #include <vector>
 * int main ()
 * {
 *      std::vector<int> myvector;
 *      for (int i=1; i<=5; i++) myvector.push_back(i);
 *      std::cout << "myvector contains:";
 *      for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
 *          std::cout << ' ' << *it;
 *      std::cout << '\n';
 *      return 0;
 * }
 * @endcode
 * @see 
 * public member function 
 * @n std::vector::end
 * @n https://cplusplus.com/reference/vector/vector/end/
 */
void AddressBook::List() {
    /**
     * @brief Iterator Address Book
     * @param  it  iterator abbreviation, `*it` is de-pointer of iterator(address pointer type)
     */
    for(std::vector<CContact>::iterator it = this->Book.begin(); it != this->Book.end(); ++it) { // can also be it++
        std::cout << *it;
    }
}

// /**
//  * @brief 输出某组别中的所有联系人
//  * @param  group group name
//  * @see
//  * * CContact::PatternMatch()
//  */
// void AddressBook::ListGroup(std::string& group) {

// }
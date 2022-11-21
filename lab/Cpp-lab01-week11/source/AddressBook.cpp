/*
 * @Author: Frank Chu
 * @Date: 2022-11-17 23:42:03
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-21 23:23:36
 * @FilePath: /Cpp/lab/Cpp-lab01-week11/source/AddressBook.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include "AddressBook.h"

/// @brief very good
AddressBook::AddressBook() {}

AddressBook::~AddressBook()
{
    this->Book.clear();
}

void AddressBook::AddContact(std::string &Name, std::string &Number, std::string &Group)
{
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
void AddressBook::Add(CContact &contact)
{
    this->Book.push_back(contact);
}

int AddressBook::Find(int startIndex, std::string &NamePattern, std::string &NumberPattern, std::string &GroupPattern)
{
    int indexOfContact = -1;

    for (std::vector<CContact>::iterator iteratorOfContact = this->Book.begin() + startIndex; iteratorOfContact != this->Book.end(); iteratorOfContact++)
    {
        if ((*iteratorOfContact).PatternMatch(NamePattern, NumberPattern, GroupPattern))
        {
            indexOfContact = iteratorOfContact - Book.begin();
            return indexOfContact;
        }
        indexOfContact = -1;
    }
    return indexOfContact;
}

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
CContact AddressBook::operator[](int indexOfContact)
{
    auto sizeOfBook = this->Book.size() - 1;
    if (indexOfContact > static_cast<int>(sizeOfBook))
    {
        std::cout << "ERROR: Larger than max index, return the first item"
                  << "\n";
        return this->Book[0];
    }
    return this->Book[indexOfContact];
}

/**
 * @see
 * AddressBook::Find()
 */
int AddressBook::Delete(std::string &name, std::string &number, std::string &group)
{
    std::vector<int> indexOfDeletion;
    int deleteIndex = 0;
    deleteIndex = this->Find(0, name, number, group);
    indexOfDeletion.push_back(deleteIndex);
    std::cout << "Deleting " << this->Book[deleteIndex];

    if (deleteIndex != -1)
    {
        this->Book.erase(this->Book.begin() + deleteIndex);
        while (deleteIndex != -1)
        {
            // if(this->indexSafe(deleteIndex)) {
            deleteIndex = this->Find(0, name, number, group);
            if (deleteIndex != -1)
            {
                std::cout << "Deleting " << this->Book[deleteIndex];
                this->Book.erase(this->Book.begin() + deleteIndex);
            }
            // } else {
            //     deleteIndex = -1;
            // }
            indexOfDeletion.push_back(deleteIndex);
        }
    }
    // for(std::vector<CContact>::iterator itOfContacts = this->Book.begin(); itOfContacts != this->Book.end(); itOfContacts++) {

    // }
    return indexOfDeletion.size() - 1;
}

bool AddressBook::indexSafe(int index)
{
    return (index <= (int)this->Book.size()) ? true : false;
}

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
void AddressBook::Sort()
{
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
void AddressBook::SortGroup()
{
    std::sort(this->Book.begin(), this->Book.end(), pr);
}

/**
```cpp
// vector::begin/end
#include <iostream>
#include <vector>
int main ()
{
    std::vector<int> myvector;
    for (int i=1; i<=5; i++) myvector.push_back(i);
    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
    return 0;
}
```
 * @endcode
 * @see
 * public member function
 * @n std::vector::end
 * @n https://cplusplus.com/reference/vector/vector/end/
 */
void AddressBook::List()
{
    /**
     * @brief Iterator Address Book
     * @param  it  iterator abbreviation, `*it` is de-pointer of iterator(address pointer type)
     */
    for (std::vector<CContact>::iterator it = this->Book.begin(); it != this->Book.end(); ++it)
    { // can also be it++
        std::cout << *it;
    }
}

/**
 * @see
 * * CContact::PatternMatch()
 * * 创建空std::string的最佳方式 http://zplutor.github.io/2016/02/18/best-way-to-create-empty-std-string/
 */
void AddressBook::ListGroup(std::string &group)
{
    for (std::vector<CContact>::iterator iteratorOfContact = this->Book.begin(); iteratorOfContact != this->Book.end(); iteratorOfContact++)
    {
        std::string name = "", phoneNumber = "";
        if ((*iteratorOfContact).PatternMatch(name, phoneNumber, group))
        {
            std::cout << *iteratorOfContact;
        }
    }
}

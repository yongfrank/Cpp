/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 13:09:45
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-20 21:15:49
 * @FilePath: /Cpp/lab/Cpp-lab01-week11/source/main.cpp
 * @Description: 
 * VSCodeでDoxygenのプレビューをしたい！
 * https://qiita.com/hakua-doublemoon/items/c328a7bf0bc7a1fbef14
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "MainFunction.cpp"
#include <iostream>
#include <string>

/**
 * @brief 
 * @return int 
 * @test
```cpp
add frank 110 stu
add panda 120 tea
add amy 110 tea
```
 * @todo convert commandOfInput into ENUM
 */
int main() {
    // int position;
    AddressBook Book;
    std::string commandOfInput;

    while (true)
    {
        std::cout << "AddressBook>";
        std::cin >> commandOfInput;

        // Can strcmp() work with strings in c++? https://stackoverflow.com/questions/25360218/can-strcmp-work-with-strings-in-c
        if(commandOfInput.compare("help") == 0) {
            MainFunction::HelpCommand();
        }
        if(commandOfInput.compare("add") == 0) {
            MainFunction::AddCommand(Book);
        }
        if(commandOfInput.compare("list") == 0) {
            MainFunction::ListCommand(Book);
        }
        if(commandOfInput.compare("sort") == 0) {
            MainFunction::SortCommand(Book);
        }
        if(commandOfInput.compare("sortgroup") == 0) {
            MainFunction::SortGroupCommand(Book);
        }
        if(commandOfInput.compare("exit") == 0) {
            MainFunction::ExitCommand();
            break;
        }
    }
    
}


// // test main()
// int main() {
//     AddressBook book1;
//     std::string name = "Frank Chu", number = "15968126783", group = "Student";
//     book1.AddContact(name, number, group);
//     std::string rhsName = "APanda", rhsNumber = "22", rhsGroup = "Teacher";
//     book1.AddContact(rhsName, rhsNumber, rhsGroup);
//     book1.List();
//     std::cout << book1[0];
//     std::cout << book1[2];
//     // book1.List();
//     // book1.Sort();
//     // book1.List();

//     CContact frank = CContact(name, number, group);
//     name = "Panda", number = "22", group = "Teacher";
//     CContact panda = CContact(name, number, group);
//     name = "Panda", number = "22", group = "Student";
//     CContact amy = CContact(name, number, group);
//     book1.Add(amy);
// }

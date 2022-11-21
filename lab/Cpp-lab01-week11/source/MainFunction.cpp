/*
 * @Author: Frank Chu
 * @Date: 2022-11-20 20:02:30
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-20 21:15:05
 * @FilePath: /Cpp/lab/Cpp-lab01-week11/source/mainFunction.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include "CContact.h"
#include "CContact.cpp"
#include "AddressBook.h"
#include "AddressBook.cpp"

/**
 * @brief Explanation of some functions used in main.cpp
 */
class MainFunction
{
private:

public:
    MainFunction() {};
    ~MainFunction() {};

    /**
     * @brief 
     * @note
     * C语言中system("pause")是什么作用和意思 https://blog.csdn.net/haiross/article/details/45093351 \n
     * system 就是调用从程序中调用系统命令（和 shell 命令）。
     * system("pause")就是从程序里调用“pause”命令; 
     * 而“pause”这个系统命令的功能很简单，
     * 就是在命令行上输出一行类似于“Press any key to exit”的字，等待用户按一个键，然后返回。 \n
     * linux下运行程序出现“sh: 1: pause: not found” https://www.cnblogs.com/feifanrensheng/articles/8696007.html \n
     * 一般在windows平台写代码为了在终端看到运行结果，所以加入了 `system("pause");` 语句。
     * 但是在linux下shell里pause不再是一条命令，因此会出现sh: 1: pause: not found的提示。
     * 打开源文件删除system("pause");语句即可。
     * 另外在用windows上VS编写的代码，在linux下运行必须先转码才行，否则会出现类似在ubuntu/linux系统下system是包含在stdlib.h头文件中的
     * 要实现类似功能的方法，要么编程system("read"); 
     * 要么不用system命令，直接getchar()；不过跟system("pause")的区别是，后者是按任意键继续，但是前面两种方法都是按回车键继续的。
     */
    static void SystemPauseFunction() { system("pause"); }

    /**
     * @brief `AddressBook>help` command, print Help Manual 
     * @see
     * C++ Multiline String Literals https://linuxhint.com/c-multiline-string-literals/
     */
    static void HelpCommand() {
        const std::string longString = 
R"(Example usage:
    add NAME PHONENUMBER GROUP
    delete
    list
    sort
    sortgroup
    exit
)";
        std::cout << longString << "\n";
    }

    /**
     * @brief  `AddressBook>add` command, add new contact to Address Book in the Command Line Interface Memory
     * @param  Book  Address Book in the CLI Memory
     */
    static void AddCommand(AddressBook& Book) {
        std::string name, phoneNumber, group;
        std::cin >> name >> phoneNumber >> group;
        CContact contact(name, phoneNumber, group);
        Book.Add(contact);
    }

    /**
     * @brief `AddressBook>list` command, print all contacts in the AddressBook
     * @param  Book  Address Book in the CLI Memory
     */
    static void ListCommand(AddressBook& Book) {
        Book.List();
    }

    /**
     * @brief  `AddressBook>sort` command, sort contact in the AddressBook using string in ascii ascending order
     * @param  Book  Address Book in the CLI Memory
     */
    static void SortCommand(AddressBook& Book) {
        Book.Sort();
    }

    /**
     * @brief  `AddressBook>sortgroup` command, sort contact in the AddressBook using string in ascii ascending order
     * @param  Book  Address Book in the CLI Memory
     */
    static void SortGroupCommand(AddressBook& Book) {
        Book.SortGroup();
    }

    /**
     * @brief `AddressBook>exit` command, exit the program
     */
    static void ExitCommand() {
        
    }
};

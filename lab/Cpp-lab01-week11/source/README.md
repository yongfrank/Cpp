<!--
 * @Author: Frank Chu
 * @Date: 2022-11-21 23:17:22
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-24 16:12:45
 * @FilePath: /Cpp/lab/Cpp-lab01-week11/source/README.md
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
-->

# 实验一 Visual C++ 基于命令提示符的程序设计

## 一、 实验目的

1. 掌握基于命令提示符的人机交互界面设计；
2. 掌握类的定义和使用；
3. 掌握 vector 对象的使用方法；
4. 掌握泛型程序设计的基本方法。

## 二、实验内容

使用 STL 类模板 vecotr 实现一个“通讯录”程序，有联系人条目增加，删除，排序，查找，分组输出等功能，有一个简单的 CLI 界面。

## 三、主要程序说明

### 类的详细说明（如属性、方法）

* 5 类说明
* 5.1 `AddressBook` 类
  * Public 成员函数
  * Private 属性
  * 5.1.1 详细描述
  * 5.1.2 构造及析构函数说明
  * 5.1.3 成员函数说明
  * 5.1.4 类成员变量说明
* 5.2 `CContact` 类
  * Public 成员函数
  * Private 属性
  * 友元
  * 5.2.1 详细描述
  * 5.2.2 构造及析构函数说明
  * 5.2.3 成员函数说明
  * 5.2.4 友元及相关函数文档
  * 5.2.5 类成员变量说明

### 各方法的详细说明（方法名、参数、功能描述）

* 5.3 MainFunction 类，`main()` 函数中所用的调用对象方法的函数。
  * `MainFunction::HelpCommand()`

### 命令与对象方法的调用关系

* See MainFunction.cpp
* 5.3 MainFunction类 参考
  * `MainFunction::ExitCommand()`
  * `MainFunction::ListCommand()`
  * `MainFunction::ListGroupCommand()`
  * `MainFunction::SortCommand()`
  * `MainFunction::SortGroupCommand()`
  * `MainFunction::SystemPauseFunction()`

### 关键方法的实现（如添加、查找、删除联系人、排序等）

* Add
  * `MainFunction::AddCommand()`
  * `AddressBook::AddContact()`
* Find
  * `MainFunction::FindCommand()`
  * `AddressBook::Find()`
  * `CContact::PatternMatch()`
  * `match()`
* Delete
  * `MainFunction::DeleteCommand()`
  * `AddressBook::Delete()`

## 四、程序测试过程

* 测试列表

## 五、讨论及心得

1、实验过程中遇到的问题与解决方法

遇到了很多对于 C++ 语言特性不熟悉的部分，在经过网络上大量的查阅之后，最终解决了。

2、目前尚未解决的问题

基本上所有的函数均已实现。

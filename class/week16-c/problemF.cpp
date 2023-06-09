/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 14:58:16
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 14:59:00
 * @FilePath: /Cpp/class/week16-c/problemF.cpp
 * @Description: 
问题 F: 完美字符串
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

约翰认为字符串的完美度等于它里面所有字母的完美度之和。每个字母的完美度可以由你来分配，不同字母的完美度不同，分别对应一个1-26之间的整数。

约翰不在乎字母大小写（也就是说字母A和a的完美度相同）。给定一个字符串，输出它的最大可能的完美度。例如：dad，你可以将26分配给d，25分配给a，这样整个字符串完美度为77。

输入

多组测试数据 每组输入一个字符串S(S的长度 <= 10000)，S中没有除字母外的其他字符。
输出

由你将1-26分配给不同的字母，使得字符串S的完美度最大，输出这个完美度。
样例输入 Copy

dad
样例输出 Copy

77
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

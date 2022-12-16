/*
 * @Author: Frank Chu
 * @Date: 2022-12-16 13:45:36
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-16 13:51:58
 * @FilePath: /Cpp/class/week15-c/problemA.c
 * @Description: 
问题 A: 飞机图案
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

输出如样例所示的“飞机”图案。

    要求：每末最后一个可见符号后面不能有多余的空格。

样例输出 Copy

        *
        **
*       ***
**      ****
****************
**      ****
*       ***
        **
        *
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void getAirplane() {
    printf(
        "        *\n"
        "        **\n"
        "*       ***\n"
        "**      ****\n"
        "****************\n"
        "**      ****\n"
        "*       ***\n"
        "        **\n"
        "        *"
    );
}

int main() {
    getAirplane();
}
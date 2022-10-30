/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 12:09:09
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 12:10:23
 * @FilePath: /Cpp/lab/lab08-week9/problemI-yesIcan.cpp
 * @Description: https://www.cnblogs.com/chenlong991223/p/9977243.html
 * Problem I: 零起点学算法104——Yes,I can!
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
int main()
{
    char a[10];
    while (gets(a) != NULL) {
        printf("I am ");
        printf("%s,yes,I can!", a);
    }
    return 0;
}
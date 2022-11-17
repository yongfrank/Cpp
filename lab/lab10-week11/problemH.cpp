/*
 * @Author: Frank Chu
 * @Date: 2022-11-14 22:12:12
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-14 22:23:38
 * @FilePath: /Cpp/lab/lab10-week11/problemH.cpp
 * @Description: 问题 H: 自定义函数strcomp()，实现两个字符串的比较
 * 编写函数strcomp(char *s1, char *s2),实现两个字符串的比较，返回值为1、0或-1，分别表示s1>s2,s1=s2,s1
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "stdio.h"
#include "string.h"

int main() {
    char* lhs = NULL;
    char* rhs = NULL;
    size_t sizeTemp = 0;
    size_t sizeTempSecond = 0;
    while(getline(&lhs, &sizeTemp, stdin) > 0) {
        getline(&rhs, &sizeTempSecond, stdin);
        if(strcmp(lhs, rhs) > 0) {
            printf("1\n");
        } else if (strcmp(lhs, rhs) == 0)
        {
            printf("0\n");
        } else {
            printf("-1\n");
        }
        
    }
}
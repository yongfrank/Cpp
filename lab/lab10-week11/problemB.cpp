/*
 * @Author: Frank Chu
 * @Date: 2022-11-14 08:53:57
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-14 09:13:34
 * @FilePath: /Cpp/lab/lab10-week11/problemB.cpp
 * @Description: 问题 B: 指针：自定义函数length，调用它计算字符串的长度
 * https://blog.csdn.net/z2431435/article/details/84832783
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "stdio.h"
#include "string.h"

int getTheLengthOfString(char* strInput);
int main() {
    char* strInput = NULL;
    size_t size = 0;
    // while(gets(strInput) != NULL) {
    // while(fgets(strInput, 100, stdin) != NULL) {
    while(getline(&strInput, &size, stdin) > 0) {
        int length = getTheLengthOfString(strInput);
        // printf("%s\n", strInput);
        printf("%d\n", length - 1);
    }
}

int getTheLengthOfString(char* strInput) {
    int length = 0;
    length = strlen(strInput);
    return length;
}
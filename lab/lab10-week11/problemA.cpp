/*
 * @Author: Frank Chu
 * @Date: 2022-11-14 08:17:37
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-14 09:55:10
 * @FilePath: /Cpp/lab/lab10-week11/problemA.cpp
 * @Description: 问题 A: 输入3个字符串，按由小到大顺序输出
 * https://blog.csdn.net/z2431435/article/details/84832659
 * 输入3个字符串，按由小到大顺序输出
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "stdio.h"
#include "string.h"

void intputThreeStringAndOutputascending(char* firstStr, char* secondStr, char* thirdStr);
int main() {
    // int amount = 3;
    char firstStr[100], secondStr[100], thirdStr[100];
    while(gets(firstStr) != NULL) {
        gets(secondStr);
        gets(thirdStr);
        intputThreeStringAndOutputascending(firstStr, secondStr, thirdStr);
    }
}

void intputThreeStringAndOutputascending(char* firstStr, char* secondStr, char* thirdStr) {
    int amount = 3;
    char* addressOfString[] = { firstStr, secondStr, thirdStr };
    for (int i = 0; i < amount; i++) {
        for(int j = i + 1; j < amount; j++) {
            if(strcmp(addressOfString[i], addressOfString[j]) > 0) {
                char* temp = addressOfString[j];
                addressOfString[j] = addressOfString[i];
                addressOfString[i] = temp;
            }
        }
    }

    printf("%s\n", addressOfString[0]);
    printf("%s\n", addressOfString[1]);
    printf("%s\n", addressOfString[2]);
}
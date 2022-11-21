/*
 * @Author: Frank Chu
 * @Date: 2022-11-21 11:45:55
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-21 12:11:21
 * @FilePath: /Cpp/lab/lab11-week12/problemG.c
 * @Description: 输入一个字符串，将字符串中所有非英文字母的字符删除后输出。
```input
I Have 2 MP3.
please you declare the variable m_n_DLength10!
```
```output
IHaveMP
pleaseyoudeclarethevariablemnDLength
```
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief 
 * @param  str  String with characters to be removed
 * @note
 * C 语言实例 - 删除字符串中的特殊字符 https://www.runoob.com/cprogramming/c-examples-remove-characters-string.html
 */
void removeNotLetter(char* str) {
    int newStringIndex = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[newStringIndex] = str[i];
            newStringIndex++;
        }
    }
    str[newStringIndex] = '\0';
}

int main() {
    char str[100];

    while(fgets(str, 100, stdin) != NULL) {
        str[strcspn(str, "\n")] = '\0';
        removeNotLetter(str);
        printf("%s\n", str);
    }
    return 0;
}
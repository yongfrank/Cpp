/*
 * @Author: Frank Chu
 * @Date: 2022-11-21 11:04:20
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-21 11:44:50
 * @FilePath: /Cpp/lab/lab11-week12/problemF.c
 * @Description: 问题 F: 颠倒字符串
 * @test
```input
ABC XYZ
My god
```
```output
ZYX CBA
dog yM
```
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>  
#include <string.h>

/**
 * @brief 
 * @param  stringToBeReversedMy Param doc
 * @note
 * 题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。 https://www.runoob.com/cprogramming/c-exercise-example35.html
 */
void reverse(char* stringToBeReversed) {
    int len = 0;
    char* positionTest = stringToBeReversed;
    while(*positionTest != 0) {
        len++;
        positionTest++;
    }
    
    char tempString;
    for(int i = 0; i < len / 2; i++) {
        tempString = *(stringToBeReversed + i);
        *(stringToBeReversed + i) = *(stringToBeReversed + len - 1 - i);
        *(stringToBeReversed + len - 1 - i) = tempString;
    }
} 

int main() {
    char str[80];
    
    /**
     * @brief 
     * @see
     * * C 库函数 - fgets() https://www.runoob.com/cprogramming/c-function-fgets.html
     * * 从fgets()输入中删除尾部换行符的方法 https://juejin.cn/post/7109794485525020703
     */
    while(fgets(str, 80, stdin) != NULL) {
        str[strcspn(str, "\n")] = '\0';
        reverse(str);
        printf("%s\n", str);
    }
    
    return 0;
}

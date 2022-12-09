/*
 * @Author: Frank Chu
 * @Date: 2022-12-02 14:51:32
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-02 15:08:28
 * @FilePath: /Cpp/class/week13-c/two-dimension.c
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>

int main() {
    // char** a = {
    //     {'a', 'p', 'p'}, 
    //     {'b', 'a', 'n'}
    // };
    int** a = {{1, 2}, {3, 4}};
    printf("%s", *(a+1));
}
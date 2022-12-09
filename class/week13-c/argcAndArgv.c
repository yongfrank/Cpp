/*
 * @Author: Frank Chu
 * @Date: 2022-12-02 15:45:07
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-02 18:54:17
 * @FilePath: /Cpp/class/week13-c/argcAndArgv.c
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>

int main(int argc, char* argv[]) {
    while(argc--) {
        printf("%s %d\n", *(argv + argc), argc);        
    } 
}
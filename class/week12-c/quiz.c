/*
 * @Author: Frank Chu
 * @Date: 2022-11-25 13:40:11
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-25 13:50:57
 * @FilePath: /Cpp/class/week12-c/quiz.c
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>

int funl(char *x) {
    char *y = x;

    while (*(y++)) {
        printf("%p\n", y);
        printf("%c\n", *y);
    }
    printf("%p\n", y);
    printf("%c\n", *y);
    return (y - x - 1);
}

int main()
{
    char *strInput = "apple";
    printf("%d", funl(strInput));
    return 0;
}

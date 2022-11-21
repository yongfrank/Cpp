/*
 * @Author: Frank Chu
 * @Date: 2022-11-21 12:22:10
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-21 15:21:53
 * @FilePath: /Cpp/lab/lab11-week12/problemI.c
 * @Description: 问题 I: 程序填充（字符串、函数、指针）：删除数字字符
 * 下面程序中中"____ N ____"是根据程序功能需要填充部分，请完成程序填充（注意：不得加行、减行、加句、减句，否则后果自负）。
 * 该程序功能：调用函数f，从字符串中删除所有的数字字符。
```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void f(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (isdigit(s[i]))
            ____1____;
        else
            ____2____;
    }
}
void main()
{
    char str[80];
    gets(str);
    f(str);
    puts(str);
}
```
```input
how 3 are 78you?
```
```output
how  are you?
```
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h> // isdigit()
void f(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (isdigit(s[i]))
            // for(int k = i; s[k] != '\0'; k++) s[k] = s[k + 1];
            // C 库函数 - memmove() https://www.runoob.com/cprogramming/c-function-memmove.html
            // C 库函数 - strlen() https://www.runoob.com/cprogramming/c-function-strlen.html
            // C 标准库 - <string.h> https://www.runoob.com/cprogramming/c-standard-library-string-h.html
            /**
             * @test
            ```
            1 23\0
            12345
            i = 1
            s + i => s + 1
            s + i + i => s + 2
            strlen(s) = 4
            ```
             */
            memcpy(s + i, s + i + 1, strlen(s) - i);
            // memmove(s + i, s + i + 1, strlen(s) - i);
        else
            i++;
    }
}
int main()
{
    char str[80];
    gets(str);
    f(str);
    puts(str);
}
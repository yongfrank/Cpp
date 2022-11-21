/*
 * @Author: Frank Chu
 * @Date: 2022-11-21 08:13:37
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-21 08:37:24
 * @FilePath: /Cpp/lab/lab11-week12/problemA.c
 * @Description: 问题 A: 结构体：计算输入日期是该年的第几天
 * 多组测试数据，每组输入年-月-日
 * 输出其在该年中对应的天数
 * 2006-10-1
 * 274
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>

/**
 * @brief struct of Date, include year, month and day.
 * @test
```c
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book = {"C 语言", "RUNOOB", "编程语言", 123456};
```
 * @note
 * C 结构体 https://www.runoob.com/cprogramming/c-structures.html
 */
struct Date
{
    int year, month, day;
};

/**
 * @brief
 * @param  year  Judge if it's leap year
 * @return int  days in February
 * @see LeetCode:1154. 一年中的第几天 https://juejin.cn/post/7133780610975268900
 */
int DaysInTheFeb(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        return 29;
    }
    return 28;
}

int main()
{
    struct Date date;
    while (scanf("%d-%d-%d", &date.year, &date.month, &date.day) != EOF)
    {
        int amount[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        amount[1] = DaysInTheFeb(date.year);

        int dayOfTheYear = 0;
        for (int i = 0; i < date.month - 1; i++)
        {
            dayOfTheYear += amount[i];
        }
        dayOfTheYear += date.day;
        printf("%d\n", dayOfTheYear);
    }
}
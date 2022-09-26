/*
 * @Author: Frank Chu
 * @Date: 2022-09-26 08:43:18
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-26 08:54:35
 * @FilePath: /Cpp/lab/lab03-MonWeek4/ProblemO.c
 * @Description: 问题 O: 输入数字1-7，打印出对应的英文（Monday-Sunday）.
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    unsigned int week;

    //  Declare constatnt name of weeks
    //  C program to enter week number and print day name of week: https://aticleworld.com/c-program-to-print-day-name-of-week/
    const char* weekDays[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

    scanf("%u", &week);

    if(week > 0 && week < 8) {
        printf("%s\n", weekDays[week - 1]);
    }

    return 0;
}
/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 10:07:59
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 10:13:25
 * @FilePath: /Cpp/lab/lab06-week7/problemC.cpp
 * @Description: https://cloud.tencent.com/developer/article/1890317
 * 川川菜鸟 输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
int main()
{
    char c;
    int letter = 0, space = 0, number = 0, others = 0;

    //用getchar获取字符，换行结束
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) //大写或者小写字母
            letter++;
        else if (c >= '0' && c <= '9')
            number++;
        else if (c == ' ') //空格
            space++;
        else
            others++;
    }
    printf("charaters: %d\nblanks: %d\ndigitals: %d\nothers: %d\n", letter, space, number, others);
    return 0;
}
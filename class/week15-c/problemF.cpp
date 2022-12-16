/*
 * @Author: Frank Chu
 * @Date: 2022-12-16 14:41:35
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-16 15:19:15
 * @FilePath: /Cpp/class/week15-c/problemF.cpp
 * @Description: 
问题 F: 完美字符串
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

约翰认为字符串的完美度等于它里面所有字母的完美度之和。每个字母的完美度可以由你来分配，不同字母的完美度不同，分别对应一个1-26之间的整数。

约翰不在乎字母大小写（也就是说字母A和a的完美度相同）。给定一个字符串，输出它的最大可能的完美度。例如：dad，你可以将26分配给d，25分配给a，这样整个字符串完美度为77。

输入

多组测试数据 每组输入一个字符串S(S的长度 <= 10000)，S中没有除字母外的其他字符。
输出

由你将1-26分配给不同的字母，使得字符串S的完美度最大，输出这个完美度。
样例输入 Copy

dad
样例输出 Copy

77
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

// #include <stdio.h>
// #include <stdlib.h>

// struct Characters {
//     int index;
//     int count;
// };

// int compare(const void* lhs, const void* rhs) {
//     struct Characters* l = (struct Characters*)lhs;
//     struct Characters* r = (struct Characters*)rhs;
//     return r->count - l->count;
// }

// int getPerfectNumber(char* stringToCalculate) {
//     struct Characters chars[26];
//     for (int i = 0; i < 26; i++) {
//         chars[i].index = i;
//         chars[i].count = 0;
//     }
//     for(int i = 0; stringToCalculate[i] != '\0'; i++) {
//         if (stringToCalculate[i] >= 'a' && stringToCalculate[i] <= 'z') {
//             chars[stringToCalculate[i] - 'a'].count++;
//         } else if (stringToCalculate[i] >= 'a' && stringToCalculate[i] <= 'z') {
//             chars[stringToCalculate[i] - 'A'].count++;
//         }
//     }
//     qsort(chars, sizeof(chars) / sizeof(chars[0]), sizeof(chars[0]), compare);
//     int sum = 0;
//     for (int i = 0; i < 26; i++) {
//         // printf("%d %d, ", chars[i].index, chars[i].count);
//         sum += (26 - i) * chars[i].count;
//     }
    
//     return sum;
// }

// int main() {
//     char str[10000];
//     while (scanf("%s", str) != EOF) {
//         printf("%d\n", getPerfectNumber(str));
//     }
//     return 0;
// }

#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    char str[10005];
    int num[27], t, len, sum;

    while(scanf("%s", &str) != EOF)
    {
        sum = 0;
        len = strlen(str);

        memset(num, 0, sizeof(num));

        for(int i = 0; i < len; i++)
        {
            t = str[i] - 'A';

            if(t > 26)
            {
                t = str[i] - 'a';
                num[t]++;
            }

            else
                num[t]++;
        }

        sort(num, num+27);

        for(int i = 26; i > 0; i--)
        {
            sum += i * num[i];
        }

        printf("%d\n", sum);
    }

    return 0;
}
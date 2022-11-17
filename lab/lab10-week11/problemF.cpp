/*
 * @Author: Frank Chu
 * @Date: 2022-11-14 16:17:11
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-14 16:49:44
 * @FilePath: /Cpp/lab/lab10-week11/problemF.cpp
 * @Description: 问题 F: 调用自定义函数search(int list[], int n),在数组中查找某个数
 * 输入10个整数存储到数组a,再输入一个整数x,在数组a中查找x,若找到则输出相应的下标，否则显示"Not found"。
 * 要求定义和调用函数search(int list[], int n, int x),在数组list中查找元素x，若找到则返回相应下标，否则返回-1.
 * 多组测试数据，每组先输入10个整数，再输入一个x
 * 1 2 3 4 5 6 7 8 9 10 5
 * 1 2 3 4 5 6 7 8 9 10 20
 * 4
 * Not found
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include "stdio.h"
#include "string.h" //strrchr

int searchFor(int searchNum, int *arrayOfInput, int size);

int main()
{
    int arrayOfInput[10];
    while (scanf("%d", &arrayOfInput[0]) != EOF)
    {
        for (int i = 1; i < 10; i++)
        {
            scanf("%d", &arrayOfInput[i]);
        }
        int searchNum;
        scanf("%d", &searchNum);
        int index = searchFor(searchNum, arrayOfInput, sizeof(arrayOfInput) / sizeof(*arrayOfInput));
        if (index != -1)
        {
            printf("%d\n", index);
        }
        else
        {
            printf("Not found\n");
        }
    }
}

int searchFor(int searchNum, int *arrayOfInput, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (searchNum == arrayOfInput[i])
        {
            return i;
        }
    }
    return -1;
}

// int main() {
//     int a[100];

//     while (scanf("%d", &a[0]) != EOF)
//     {
//         for(int i = 1; i < 10; i++) {
//             scanf("%d", &a[i]);
//         }
//         printf("Finished\n");
//         int searchNumer;
//         scanf("%d", &searchNumer);
//         printf("%d\n", searchNumer);

//         char* position;
//         // char* strrchr(      char* __s, int __c) {return __libcpp_strrchr(__s, __c);}
//         position = strrchr(a, searchNumer);

//         printf("%s", position);
//     }

// }
/*
 * @Author: Frank Chu
 * @Date: 2022-12-10 09:29:04
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-10 10:11:08
 * @FilePath: /Cpp/lab/lab14-week15/problemA-memory.c
 * @Description: 
问题 A: 动态申请内存（要求用指针完成）
[命题人 : 外部导入]
时间限制 : 3.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

malloc是一个动态申请内存的函数，使用时需加头文件#include<malloc.h>
如申请3个int型的空间：
int *p=NULL；
p=(int *)malloc(sizeof(int)*3);
现要求你用动态申请内存的方式，输入n个整数，存到申请的内存空间里，并按照输入相反的顺序输出


一般，在p不用后，我们用
free(p);
释放内存

输入

第一行，输入一个整数n
第二行，输入n个整数

输出

输出n行，每行一个整数，顺序为原来输入的反序

样例输入 Copy

3
2 3 4
样例输出 Copy

4
3
2
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p = NULL;
    int n;
    scanf("%d", &n);
    p = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", *(p + n - i - 1));
        if(i != n - 1)
            printf("\n");
    }
    printf("\n");
}
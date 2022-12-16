/*
 * @Author: Frank Chu
 * @Date: 2022-12-12 08:45:12
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-12 08:59:18
 * @FilePath: /Cpp/lab/lab14-test-week15/problemEBubbleSort.c
 * @Description: https://blog.csdn.net/a2459956664/article/details/51244572
 * 冒泡排序的交换次数
问题 E: 冒泡排序次数(bubble)
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

给定一个 1∼n 的排列a0,a1,…an−1 , 求对这个数列进行冒泡排序所需要的交换次数
（冒泡排序是每次找到满足 ai>ai+1的 i，并交换 ai和 ai+1，直到这样的 i 不存在为止的算法）。
输入

第一行为一个整数 n 。
输出

输出一个整数，表示冒泡排序所需要的交换次数。
样例输入 Copy

5
1 5 3 4 2
样例输出 Copy

5
提示

60%的数据 ai≤5∗103 

100% 的数据 ai≤5∗105 

n<=1000 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void swapTwoValue(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int bubbleSortTimes(int n) {
    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int times = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swapTwoValue(&array[j], &array[j + 1]);
                times++;
            }
        }
    }
    return times;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", bubbleSortTimes(n));
}
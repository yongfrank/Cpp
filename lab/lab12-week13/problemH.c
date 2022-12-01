/*
 * @Author: Frank Chu
 * @Date: 2022-11-28 08:31:30
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-28 08:56:07
 * @FilePath: /Cpp/lab/lab12-week13/problemH.c
 * @Description: 兔子繁殖问题。
 * 设有一对新生的兔子，从第三个月开始他们每个月月初都生一对兔子，新生的兔子从第三个月月初开始又每个月生一对兔子。
 * 按此规律，并假定兔子没有死亡，n(n<=20)个月月末共有多少个兔子？
3

2
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int fibonacciLoopRabbits(int months);

/**
 * @brief 
 * @param  months           My Param doc
 * @param  offSpring        My Param doc
 * @return int 
 * @note
 * C语言实现函数重载 https://blog.csdn.net/susidian/article/details/69938695
 */
int fibonacciLoopRabbitsIter(int months);
int main() {
    int month;
    while(scanf("%d", &month) != EOF) {
        printf("%d\n", fibonacciLoopRabbits(month));
        // printf("%d\n", fibonacciLoopRabbitsIter(month));
    }
}

int fibonacciLoopRabbits(int months) {
    if(months == 1 || months == 2) return 1;
    return fibonacciLoopRabbits(months - 1) + fibonacciLoopRabbits(months - 2);
}

int fibonacciLoopRabbitsIter(int months) {
    if(months == 1) return 1;
    if(months == 2) return 2;
    int fn1 = 1;
    int fn2 = 1;
    for(int i = 3; i <= months; i++) {
        int temp = fn1 + fn2;
        fn2 = fn1;
        fn1 = temp;
    }
    return fn1;
}
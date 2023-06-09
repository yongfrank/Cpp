/*
 * @Author: Frank Chu
 * @Date: 2022-12-19 09:15:38
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-19 09:52:30
 * @FilePath: /Cpp/lab/lab15-week16-c/problemC.c
 * @Description: 
问题 C: 深入浅出学算法015-水手分椰子
[命题人 : 外部导入]
时间限制 : 5.000 sec  内存限制 : 64 MB

提交问题列表
题目描述

n个水手来到一个岛上，采了一堆椰子后，因为疲劳都睡着了。一段时间后，第一个水手醒来，悄悄地将椰子等分成n份，多出一个椰子，便给了旁边的猴子，然后自己藏起一份，再将剩下的椰子重新合在一起，继续睡觉。
不久，第二名水手醒来，同样将椰子了等分成n份，恰好也多出一个，也给了猴子。然而自己也藏起一份，再将剩下的椰子重新合在一起。以后每个水手都如此分了一次并都藏起一份，也恰好都把多出的一个给了猴子。
第二天，n个水手醒来，发现椰子少了许多，心照不喧，便把剩下的椰子分成n份，恰好又多出一个，给了猴子。请问水手最初最少摘了多少个椰子？

输入

多组测试数据，每组输入1个整数n（1 < n <= 9)

输出

对于每组测试数据输出一行，值为最初摘的椰子数

样例输入 Copy

5
样例输出 Copy

15621
提示

多种可能性的情况下只求最小值
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

long long calculateCoconut(int numberOfSailor) {
    double startCoconutsPerSailor = 0;
    while(1) {
        long long coconutBeforeDivide = startCoconutsPerSailor * numberOfSailor + 1;
        for(int i = 0; i < numberOfSailor; i++) {
            coconutBeforeDivide = coconutBeforeDivide * (numberOfSailor);
            if(coconutBeforeDivide % (numberOfSailor - 1) != 0) {
                break;
            }
            coconutBeforeDivide = coconutBeforeDivide / (numberOfSailor - 1) + 1;
            if(i == (numberOfSailor - 1)) {
                return coconutBeforeDivide;
            }
        }
        startCoconutsPerSailor++;
    }
}

int main() {
    int numberOfSailor;
    while(scanf("%d", &numberOfSailor) != EOF) {
        printf("%lld\n", calculateCoconut(numberOfSailor));
    }
}
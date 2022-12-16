/*
 * @Author: Frank Chu
 * @Date: 2022-12-10 15:59:27
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-10 16:02:30
 * @FilePath: /Cpp/lab/lab14-week15/problemG.c
 * @Description: 
问题 G: 深入浅出学算法005-数7
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 64 MB

提交问题列表
题目描述

逢年过节，三五好友，相约小聚，酒过三旬，围桌数七。 “数七”是一个酒桌上玩的小游戏。就是按照顺序，
某人报一个10以下的数字，然后后面的人依次在原来的数字上加1，并喊出来，当然如果要喊的数包含7或者是7的倍数，
那么不能直接喊，可以敲一下筷子，否则就算输，要罚酒一杯。
输入

多组测试数据，先输入整数T表示组数， 每组测试数据输入一个10以下的正整数，
输出

对于每组测试数据，输出在一行，要求从小到大输出所报数（含）到100之间所有不能喊的数字
样例输入 Copy

1
3
样例输出 Copy

7 14 17 21 27 28...
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);
    while (testCases--) {
        int numberCantSay;
        scanf("%d", &numberCantSay);
        for (int i = numberCantSay; i <= 100; i++) {
            if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}
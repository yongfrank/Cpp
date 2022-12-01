/*
 * @Author: Frank Chu
 * @Date: 2022-11-27 11:35:00
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-28 06:41:52
 * @FilePath: /Cpp/lab/lab12-week13/problemK.c
 * @Description: 问题 K: 切煎饼
 * 王小二自夸刀工不错，有人放一张大的圆煎饼在砧板上，问他:饼不允许离开砧板，切100刀最多能切多少块？
1
2
3

2
4
7
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int cutPancake(int cutTimes);

int main() {
    int cutTimes;
    while (scanf("%d", &cutTimes) != EOF)
    {
        printf("%d\n", cutPancake(cutTimes));
    }
    
}

int cutPancake(int cutTimes) {
    if(cutTimes == 1) { return 2; }
    return cutPancake(cutTimes - 1) + cutTimes;
}
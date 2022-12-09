/*
 * @Author: Frank Chu
 * @Date: 2022-12-04 22:38:33
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-05 14:37:31
 * @FilePath: /Cpp/lab/lab13-week14/problemJ-FloorTile-Tribonacci.cpp
 * @Description: 
 * https://blog.csdn.net/weixin_45485719/article/details/103219960
 * 1337: 深入浅出学算法032-骨牌铺法
 * https://www.twblogs.net/a/5e54a5b1bd9eee2117c54a70/?lang=zh-cn
 * 青蛙过河 猴子爬山 兔子繁殖 开宝箱2 找气球 指针函数 铺地砖
 * 一共有 36 个台阶，每次只能走 1 或 2 或 3 个台阶，一共有多少种走法？ - 消失的苦猫的回答 - 知乎
 * https://www.zhihu.com/question/391879652/answer/1193117578
问题 J: 铺地砖
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 64 MB

提交问题列表

题目描述

元旦过去了，新年大酬宾活动也已经告一段落了。陈盖历望着堆在仓库的瓷砖，很无聊的他把这些瓷砖裁成很多1X1 1X2 1X3的小瓷砖，
然后他把这些小瓷砖排在地上画的一个1*n的长方形里。问铺满这个长方形共有多少种方法？
输入

首先输入一个整数T,表示有T组测试数据 然后是T行，每行输入1个正整数n(n<=50)
输出

对于每个n输出铺的方法种数
样例输入 Copy

3
1
2
3
样例输出 Copy

1
2
4
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void calculateTribonacci(int* tribonacciArray) {
    tribonacciArray[0] = 1;
    tribonacciArray[1] = 2;
    tribonacciArray[2] = 4;
    for (int i = 3; i < 50; i++) {
        tribonacciArray[i] = tribonacciArray[i - 1] + tribonacciArray[i - 2] + tribonacciArray[i - 3];
    }
}
int main() {
    int numberOfCases;
    int tribonacci[51];
    calculateTribonacci(tribonacci);
    while(scanf("%d", &numberOfCases) != EOF) {
        int testCase;
        for (int i = 0; i < numberOfCases; i++) {
            scanf("%d", &testCase);
            printf("%d\n", tribonacci[testCase - 1]);
        }
    }
}
/*
 * @Author: Frank Chu
 * @Date: 2022-12-19 09:08:24
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-19 09:11:07
 * @FilePath: /Cpp/lab/lab15-week16-c/questionA.c
 * @Description: 
问题 A: 象棋比赛
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

1月6日,教职工象棋协会在6号楼办了一次比赛,很多老师都参加了。比赛共进行了5轮，赢1局积3分，和了1分，输了0分，你能帮忙算一下各位老师的积分吗？

输入

多组测试数据，先输入一个整数t,表示参加的人数,然后输入t行，每行输入5个整数表示5局的胜负情况，其中1代表胜，2代表和，3代表输

输出

对于每组测试数据输出1行，为该老师最后的积分

样例输入 Copy

2
1 1 1 1 1
1 2 3 3 3
样例输出 Copy

15
4
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int calculateScore(int result[]) {
    int score = 0;
    for (int i = 0; i < 5; i++) {
        if (result[i] == 1) {
            score += 3;
        } else if (result[i] == 2) {
            score += 1;
        }
    }
    return score;
}

int main() {
    int t;
    scanf("%d", &t);
    int result[5];
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &result[j]);
        }
        printf("%d\n", calculateScore(result));
    }
}
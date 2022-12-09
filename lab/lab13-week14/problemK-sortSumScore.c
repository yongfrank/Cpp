/*
 * @Author: Frank Chu
 * @Date: 2022-12-05 14:38:32
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-05 17:56:45
 * @FilePath: /Cpp/lab/lab13-week14/problemK-sortSumScore.c
 * @Description: 
问题 K: 网课排序
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

网课终于结束了。
很多同学也回到学校上课了。
HZSjYJ决定对网课上的好的前五名的学校进行奖励和宣传。他们挑选了语文数学英语三门课，并对每个学校三门课进行了打分。
当然奖励排名规则如下：
1 三门课总分高的排在前面
2 总分相同，则语文高的排在前面
3 如果总分和语文都相同，则序号在前的排在前面（序号是JYJ事先定好的，就是输入顺序）
输入

第一行输入一个整数n,表示学校数
然后是n行，每行3个数字，分别代表1个学校的语文数学英语的打分
输出

输出5行，分别是排名前5的学校（按照排名输出），每行2个整数，为序号和总分
样例输入 Copy

6
90 67 80
87 66 91
78 89 91
88 99 77
67 89 64
78 89 98
样例输出 Copy

6 265
4 264
3 258
2 244
1 237
提示

n<=300
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>

struct scoreOfStudent {
    int id;
    int score;
    int chinese, math, english;
};

int qsortCompare(const void* lhs, const void* rhs) {
    // return ((struct scoreOfStudent*)rhs)->score > ((struct scoreOfStudent*)lhs)->score;
    struct scoreOfStudent* l = (struct scoreOfStudent*)lhs;
    struct scoreOfStudent* r = (struct scoreOfStudent*)rhs;
    if (l->score != r->score) {
        return r->score - l->score;
    } else if (l->chinese != r->chinese) {
        return r->chinese - l->chinese;
    } else {
        return l->id - r->id;
    }
}

int main() {
    int testCases;
    // while(scanf("%d", &testCases) != EOF) {
        scanf("%d", &testCases);
        struct scoreOfStudent* scoresList = (struct scoreOfStudent*)malloc(sizeof(struct scoreOfStudent) * testCases);
        for(int i = 0; i < testCases; i++) {
            int chinese, math, english;
            scanf("%d %d %d", &chinese, &math, &english);
            int sumOfScore = chinese + math + english;
            (scoresList + i)->id = i + 1;
            (scoresList + i)->score = sumOfScore;
            (scoresList + i)->chinese = chinese;
            (scoresList + i)->math = math;
            (scoresList + i)->english = english;
        }
        qsort(scoresList, testCases, sizeof(struct scoreOfStudent), qsortCompare);
        for(int i = 0; i < (testCases > 5 ? 5 : testCases); i++) {
            printf("%d %d", (scoresList + i)->id, (scoresList + i)->score);
            if(i != (testCases > 5 ? 5 : testCases) - 1) {
                printf("\n");
            }
        }
    // }
}
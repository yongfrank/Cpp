/*
 * @Author: Frank Chu
 * @Date: 2022-12-04 22:35:24
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-05 09:43:45
 * @FilePath: /Cpp/lab/lab13-week14/problemI-FindBallon.c
 * @Description: 
 * https://www.twblogs.net/a/5e54a5b1bd9eee2117c54a70/?lang=zh-cn
 * 青蛙过河 猴子爬山 兔子繁殖 开宝箱2 找气球 指针函数 铺地砖
问题 I: 找气球
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

zstu集训队经常举办月赛,但是气球经常不够.现有多个桶,每个桶有一种颜色,每个桶可能对应多个题,给定每个题对应的桶,打比赛的时候,经常某道题被发现是水题,但是该颜色的气球没有了,
所以quxing201606只能用另一种颜色的气球代替,即把某个桶颜色改成另一种颜色.quxing201606还想知道某道题是什么颜色(属于的桶的颜色).(必须使用指针数组完成!!!)

输入

多组测试,两个数n,m,(n<=100)表示n个题,(m<=100)表示m个桶.接下来m个数,第i个数表示第i个桶对应的颜色.然后n个数,表示第i题属于哪个桶.
接下来一个q(<=100),表示q个操作,然后q行,每行第一个op,表示是什么操作.op为1时,两个数x,y,表示把x个桶的颜色变化为y.op为2时,一个数x,表示查询第x题的气球颜色

输出

对于每个op为2的操作输出一个数,表示该题对应的气球是什么颜色

样例输入 Copy

3 2
3 4
1 1 2
3
2 1
1 1 2
2 2
样例输出 Copy

3
2
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numberOfQuestions, numberOfBuckets;
    while(scanf("%d %d", &numberOfQuestions, &numberOfBuckets) != EOF) {

        int* buckets;
        buckets = (int*)malloc(sizeof(int) * numberOfBuckets);
        for(int i = 0; i < numberOfBuckets; i++) {
            scanf("%d", buckets + i);
        }
        int* questions;
        questions = (int*)malloc(sizeof(int) * numberOfQuestions);
        for(int i = 0; i < numberOfQuestions; i++) {
            scanf("%d", questions + i);
        }
        int numberOfOperations;
        scanf("%d", &numberOfOperations);
        for(int i = 0; i < numberOfOperations; i++) {
            int operation;
            scanf("%d", &operation);
            if(operation == 1) {
                int bucketToBeChanged, newColor;
                scanf("%d %d", &bucketToBeChanged, &newColor);
                *(buckets + bucketToBeChanged - 1) = newColor;
            } else if (operation == 2) {
                int questionToBeChecked;
                scanf("%d", &questionToBeChecked);
                printf("%d\n", *(buckets + *(questions + questionToBeChecked - 1) - 1));
            }
        }
    }
}
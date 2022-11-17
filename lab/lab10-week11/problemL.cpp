/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 12:12:30
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-16 12:22:57
 * @FilePath: /Cpp/lab/lab10-week11/problemL.cpp
 * @Description: o L: 12306
 *  多组测试数据，先输入一个整数T,表示组数，然后再输入t组测试数据，
 *  每组数据先输入1个整数k代表k个同学去用抢票软件买了车票，随后是k行，每行输入2个整数n和m，代表第n分钟有同学买了m元的票(n不大于20）
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "stdio.h"

struct Student
{
    int time;
    int price;
};


int main() {
    int T;
    scanf("%d", &T);
    while(T > 0) {
        T--;
        int t;
        scanf("%d", &t);

        struct Student stu[100];
        
        for(int i = 0; i < t; i++) {
            scanf("%d %d", &stu[i].time, &stu[i].price);
        }
        
        for(int i = 0; i < t; i++) {
            for(int j = i + 1; j < t; j++) {
                if(stu[i].time > stu[j].time) {
                    struct Student temp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = temp;
                }
            }
        }
        for(int i = 0; i < t; i++) {
            printf("%d\n", stu[i].price);
        }
    }
}
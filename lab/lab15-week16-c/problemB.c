/*
 * @Author: Frank Chu
 * @Date: 2022-12-19 09:11:44
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-19 09:14:02
 * @FilePath: /Cpp/lab/lab15-week16-c/problemB.c
 * @Description: 
问题 B: 七龙珠II
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

小王去找了个算命先生算算这辈子是有钱还是没钱。他在纸上写下“性命”两个字，问哪个字重要。
小王想了想说当然是命比较重要。
他摇摇头：“你，没钱” 
“为什么？” 
“有钱，任性。没钱，认命。”
小王问大师，我想要很多钱，还望大师指点。
大师:世间有七个珠子，只要集齐就可以实现你的愿望。
小王:哦,大师，这个段子我看的太多了，你一定说不是七龙珠，是双色球。
大师:滚特么犊子！我说的是超级大乐透！

超级大乐透一注7个号码，分为前区5个1到35号的球，后区2个1到12号的球，前区5个球都不相同，后区2个球也不相同，摇号时先摇

出前区5球，再摇后区2球。当然摇号时球不一定是有序的，你买的时候也一样可能无序，不过都是先前区后后区

输入

多组测试数据。先输入1个整数t表示组数，然后是t组，每组输入2行，分别是摇出的号码和你买的号码

输出


对于每组测试数据输出1行，如果全中输出yes,否则输出no

样例输入 Copy

2
1 2 3 4 5 5 6
1 2 3 4 5 5 6
1 2 3 35 5 2 3
1 2 3 5 35 3 2
样例输出 Copy

yes
yes
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int isWinningLottery(int *lottery, int *buy) {
    int i, j, count = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (lottery[i] == buy[j]) {
                count++;
                break;
            }
        }
    }
    for (i = 5; i < 7; i++) {
        for (j = 5; j < 7; j++) {
            if (lottery[i] == buy[j]) {
                count++;
                break;
            }
        }
    }
    return count == 7;
}

int main() {
    int t, i, lottery[7], buy[7];
    scanf("%d", &t);
    while (t--) {
        for (i = 0; i < 7; i++) {
            scanf("%d", &lottery[i]);
        }
        for (i = 0; i < 7; i++) {
            scanf("%d", &buy[i]);
        }
        if (isWinningLottery(lottery, buy)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
}
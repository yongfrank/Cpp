/*
 * @Author: Frank Chu
 * @Date: 2022-12-12 08:31:29
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-12 08:33:33
 * @FilePath: /Cpp/lab/lab14-test-week15/problemA.c
 * @Description: 
问题 A: 切西瓜
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

群众想要吃瓜，于是给你一个瓜让你切，但是作为考验
告诉你西瓜的重量，问你能否将这个西瓜分成两部分，每个部分都是偶数。(特别注意没有说要一样大哦）
输入

输入一行，包含一个整数weight,表示西瓜的重量1 <= weight <= 100
输出

输出一行，见样例。
样例输入 Copy

【输入样例1】
8
【输入样例2】
3
样例输出 Copy

【输出样例1】
YES, you can divide the watermelon into two even parts.
【输出样例2】
NO, you can't divide the watermelon into two even parts.
提示

要注意检查你的输出格式要跟样例输出一模一样才能通过，尤其别忘了句子最后的小点哦
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int watermelon(int weight) {
    if (weight % 2 == 0 && weight != 2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int weight;
    scanf("%d", &weight);
    if (watermelon(weight)) {
        printf("YES, you can divide the watermelon into two even parts.");
    } else {
        printf("NO, you can't divide the watermelon into two even parts.");
    }
}

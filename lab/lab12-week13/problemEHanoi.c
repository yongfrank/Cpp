/*
 * @Author: Frank Chu
 * @Date: 2022-11-27 10:56:37
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-27 11:06:42
 * @FilePath: /Cpp/lab/lab12-week13/problemEHanoi.c
 * @Description: https://acm.zstu.edu.cn/problem.php?cid=7138&pid=4
 * 问题 E: 年龄问题
 * 有n个人坐在一起，问第n个人多少岁？他说比第n-1个人大m岁。问第n-1个人岁数，他说比第n-2个人大m岁。问第n-2个人，又说比第n-3人大m岁。......最后问第一个人，他说是K岁。请问第n个人多大？ （可递归函数实现）
 * 输出第n个人的岁数
5 2 10
18
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int ageCount(int numberOfPeople, int OlderAge, int lastPersonAge);

int main() {
    int numberOfPeople, OlderAge, lastPersonAge;
    while (scanf("%d %d %d", &numberOfPeople, &OlderAge, &lastPersonAge) != EOF)
    {
        printf("%d\n", ageCount(numberOfPeople, OlderAge, lastPersonAge));
    }
    
}

int ageCount(int numberOfPeople, int OlderAge, int lastPersonAge) {
    if(numberOfPeople == 1) {
        return lastPersonAge;
    }
    return OlderAge + ageCount(numberOfPeople - 1, OlderAge, lastPersonAge);
}
/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 08:58:15
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 09:13:34
 * @FilePath: /Cpp/lab/lab02/ProblemH-MultipleOfFiveOrSeven.c
 * @Description: Problem H: Determine whether an integer is an integer multiple of both 5 and 7 https://acm.zstu.edu.cn/problem.php?cid=6838&pid=7
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int inputNumber;
    scanf("%d", &inputNumber);

    if (inputNumber % 5 == 0 && inputNumber % 7 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}
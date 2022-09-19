/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 08:16:56
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 08:19:07
 * @FilePath: /Cpp/lab/lab02/ProblemA-FindingLargerNumbers.c
 * @Description: https://acm.zstu.edu.cn/problem.php?cid=6838&pid=0
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    int lhs, rhs;
    scanf("%d %d", &lhs, &rhs);
    if (lhs > rhs) {
        printf("%d\n", lhs);
    } else {
        printf("%d\n", rhs);
    }
    
}
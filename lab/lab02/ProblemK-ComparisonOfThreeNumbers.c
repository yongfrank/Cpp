/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 09:23:36
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 09:38:28
 * @FilePath: /Cpp/lab/lab02/ProblemK-ComparisonOfThreeNumbers.c
 * @Description: Problem K: Zero Learning Algorithm 18 - Comparison of 3 Numbers https://acm.zstu.edu.cn/problem.php?cid=6838&pid=10
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>

int compare(const void *x_void, const void *y_void) {
    int x = *(int *)x_void;
    int y = *(int *)y_void;
    return y - x;
}

int main() {
    int a[3];
    for(int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, sizeof(a) / sizeof(*a), sizeof(*a), compare);
    for(int i = 0; i < 3; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}


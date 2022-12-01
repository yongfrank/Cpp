/*
 * @Author: Frank Chu
 * @Date: 2022-11-28 08:15:09
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-28 08:27:59
 * @FilePath: /Cpp/lab/lab12-week13/problemJ.c
 * @Description: https://acm.zstu.edu.cn/problem.php?cid=7138&pid=9
 * 问题 J: 最大公约数、最小公倍数
12 48
20 12

12 48
4 60
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

/**
 * @brief Greatest Common Divisor
 * @return int 
 */
int gcd(int, int);
int lowestCommonMultiple(int lhs, int rhs, int gcd);

int main() {
    int lhs, rhs;
    while(scanf("%d %d", &lhs, &rhs) != EOF) {
        int divisor = gcd(lhs, rhs);
        printf("%d %d\n", divisor, lowestCommonMultiple(lhs, rhs, divisor));
    }
}

int gcd(int lhs, int rhs) {
    if(rhs == 0) {
        return lhs;
    } else {
        return gcd(rhs, lhs % rhs);
    }
}
// int gcd(int lhs, int rhs) {
//     int divisor = lhs % rhs;
//     int ans = rhs;
//     if(divisor != 0) {
//         ans = gcd(rhs, divisor);
//     }
//     return ans;
// }

int lowestCommonMultiple(int lhs, int rhs, int gcd) {
    return lhs * rhs / gcd;
}
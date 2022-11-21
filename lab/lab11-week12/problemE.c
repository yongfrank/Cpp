/*
 * @Author: Frank Chu
 * @Date: 2022-11-21 10:57:42
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-21 11:02:12
 * @FilePath: /Cpp/lab/lab11-week12/problemE.c
 * @Description: 问题 E: 阶乘和
 * 输出s得值， s=1!+2!+...+n!
 * @test
```input
1
3
5
```
```output

1
9
153
```
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int factorialSum(int endNumber) {
    int sum = 0;
    int tempFact = 1;
    for(int i = 1; i <= endNumber; i++) {
        tempFact *= i;
        sum += tempFact;
    }
    return sum;
}

int main() {
    int endNumber;
    while(scanf("%d", &endNumber) != EOF) {
        printf("%d\n", factorialSum(endNumber));
    }
}
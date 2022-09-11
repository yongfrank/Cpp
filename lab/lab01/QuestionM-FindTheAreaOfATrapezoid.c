/*
 * @Author: Frank Chu
 * @Date: 2022-09-11 16:06:52
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-11 16:10:38
 * @FilePath: /Cpp/lab/lab01/QuestionM-FindTheAreaOfATrapezoid.c
 * @Description: https://acm.zstu.edu.cn/problem.php?cid=6818&pid=12
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    double areaOfTrapezoid, longBase, shortBase, attitude;

    scanf("%lf,%lf,%lf", &shortBase, &longBase, &attitude);
    areaOfTrapezoid = (longBase + shortBase) * attitude / 2;

    printf("%.2f\n", areaOfTrapezoid);
}
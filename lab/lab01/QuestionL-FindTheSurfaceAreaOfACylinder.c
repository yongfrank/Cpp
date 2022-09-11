/*
 * @Author: Frank Chu
 * @Date: 2022-09-11 15:51:12
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-11 16:05:33
 * @FilePath: /Cpp/lab/lab01/QuestionL-FindTheSurfaceAreaOfACylinder.c
 * @Description: https://acm.zstu.edu.cn/problem.php?cid=6818&pid=11
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <math.h>

int main() {
    double pi = 4.0 * atan(1.0);
    double radius, height;
    scanf("%lf %lf", &radius, &height);
    printf("Area=%.3f\n", 2 * pi * radius * height + 2 * pi * radius * radius);
}
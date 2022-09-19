/*
 * @Author: Frank Chu
 * @Date: 2022-09-19 08:27:41
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-19 08:35:14
 * @FilePath: /Cpp/lab/lab02/ProblemC-FahrenheitCelsiusConversion.c
 * @Description: Question C: Fahrenheit Celsius Conversion - No. 9 of the C language beginner's 100-question battle https://acm.zstu.edu.cn/problem.php?cid=6838&pid=2
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("fahr=%.6f,celsius=%.6f", fahrenheit, celsius);

    return 0;
}
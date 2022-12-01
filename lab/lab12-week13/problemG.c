/*
 * @Author: Frank Chu
 * @Date: 2022-11-28 08:56:29
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-28 08:58:43
 * @FilePath: /Cpp/lab/lab12-week13/problemG.c
 * @Description: 
 * 下面程序中"____ N ____"是根据程序功能需要填充部分，请完成程序填充（注意：不得加行、减行、加句、减句，否则后果自负）。 
 * 该程序功能：数列的第1、2项均为1，此后各项值均为该项前二项之和。计算数列第30项的值。 
#include 
long f(int n); 
void main() { 
    printf("%ld\n",_____1____); 
} 
long f(int n) { 
    if(_______2______) return 1; 
    else return ______3_____; 
}
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
long f(int n); 
int main() { 
    printf("%ld\n", f(30)); 
} 
long f(int n) { 
    if(n == 1 || n == 2) return 1; 
    else return f(n - 1) + f(n - 2); 
}
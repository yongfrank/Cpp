/*
 * @Author: Frank Chu
 * @Date: 2022-11-27 10:17:43
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-27 10:33:16
 * @FilePath: /Cpp/lab/lab12-week13/problemCHanoi.c
 * @Description: https://acm.zstu.edu.cn/problem.php?cid=7138&pid=2
 * https://leetcode.com/discuss/interview-question/1392284/solving-tower-of-hanoi-using-the-magic-of-recursion
 * 问题 C: 深入浅出学算法021-汉诺塔问题
 * 汉诺塔（又称河内塔）问题是源于印度一个古老传说的益智玩具。大梵天创造世界的时候做了三根金刚石柱子，在一根柱子上从下往上按照大小顺序摞着64片黄金圆盘。大梵天命令婆罗门把圆盘从下面开始按大小顺序重新摆放在另一根柱子上。并且规定，在小圆盘上不能放大圆盘，在三根柱子之间一次只能移动一个圆盘。
 * 输出搬盘子的次数
1
2

1
3
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>

int hanoi(int);
int main()
{
    int numberOfDisk = 0;
    while (scanf("%d", &numberOfDisk) != EOF)
    {
        printf("%d\n", hanoi(numberOfDisk));
    }
}

int hanoi(int numberOfDisks)
{
    if (numberOfDisks == 1)
    {
        return 1;
    }
    return 2 * hanoi(numberOfDisks - 1) + 1;
}
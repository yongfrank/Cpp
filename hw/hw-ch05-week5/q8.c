/*
 * @Author: Frank Chu
 * @Date: 2022-10-14 14:26:49
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-14 14:27:10
 * @FilePath: /Cpp/hw/hw-ch05-week5/q8.c
 * @Description: Lv92.题目8：输入一个正整数 n ，输出 n 行空心的数字金字塔。要求定义和调用函数hollow_pyramid(n) 输出 n 行空心的数字金字塔。当 n=5 时，5 行空心的数字金字塔如下所示。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
void hollow_pyramid(int n)
{
	int i, j;
	for (i = 1; i < n; i++) //共n-1行
	{
		for (j = 1; j <= n - i; j++) //上三角空格
		{
			printf(" ");
		}
		printf("%d", i); //左斜下数字,只打印一个数字，不用在内循环里
		if (i == 1)
		{
			printf("\n");
			continue;
		}
		for (j = 1; j <= 2 * (i - 1) - 1; j++) //中间三角空格 .i=2时，j=1；i=3时，j=3
		{
			printf(" ");
		}
		printf("%d", i); //右斜下数字
		printf("\n");
	}
	for (j = 1; j <= 2 * n - 1; j++) //底层数字
	{
		printf("%d", n);
	}
	printf("\n");
}
int main(void)
{
	int n;
	printf("input n:");
	scanf("%d", &n);
	hollow_pyramid(n);
	return 0;
}
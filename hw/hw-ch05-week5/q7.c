/*
 * @Author: Frank Chu
 * @Date: 2022-10-14 14:26:35
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-14 14:26:44
 * @FilePath: /Cpp/hw/hw-ch05-week5/q7.c
 * @Description: Lv91.题目7：使用函数求余弦函数的近似值：输入精度e，用下列公式求 cosx 的近似值，精确到最后项的绝对值小于 e 。 要求定义和调用函数 funcos(e,x) 求余弦函数的近似值。试编写相应程序。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
#include <math.h>
double fact(int n)
{
	int i;
	double f = 1;
	for (i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
double funcos(double e, double x)
{
	int flag = 1, i = 0;
	double cosx = 0, item = 1; 
	while (fabs(item) >= e)
	{
		item = flag * pow(x, i) / fact(i);
		cosx += item;
		i += 2;
		flag = -flag;
	}
	return cosx;
}
int main(void)
{
	double e, x, sum;
	printf("input e,x:");
	scanf("%lf%lf", &e, &x);
	sum = funcos(e, x);
	printf("cosx = %lf\n", sum);
	return 0;
}
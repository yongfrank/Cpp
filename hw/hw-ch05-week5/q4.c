/*
 * @Author: Frank Chu
 * @Date: 2022-10-14 14:25:37
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-14 14:25:49
 * @FilePath: /Cpp/hw/hw-ch05-week5/q4.c
 * @Description: Lv88.题目4：利用函数计算素数个数并求和：输入两个正整数 m 和 n ( 1≤m, n≤500)， 统计并输出 m 和 n 之间的素数的个数以及这些素数的和。要求定义并调用函数 prime(m) 判断 m 是否为素数。试编写相应程序。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <math.h>
//判断m是否为素数
int prime(int m)
{
	int j;
	// 质数定义为在大于1的自然数中，除了1和它本身以外不再有其他因数。
	if (m == 1)
	{
		return 0;
	}
	// 判断除 1 外的自然数
	for (j = 2; j <= sqrt(m); j++)
	{
		if (m % j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main(void)
{
	int m = 1, n = 100, i, sum = 0, count = 0;
	printf("input m,n(m>=1,n<=500):");
	scanf("%d%d", &m, &n);
	for (i = m; i <= n; i++) //将i的值传到自定义函数里
	{
		if (prime(i) == 1)
		{
			sum += i;
			count++;
		}
	}
	printf("%d~%d 之间的素数个数为 %d,和为 %d\n", m, n, count, sum);
	return 0;
}
/*
 * @Author: Frank Chu
 * @Date: 2022-10-14 14:26:19
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-14 14:26:29
 * @FilePath: /Cpp/hw/hw-ch05-week5/q6.c
 * @Description: Lv90.题目6：使用函数输出水仙花数：输入两个正整数 m 和 n (1≤m, n≤1000) 输出 m～n 之间的所有满足各位数字的立方和等于它本身的数。要求定义并调用函数 is(number) 判断 number 的各位数字之立方和是否等于它本身。试编写相应程序。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
#include <math.h>
int is(int number)
{
	int x, sum, y;
	y = number;
	sum = 0;
	do
	{
		x = y % 10;
		sum += pow(x, 3);
		y = y / 10;
	} while (y > 0);
	if (sum == number)
	{
		return sum;
	}
	else
		return 0;
}
int main(void)
{
	int m, n, i, result = 0;
	printf("input m,n(m>=1,n<=1000):");
	scanf("%d%d", &m, &n);
	for (i = m; i <= n; i++)
	{
		result = is(i);
		if (result >= m && result <= n)
		{
			printf("%d\n", result);
		}
	}
	return 0;
}
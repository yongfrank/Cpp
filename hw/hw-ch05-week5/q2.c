/*
 * @Author: Frank Chu
 * @Date: 2022-10-14 14:24:53
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-14 14:25:03
 * @FilePath: /Cpp/hw/hw-ch05-week5/q2.c
 * @Description: 使用函数求奇数和：输入一批正整数（以零或负数为结束标志），求其中的奇数和。要求定义和调用函数 even(n) 判断数的奇偶性，当 n 为偶数时返回 1 ，否则返回 0。试编写相应程序。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
int even(int n)
{
	if (n % 2 == 0)
	{
		return 1;
	}
	else
		return 0;
}
int main(void)
{
	int n, sum = 0;
	printf("input n:\n");
	while (1)
	{
		scanf("%d", &n);
		if(n <= 0){
			break;
		}
		if (even(n) == 0)
		{
			sum += n;
		}
	}
	printf("sum= %d\n", sum);
	return 0;
}
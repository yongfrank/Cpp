/*
 * @Author: Frank Chu
 * @Date: 2022-10-14 14:26:00
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-14 14:26:10
 * @FilePath: /Cpp/hw/hw-ch05-week5/q5.c
 * @Description: Lv89.题目5：使用函数统计指定数字的个数：读入一个整数，统计并输出该数中 “2” 的个数。要求定义并调用函数 countdigit( number, digit)，它的功能是统计整数 number 中数字 digit 的个数。例如，countdigit( 12 292, 2) 的返回值是 3 。试编写相应程序。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
int countdigit(int number, int digit)
{
	int count = 0;
	while (number > 0)
	{
		if (number % 10 == digit)
		{
			count++;
		}
		number = number / 10;
	}
	return count;
}
int main(void)
{
	int number, digit = 2, count;
	printf("input number:");
	scanf("%d", &number);
	count = countdigit(number, digit);
	printf("%d 中的 %d 的个数为 %d\n", number, digit, count);
	return 0;
}
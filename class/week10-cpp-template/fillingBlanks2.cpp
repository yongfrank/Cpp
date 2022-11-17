/*
 * @Author: Frank Chu
 * @Date: 2022-11-11 15:41:57
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-11 15:44:08
 * @FilePath: /Cpp/class/week10-cpp-template/fillingBlanks2.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
void insert(int a[], int *n, int x, int i)
{
	int j;
	if (*n > i)
	{
		for (j = *n - 1; j >= i; j--)
			a[j + 1] = a[j];
	}
	else
	{
		i = *n;
	}
	a[i] = x;
	(*n)++;
}
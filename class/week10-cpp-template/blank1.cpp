/*
 * @Author: Frank Chu
 * @Date: 2022-11-11 15:36:19
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-11 15:37:34
 * @FilePath: /Cpp/class/week10-cpp-template/blank1.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include "iostream"
void find(int *, int, int *, int *);
int main(void)
{
	int maxsub, minsub, a[] = {5, 3, 7, 9, 2, 0, 4, 1, 6, 8};
	find(a, 10, &maxsub, &minsub);
	printf("maxsub=%d, minsub=%d\n", maxsub, minsub);
	return 0;
}
void find(int *a, int n, int *maxsub, int *minsub)
{
	int i;
	*maxsub = *minsub = 0;
	for (i = 1; i < n; i++)
	{
		if (a[i] > a[*maxsub])
			*maxsub = i;
		if (a[i] < a[*minsub])
			*minsub = i;
	}
}
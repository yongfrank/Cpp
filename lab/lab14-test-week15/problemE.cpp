/*
 * @Author: Frank Chu
 * @Date: 2022-12-12 10:16:52
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-12 10:17:34
 * @FilePath: /Cpp/lab/lab14-test-week15/problemE.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <iostream>

using namespace std;

int n, a[500010], c[500010];
long long ans;

// 直接用冒泡排序会TLE，因为这题本质在求逆序对，而归并排序可以快速求逆序对，故用此法
void msort(int b, int e)
{
	if (b == e)
		return;

	int mid = (b + e) / 2, i = b, j = mid + 1, k = b;
	msort(b, mid), msort(mid + 1, e);

	while (i <= mid && j <= e)
	{
		if (a[i] <= a[j])
		{
			c[k++] = a[i++];
		}
		else
		{
			c[k++] = a[j++], ans += mid - i + 1; // 统计答案
		}
	}
	while (i <= mid)
	{
		c[k++] = a[i++];
	}
	while (j <= e)
	{
		c[k++] = a[j++];
	}
	for (int l = b; l <= e; l++)
	{
		a[l] = c[l];
	}
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	msort(1, n);
	cout << ans << "\n";
	return 0;
}
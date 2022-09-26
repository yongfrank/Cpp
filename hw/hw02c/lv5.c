/*
 * @Author: Frank Chu
 * @Date: 2022-09-24 14:04:40
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-24 14:07:50
 * @FilePath: /Cpp/hw/hw02c/lv4.c
 * @Description: 程序设计 5：三角形判断：输入平面上任意三个点的坐标(x1, y1)、(x2, y2)、(x3, y3)，
 * 检验它们能否构成三角形。如果这 3 个点能构成一个三角形，输出周长和面积(保留 2 位小数); 否则，输出 “Impossible”。试编写相应程序。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
#include <math.h>
int main()
{
	double x1, y1, x2, y2, x3, y3, S, C, area, a, b, c;
	printf("Input coordinate of (x1,y1), (x2,y2), (x3,y3):");
	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	if ((a + b > c) && (a + c > b) && (b + c > a) && (a - b < c) && (a - c < b) && (b - c < a))
	{
		C = a + b + c;
		S = (a + b + c) / 2.0;
		area = sqrt(S * (S - a) * (S - b) * (S - c));
		printf("The perimeter of triangle is %.2lf, the area is %.2lf. \n", C, area);
	}
	else
		printf("Impossible \n");
	return 0;
}
/*
 * @Author: Frank Chu
 * @Date: 2022-10-14 14:25:15
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-14 14:25:27
 * @FilePath: /Cpp/hw/hw-ch05-week5/q3.c
 * @Description: Lv87.题目3：使用函数计算两点间的距离：给定平面任意两点坐标 (x1, y1) 和 (x2, y2) ， 求这两点之间的距离 (保留 2 位小数) 。要求定义和调用函数 dist(x1, y1, x2, y2)计算两点间的距离。试编写相应程序。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <math.h>
double dist(double x1, double y1, double x2, double y2)
{
	double s = 0;
	s = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	return s;
}
int main(void)
{
	double x1, y1, x2, y2, dis;
	printf("input x1,y1,x2,y2:");
	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
	dis = dist(x1, y1, x2, y2);
	printf("两点之间的距离是: %.2lf\n", dis);
	return 0;
}
/*
 * @Author: Frank Chu
 * @Date: 2022-10-06 14:36:04
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-06 14:37:17
 * @FilePath: /Cpp/lab/lab04-week5/problemM.cpp
 * @Description: -----------------------------------
 * ©著作权归作者所有：来自51CTO博客作者cxxu的原创作品，请联系作者获取转载授权，否则将追究法律责任
 * 一球从100m高度自由落下，每次落地后反跳回原高度的一半，再落下。求它在第n次落地时，共经过多少米？第n次反弹多高？（小数点后保留5位）
 * https://blog.51cto.com/u_15672212/5382681
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
//球落地反弹
#include <stdio.h>
#define H0 100
#define K 2 * H0 //第n次往返经过的路程位2*(1/2)^(n-1)*H0 = (2*H0) * (1/2)^(n-1),
                 //则可令常系数k = 2*H0
int main()
{
    int n;
    int m;
    float distance = H0;
    float distance_th = H0;
    float delta = K;
    scanf("%d", &n);
    m = n;
    while (--n)
    {
        distance += 1 / 2.0 * delta;
        delta /= 2;
    }
    while (m--)
    {
        distance_th /= 2;
    }

    printf("distance=%.1f height=%.1f\n", distance, distance_th);
}
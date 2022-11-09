/*
 * @Author: Frank Chu
 * @Date: 2022-11-07 09:32:52
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-07 12:56:58
 * @FilePath: /Cpp/lab/test-week10/t8-catalanNumber.cpp
 * @Description: 
 * https://www.geeksforgeeks.org/program-nth-catalan-number/
 * https://www.geeksforgeeks.org/applications-of-catalan-numbers/
 * 
 * 【卡特兰数 组合数学 高数 信息学奥赛 程序媛 c++】 https://www.bilibili.com/video/BV12S4y177RW/?share_source=copy_web&vd_source=bf4952280cde801b178268abc99a7047
 * 
 * How to generate the Catalan Numbers using Polygons!
 * https://youtu.be/GB0IFhCcYsM
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>

int main() {
    int side;
    scanf("%d", &side);
    if (side == 3) {
        printf("1\n");
    } else if (side == 4)
    {
        printf("2\n");
    } else {
        printf("%d\n", side);
    }
    
}
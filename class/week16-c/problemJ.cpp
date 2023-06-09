/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 16:01:02
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-27 18:17:50
 * @FilePath: /Cpp/class/week16-c/problemJ.cpp
 * @Description: 
问题 J: 礼品分组
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

元旦快到了，校学生会让乐乐负责新年晚会的纪念品发放工作。为使得参加晚会的同学所获得 的纪念品价值相对均衡，他要把购来的纪念品根据价格进行分组，但每组最多只能包括两件纪念品， 并且每组纪念品的价格之和不能超过一个给定的整数。为了保证在尽量短的时间内发完所有纪念品，乐乐希望分组的数目最少。
你的任务是写一个程序，找出所有分组方案中分组数最少的一种，输出最少的分组数目。

输入

共n+2行:
第1行包括一个整数w，为每组纪念品价格之和的上上限。
第2行为一个整数n，表示购来的纪念品的总件数G。
第3至n+2行每行包含一个正整数Pi(5≤Pi≤w)表示所对应纪念品的价格。

输出

一个整数，即最少的分组数目。

样例输入 Copy

100 
9 
90 
20 
20 
30 
50 
60 
70 
80 
90
样例输出 Copy

6
提示

50％的数据满足：1≤n≤15
100％的数据满足：1≤n≤30000,80≤w≤200
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include <vector>
#include <algorithm>

int getMinGroup(int wPriceMax, int nPresent, std::vector<int> &presentPrice)
{
    int minGroup = 0;
    sort(presentPrice.begin(), presentPrice.end());
    
    int left = 0, right = nPresent - 1;
    while(left < right)
    {
        if(presentPrice[left] + presentPrice[right] <= wPriceMax)
        {
            left++;
            right--;
            minGroup++;
        }
        else
        {
            right--;
            minGroup++;
        }
    }
    return minGroup + (left == right);
}

int main() {
    int wPriceMax, nPresent;
    std::cin >> wPriceMax >> nPresent;
    std::vector<int> presentPrice(nPresent);
    for (int i = 0; i < nPresent; i++)
    {
        std::cin >> presentPrice[i];
    }
    std::cout << getMinGroup(wPriceMax, nPresent, presentPrice) << std::endl;
    return 0;
}
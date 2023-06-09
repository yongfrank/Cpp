/*
 * @Author: Frank Chu
 * @Date: 2023-02-19 20:15:05
 * @LastEditors: Frank Chu
 * @LastEditTime: 2023-02-19 20:44:46
 * @FilePath: /Cpp/final/2021-2022-1 年C程序设计（计算机类）期末考试-重现/problemE.cpp
 * @Description: 
问题 E: 拔苗助长
[命题人 : root]
时间限制 : 1.000 sec  内存限制 : 128 MB

题目描述
很久很久以前有n株小秧苗排成一排，有一个农夫想让它们长得快一点，于是他每天会给一段连续的秧苗拔高某一个高度，现在问你最终每株秧苗的高度。
输入
第一行输入一个整数n,表示秧苗的数量。
第二行输入n个数，表示每株秧苗的初始高度。
第三行输入一个整数m，表示农夫拔苗的天数。
接下来m行每行三个整数a,b,c，表示给第a株苗到第b株苗增加c的高度
a不一定小于b
输出
输出一行，包含n个整数，以空格隔开，表示秧苗最终的高度
样例输入 Copy
4
1 2 3 4
3
1 2 1
2 3 1
4 4 1
样例输出 Copy
2 4 4 5
提示
1<=n,m<=100,1<=a,b<=n,1<=c<=1000,1<=秧苗初始高度<=100
 * 
 * Copyright (c) 2023 by ${git_name}, All Rights Reserved. 
 */

#include <vector>
#include <iostream>

std::vector<int> make_plants_higher(int from_plant, int to_plant, int height, std::vector<int> plant) {
    for(int i = 1; i <= (int)plant.size(); i++) {
        if(i >= from_plant && i <= to_plant) {
            plant[i - 1] += height;
        }
    }
    return plant;
}

int main() {
    int plant_amount;
    scanf("%d", &plant_amount);
    std::vector<int> plants(plant_amount);
    for(auto i = 0; i < plant_amount; i++) {
        std::cin >> plants[i];
    }
    int days = 0;
    scanf("%d", &days);
    for(int i = 0; i < days; i++) {
        int from, to, height;
        std::cin >> from >> to >> height;
        if (from - to > 0) {
            int temp = to; to = from; from = temp;
        }
        plants = make_plants_higher(from, to, height, plants);
    }
    for(auto plant: plants) {
        std::cout << plant << " ";
    }
    std::cout << std::endl;
}


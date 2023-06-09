/*
 * @Author: Frank Chu
 * @Date: 2022-12-19 10:05:15
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-19 10:17:30
 * @FilePath: /Cpp/lab/lab15-week16-c/problemE.cpp
 * @Description:
问题 E: 买股票
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

小王很喜欢买股票作为投资，但没有时间，他买股票1个特点就是不管股票价格多少，他只会挑1个股票买1000股，年初买，年末卖。
你无意中得知了未来一年股票的所有走势，那么你能推荐小王买哪个股票，让他的盈利额最大吗？
输入

先输入一个整数t,表示有t组测试数据，然后每组先输入1个整数n（小于100），代表可选股票数， 然后是n行，每行输入3个整数 分别代表 股票代码（数字）年初价格 年末价格

输出

 对于每组数据输出1行。分别是n个股票代码，按照股价涨幅从高到低进行排序，2个代码之间有1个空格

样例输入 Copy

1
2
600808 5 9
600101 3 2
样例输出 Copy

600808 600101
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include <algorithm>
#include <vector>

struct Stock {
    int code;
    int start;
    int end;
};

bool cmp(Stock a, Stock b) {
    return (a.end - a.start) > (b.end - b.start);
}

std::vector<Stock> getStocks(int n) {
    std::vector<Stock> stocks;
    for (int i = 0; i < n; i++) {
        Stock stock;
        std::cin >> stock.code >> stock.start >> stock.end;
        stocks.push_back(stock);
    }
    return stocks;
}

void printStocks(std::vector<Stock> stocks) {
    std::sort(stocks.begin(), stocks.end(), cmp);
    for (size_t i = 0; i < stocks.size(); i++) {
        std::cout << stocks[i].code << " ";
    }
    std::cout << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<Stock> stocks = getStocks(n);
        printStocks(stocks);
    }
    return 0;
}
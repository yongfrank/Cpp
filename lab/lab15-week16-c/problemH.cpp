/*
 * @Author: Frank Chu
 * @Date: 2022-12-19 13:15:05
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-19 14:13:12
 * @FilePath: /Cpp/lab/lab15-week16-c/problemH.cpp
 * @Description: 
问题 H: 哥德巴赫猜想
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

浙江理工大学的小Q加盟了华为，随着中M科技战的深入，小Q觉得数学越来越重要，于是他开始研究数学，希望能成为为中国出力的大科学家。这天他开始研究质数。史上和质数有关的数学猜想中，最著名的当然就是“哥德巴赫猜想”了。
任何不小于7的奇数，都可以写成三个质数之和的形式；
任何不小于4的偶数，都可以写成两个质数之和的形式。
输入

多组测试数据，每组输入1个正整数n( 6 <= n <= 1000)

输出

对于每组数据输出一行，如果是偶数输出2个质数，如果是奇数，输出3个质数，他们的和是n,如果有多组只需要输出一组（要求这组第一个数是所有可行组合里最小的那个数，第2个数是可行组合里满足第一个最小后第2个数最小的数）

样例输入 Copy

6
7
样例输出 Copy

3 3
2 2 3
提示

建议用函数去判断是否是质数
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

#define MAXNUMBER 1000

std::vector<bool> sieveOfEratosthenes(int n = MAXNUMBER)
{
    std::vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

std::vector<int> getGoldbachNumber(int n, std::vector<bool> isPrime)
{
    std::vector<int> goldbachNumber;
    if (n % 2 == 0)
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (isPrime[i] && isPrime[n - i])
            {
                goldbachNumber.push_back(i);
                goldbachNumber.push_back(n - i);
                break;
            }
        }
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (isPrime[i] && isPrime[n - i - 2])
            {
                goldbachNumber.push_back(i);
                goldbachNumber.push_back(n - i - 2);
                goldbachNumber.push_back(2);
                break;
            }
        }
    }
    sort(goldbachNumber.begin(), goldbachNumber.end());
    return goldbachNumber;
}

class Solution {
public:
    int countPrimes(int n) {
        std::vector<bool> isPrime(n + 1, true);
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i <= sqrt(n); i++) {
            if(isPrime[i]) {
                isPrime[i] = true;
                for(int j = 2 * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for(int i = 2; i < n; i++) {
            if(isPrime[i]) { count++; }
        }
        return count;
    }
};

int main() {
    Solution solution;
    std::cout << solution.countPrimes(0) << std::endl;
    // std::vector<bool> isPrime = sieveOfEratosthenes(2000);
    // int n;
    // while (std::cin >> n)
    // {
    //     std::vector<int> goldbachNumber = getGoldbachNumber(n, isPrime);
    //     for (size_t i = 0; i < goldbachNumber.size(); i++)
    //     {
    //         std::cout << goldbachNumber[i] << " ";
    //     }
    //     std::cout << std::endl;
    // }
    // return 0;
}
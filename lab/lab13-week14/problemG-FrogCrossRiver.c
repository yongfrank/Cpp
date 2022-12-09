/*
 * @Author: Frank Chu
 * @Date: 2022-12-04 21:20:13
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-04 22:36:18
 * @FilePath: /Cpp/lab/lab13-week14/problemG-FrogCrossRiver.c
 * @Description: 问题 G: 青蛙过河
 * 多组测试数据，先输入一个整数T,表示组数，然后输入然后输入t行，每行输入2个整数s和y
 * https://www.docin.com/p-1339812134.html
 * [整理版]递归算法实现青蛙过河问题
 * https://www.twblogs.net/a/5e54a5b1bd9eee2117c54a70/?lang=zh-cn
 * 青蛙过河 猴子爬山 兔子繁殖 开宝箱2 找气球 指针函数 铺地砖
3
0 1
0 2
1 1

2
3
4
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

/**
 * @brief  Calculate number of frog that crosses the river
 * @param  stonePillar      stone pillar amount
 * @param  lotusLeafAmount  lotus leaf amount
 * @return int quantity of crossed frog
 * @note
 *      $$
 *      f(0, b) = b + 1 \\
 *      f(1, b) = 2 * f(0, b) \\
 *      f(2, b) = 2 * f(1, b)
 *      $$
 * @see
 *  * 青蛙过河问题（递归算法） https://blog.csdn.net/weixin_44084096/article/details/120483941
 */
int amountOfFrogCrossTheRiver(int stonePillar, int lotusLeafAmount) {
    if(stonePillar != 0) {
        return 2 * amountOfFrogCrossTheRiver(stonePillar - 1, lotusLeafAmount);
    }
    return lotusLeafAmount + 1;
}

int main() {
    int amountOfTestCases;
    while(scanf("%d", &amountOfTestCases) != EOF) {
        for (int i = 0; i < amountOfTestCases; i++) {
            int stonePillar, lotusLeafAmount;
            scanf("%d %d", &stonePillar, &lotusLeafAmount);
            printf("%d\n", amountOfFrogCrossTheRiver(stonePillar, lotusLeafAmount));
        }
    }
}
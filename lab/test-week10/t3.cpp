/*
 * @Author: Frank Chu
 * @Date: 2022-11-07 08:23:23
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-07 08:31:40
 * @FilePath: /Cpp/lab/test-week10/t3.cpp
 * @Description: 解题思路：只用输出单次疲劳的最大值即可。所以我们设x，y，将a1的输入独立出来，然后对于其后的每一次输入，（x为当次输入的值，y为上次输入的值），比较他们的差，选取最大值即可。
 * https://blog.csdn.net/anynever/article/details/102759620
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <iostream>
using namespace std;

int biggerOfTwoVariable(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int amount, tempFatigue, fatigueValue = -1, y, difference;
    scanf("%d", &amount);
    scanf("%d", &tempFatigue);
    y = tempFatigue;
    for (int i = 2; i <= amount; i++) {
        scanf("%d", &tempFatigue);
        if (y > tempFatigue)
            difference = y - tempFatigue;
        else
            difference = tempFatigue - y;
        y = tempFatigue;
        fatigueValue = biggerOfTwoVariable(fatigueValue, difference); //若该次疲劳值比之前的最大值大，更新疲劳值
    }
    printf("%d\n", fatigueValue);
    return 0;
}
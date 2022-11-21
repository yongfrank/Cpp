/*
 * @Author: Frank Chu
 * @Date: 2022-11-16 12:24:20
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-19 00:24:13
 * @FilePath: /Cpp/lab/lab10-week11/problemM.cpp
 * @Description: 问题 M: 青蛙过河
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int CalculateCrossRiverFrogNumber(int, int);
int main() {
    int amountOfGroup;
    scanf("%d", &amountOfGroup);

    while(amountOfGroup--) {
        int lotusLeafAmount, stonePillar;
        scanf("%d %d", &stonePillar, &lotusLeafAmount);
        int numberOfFrog = CalculateCrossRiverFrogNumber(stonePillar, lotusLeafAmount);
        printf("%d\n", numberOfFrog);
    }
}

/**
 * @brief  Calculate number of frog that crosses the river
 * @param  stonePillar      My Param doc
 * @param  lotusLeafAmount  My Param doc
 * @return int 
 * @note
 *      $$
 *      f(0, b) = b + 1 \\
 *      f(1, b) = 2 * f(0, b) \\
 *      f(2, b) = 2 * f(1, b)
 *      $$
 * @see
 *  * 青蛙过河问题（递归算法） https://blog.csdn.net/weixin_44084096/article/details/120483941
 */
int CalculateCrossRiverFrogNumber(int stonePillar, int lotusLeafAmount) {
    // printf("stone: %d lotus: %d\n", stonePillar, lotusLeafAmount);
    if(stonePillar != 0) {
        return 2 * CalculateCrossRiverFrogNumber(stonePillar - 1, lotusLeafAmount);
    }
    return lotusLeafAmount + 1;
}
/**
 * @brief  Calculate number of frog that crosses the river
 * @param  stonePillar      My Param doc
 * @param  lotusLeafAmount  My Param doc
 * @return int 
 * @note
       $$\begin{eqnarray}
       f(0, b) = b + 1 \nonumber \\
       f(1, b) = 2 * f(0, b) \nonumber \\
       f(2, b) = 2 * f(1, b) 
       \end{eqnarray}$$
 * @see
 *  * 青蛙过河问题（递归算法） https://blog.csdn.net/weixin_44084096/article/details/120483941
 */
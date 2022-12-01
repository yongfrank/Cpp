/*
 * @Author: Frank Chu
 * @Date: 2022-11-28 09:07:39
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-28 09:18:44
 * @FilePath: /Cpp/lab/lab12-week13/problemB.c
 * @Description: 
 * 例如有四名选手的成绩分别为50、80、50、30分，则80分的选手为第一名，50分的两名选手均为第二名，30分的选手为第四名。 
 * 请编写一个程序，计算一个选手在这种排名方式之下的名次（分数高的选手排前面）。
 *  第一行为一个整数N(1<=N<=100)，表示参赛的选手数，第二行为N个整数，表示每位选手的成绩，第三行为一个整数m，表示要查询名次的选手的成绩。
4
50 80 50 30
50

2
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 * @param  lhs              My Param doc
 * @param  rhs              My Param doc
 * @return int 
 * @note 
 * Performs a quick sort. A more secure version of this function is available; see qsort_s. https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/qsort?view=msvc-170
 */
int compare(const void* lhs, const void* rhs) {
    return *(int*)rhs - *(int*)lhs;
}

int main() {
    int numberOfCandidate;
    while(scanf("%d", &numberOfCandidate) != EOF) {
        int scores[numberOfCandidate];
        for(int i = 0; i < numberOfCandidate; i++) {
            scanf("%d", scores + i);
        }
        int scoresToBeLookedUp;
        scanf("%d", &scoresToBeLookedUp);
        qsort(scores, sizeof(scores) / sizeof(*scores), sizeof(*scores), compare);
        // for(int i = 0; i < numberOfCandidate; i++) {
        //     printf("%d ", *(scores + i));
        // }

        int rank = 1;
        for(int i = 0; i < numberOfCandidate; i++) {
            if(*(scores + i) == scoresToBeLookedUp) {
                printf("%d\n", rank);
                break;
            }
            rank++;
        }
    }
}
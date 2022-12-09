/*
 * @Author: Frank Chu
 * @Date: 2022-12-05 16:03:22
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-05 16:06:08
 * @FilePath: /Cpp/lab/lab13-week14/problemK-sort.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <iostream>
#include <algorithm>

struct scoreOfStudent {
    int id;
    int score;
    int chinese, math, english;
};

bool qsortCompare(scoreOfStudent a, scoreOfStudent b) {
    if (a.score != b.score) {
        return a.score > b.score;
    } else if (a.chinese != b.chinese) {
        return a.chinese > b.chinese;
    } else {
        return a.id < b.id;
    }
}

int main() {
    int testCases;
    scanf("%d", &testCases);
    struct scoreOfStudent* scoresList = (struct scoreOfStudent*)malloc(sizeof(struct scoreOfStudent) * testCases);
    for(int i = 0; i < testCases; i++) {
        int chinese, math, english;
        scanf("%d %d %d", &chinese, &math, &english);
        int sumOfScore = chinese + math + english;
        (scoresList + i)->id = i + 1;
        (scoresList + i)->score = sumOfScore;
        (scoresList + i)->chinese = chinese;
        (scoresList + i)->math = math;
        (scoresList + i)->english = english;
    }
    std::sort(scoresList, scoresList + testCases, qsortCompare);
    for(int i = 0; i < (testCases > 5 ? 5 : testCases); i++) {
        printf("%d %d", (scoresList + i)->id, (scoresList + i)->score);
        if(i != (testCases > 5 ? 5 : testCases) - 1) {
            printf("\n");
        }
    }
}
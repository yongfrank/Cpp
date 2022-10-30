/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 11:43:31
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 12:07:49
 * @FilePath: /Cpp/lab/lab08-week9/problemA.cpp
 * @Description: 问题 A: 零起点学算法91——找出一个数组中出现次数最多的那个元素
 * https://www.cnblogs.com/dddddd/p/6684245.html
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF) {
        int inputArray[20], indexArrayCount[20] = {0};
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &inputArray[i]);
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (inputArray[i] == inputArray[j]) {
                    indexArrayCount[i]++;
                }
            }
            // printf("indexArrayCount[%d]=%d\n", i, indexArrayCount[i]);
        }

        int m = indexArrayCount[0];
        for (int i = 1; i < n; i++) {
            if (indexArrayCount[i] > m)
                m = indexArrayCount[i];
        }

        for (int i = 0; i < n; i++) {
            if (indexArrayCount[i] == m) {
                printf("%d\n", inputArray[i]);
            }
        }
    }
    return 0;
}

// #include <stdio.h>

// #define MAXNUMBER 10000
// int main()
// {
//     int n, inputArray[20], countArray[20] = {0};
//     while (scanf("%d", &n) != EOF) {
//         for (int i = 0; i < n; i++) {
//             scanf("%d", &inputArray[i]);
//         }

//         for(int i = 0; i < MAXNUMBER; i++) {
//             countArray[inputArray[i]]++;
//         }
//         int maxNumber = 0;
//         int maxCount = 0;
//         for(int i = 0; i < MAXNUMBER; i++) {
//             printf("countArray[%d] = %d\n", i, countArray[i]);
//             if(countArray[i] > maxCount) {
//                 maxCount = countArray[i];
//                 maxNumber = i;
//             }
//         }
//         printf("%d\n", maxNumber);
//     }
//     return 0;
// }
/*
 * @Author: Frank Chu
 * @Date: 2022-09-24 15:36:16
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-09-24 15:58:44
 * @FilePath: /Cpp/lab/lab03/ProblemG.c
 * @Description: 问题 G: 求一批正整数中的偶数和
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>

// int main() {
//     int sum = 0;
//     int inputNumber;
//     while(1) {
//         scanf("%d", &inputNumber);
//         if(inputNumber <= 0) {
//             break;
//         }
//         if(inputNumber % 2 == 0) {
//             sum += inputNumber;
//         }
//     }

//     printf("%d\n", sum);
// }

int main() {
    int inputNumber;
    int sum = 0;

    while (scanf("%d", &inputNumber) != EOF) {
        if (inputNumber <= 0) {
            printf("%d\n", sum);
            return 0;
        } else if (inputNumber % 2 == 0) {
            sum += inputNumber;
        }
    }
}
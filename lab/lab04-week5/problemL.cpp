/*
 * @Author: Frank Chu
 * @Date: 2022-10-06 10:40:10
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-06 10:51:16
 * @FilePath: /Cpp/lab/lab04-week5/problemR.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool* SieveOfEratosthenes(int endNumber);

int main() {
    int number;
    scanf("%d", &number);
    printf("%d=", number);
    bool *primeNumerArray = SieveOfEratosthenes(number);
    for(int i = 2; i <= number; i++) {
        while (primeNumerArray[i] && number % i == 0) {
            printf("%d", i);
            number /= i;
            if(number != 1) {
                printf("%s", "*");
            } else {
                printf("\n");
            }
        }
    }
}

bool* SieveOfEratosthenes(int endNumber) {
    int startNumber = 2;

    // bool primeBoolArray[endNumber + 1];

    // memset(primeBoolArray, 1, sizeof(primeBoolArray));

    // https://tomoya92.github.io/2021/10/12/c-summary/
    // C/C++ 指针，堆，栈总结
    // @ 因为局部数组内存地址申请到了栈里，程序结束了地址里数据就没意义了，所以改成向堆里申请应该就好了（ 大概
    // Full Code https://privatebin.net/?ae18733ff9693334#36cHRQnMq37gUv2j68ihRRATa8mY8zcoiVXhqeLiVMj3
    // 可能是这个意思（？
    bool *primeBoolArray;
    primeBoolArray = (bool *) malloc((endNumber + 1) * sizeof(bool));

    memset(primeBoolArray, 1, (endNumber + 1) * sizeof(bool));

    for (int position = startNumber; position * position <= endNumber; position++) {
        if(primeBoolArray[position] == true) {
            for(int i = position * position; i <= endNumber; i += position) {
                primeBoolArray[i] = false;
            }
        }
    }

    return primeBoolArray;
}
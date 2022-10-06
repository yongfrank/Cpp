/*
 * @Author: Frank Chu
 * @Date: 2022-10-06 11:41:07
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-06 11:50:12
 * @FilePath: /Cpp/lab/lab04-week5/problemE-sumOfPrimeNumber.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

bool* SieveOfEratosthenes(int endNumber);
int main() {
    bool *primeNumber = SieveOfEratosthenes(100);
    
    int amountOfNumber;
    scanf("%d", &amountOfNumber);

    int inputNumber;
    int sumOfPrime = 0;
    for(int i = 0; i < amountOfNumber; i++) {
        scanf("%d", &inputNumber);
        if(primeNumber[inputNumber]) {
            sumOfPrime += inputNumber;
            printf("%d ", inputNumber);
        }
    }
    printf("s=%d\n", sumOfPrime);
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
    primeBoolArray[0] = false;
    primeBoolArray[1] = false;
    
    for (int position = startNumber; position * position <= endNumber; position++) {
        if(primeBoolArray[position] == true) {
            for(int i = position * position; i <= endNumber; i += position) {
                primeBoolArray[i] = false;
            }
        }
    }

    return primeBoolArray;
}
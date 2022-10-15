/*
 * @Author: Frank Chu
 * @Date: 2022-10-05 16:33:01
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-07 10:54:54
 * @FilePath: /Cpp/lab/lab04-week5/ProblemJ-goldbachConjecture.cpp
 * @Description: Goldbach Conjecture
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool* SieveOfEratosthenes(int endNumber);
void goldbach(int evenInteger, int end, bool* primeNumber);

int main(){
    int numberStart = 6;
    int numberEnd = 99;
    
    bool *primeNumberArray = SieveOfEratosthenes(numberEnd);

    int numberCount = 0;

    for(int i = numberStart; i <= numberEnd; i += 2) {
        numberCount++;
        goldbach(i, numberEnd, primeNumberArray);
        if (numberCount == 5) {
            printf("\n");
            numberCount = 0;
        } else {
            printf(" ");
        }
    }
    printf("\n");
    // for(int i = 0; i <= 100; i++) {
    //     printf("%d = %d \n", i, *(primeNumberArray + i));
    // }
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

void goldbach(int evenInteger, int end, bool *primeNumber) {
    int primeStart = 2, primeEnd = end;

    for(int i = primeStart; i <= primeEnd; i++) {
        if (primeNumber[i] && primeNumber[evenInteger - i]) {
            printf("%-2d=%-2d+%-2d", evenInteger, i, evenInteger - i);
            break;
        }
    }
}
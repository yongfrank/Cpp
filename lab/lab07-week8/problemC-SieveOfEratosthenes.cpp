/*
 * @Author: Frank Chu
 * @Date: 2022-10-21 21:47:20
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-21 21:59:09
 * @FilePath: /Cpp/lab/lab07-week8/problemC-SieveOfEratosthenes.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include <stdio.h>

// memset()
#include <string.h>

void SieveOfEratosthenes(int endNumber, int amount) {

    // Create a boolean array "prime[0...n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool primeBoolArray[endNumber + 1];

    // void	*memset(void *__b, int __c, size_t __len);
    memset(primeBoolArray, 1, sizeof(primeBoolArray));
    primeBoolArray[0] = false;
    primeBoolArray[1] = false;
    
    for (int positon = 2; positon * positon <= endNumber; positon++) {
        // If prime[positon] is not changed, then it is a prime
        if (primeBoolArray[positon] == true) {
            // Update all multiples of position greater than or 
            // equal to the square of it numbers which are
            // multiple of p and are less than position^2 are
            // already been marked.
            for (int i = positon * positon; i <= endNumber; i += positon) {
                primeBoolArray[i] = false;
            }
        }
    }
    int sum = 0;

    for(int i = 0; i < amount; i++) {
        int temp;
        scanf("%d", &temp);
        if(primeBoolArray[temp]) {
            sum += temp;
            printf("%d ", temp);
        }
    }
    printf("s=%d\n", sum);
}

int main() {
    int amount;
    scanf("%d", &amount);
    SieveOfEratosthenes(100, amount);
}
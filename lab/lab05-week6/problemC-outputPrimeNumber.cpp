/*
 * @Author: Frank Chu
 * @Date: 2022-10-10 08:26:13
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-10 08:28:35
 * @FilePath: /Cpp/lab/lab05-week6/problemC-outputPrimeNumber.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include <string.h>
#include <iomanip>

void SieveOfEratosthenes(int startNumber, int endNumber) {

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

    // Print all prime numbers
    int numberCount = 0;

    for (int position = startNumber; position < endNumber; position++) {
        if (primeBoolArray[position]) {
            numberCount += 1;
            std::cout << std::setw(5) << position;
            if(numberCount == 5) {
                std::cout << std::endl;
                numberCount = 0;
            }
        }
    }
}

// Driver Code
int main() {
    int start = 100;
    int end = 200;
    SieveOfEratosthenes(start, end);
    return 0;
}
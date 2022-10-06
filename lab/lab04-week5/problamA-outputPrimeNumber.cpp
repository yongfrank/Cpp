/*
 * @Author: Frank Chu
 * @Date: 2022-10-02 09:49:43
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-06 11:50:45
 * @FilePath: /Cpp/lab/lab04-week5/problamA-outputPrimeNumber.cpp
 * @Description: 问题 A: 输出200-299之间的所有素数
 * https://www.geeksforgeeks.org/sieve-of-eratosthenes/
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>
#include <string.h>

void SieveOfEratosthenes(int startNumber, int endNumber) {

    // Create a boolean array "prime[0...n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[endNumber + 1];

    // void	*memset(void *__b, int __c, size_t __len);
    memset(prime, 1, sizeof(prime));
    primeBoolArray[0] = false;
    primeBoolArray[1] = false;
    
    for (int positon = 2; positon * positon <= endNumber; positon++) {
        // If prime[positon] is not changed, then it is a prime
        if (prime[positon] == true) {
            // Update all multiples of position greater than or 
            // equal to the square of it numbers which are
            // multiple of p and are less than position^2 are
            // already been marked.
            for (int i = positon * positon; i <= endNumber; i += positon) {
                prime[i] = false;
            }
        }
    }

    // Print all prime numbers
    int numberCount = 0;

    for (int position = startNumber; position < endNumber; position++) {
        if (prime[position]) {
            numberCount += 1;
            std::cout << position;
            if(numberCount == 8) {
                std::cout << std::endl;
                numberCount = 0;
            } else {
                std::cout << " ";
            }
        }
    }
}

// Driver Code
int main() {
    int start = 200;
    int end = 300;
    SieveOfEratosthenes(start, end);
}
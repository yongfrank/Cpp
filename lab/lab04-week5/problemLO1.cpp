/*
 * @Author: Frank Chu
 * @Date: 2022-10-06 10:52:13
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-06 10:59:55
 * @FilePath: /Cpp/lab/lab04-week5/problemRO1.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void primeFactors(int number);

int main() {
    int number;
    scanf("%d", &number);
    primeFactors(number);
}

/// https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/
///
/// Second Approach: This approach is similar to Sieve of Eratosthenes.
/// 
/// We can achieve O(log n) for all composite numbers by consecutive dividing 
/// of the given number by an integer starting from 2 representing current factor 
/// of that number. This approach works on the fact that all composite numbers 
/// have factors in pairs other than 1 or number itself like 6=3 x 2 and 9=3 x 3 
/// whereas for prime numbers there is no such pair other than 1 or the number itself.
void primeFactors(int number) {
    int index = 2;
    printf("%d=", number);

    while (number > 1) {
        if(number % index == 0) {
            number /= index;
            printf("%d", index);
            if(number != 1) {
                printf("%c", '*');
            }
        } else {
            index++;
        }
    }
    printf("\n");
}

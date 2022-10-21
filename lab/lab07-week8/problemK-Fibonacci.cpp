/*
 * @Author: Frank Chu
 * @Date: 2022-10-06 14:40:24
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-20 11:14:14
 * @FilePath: /Cpp/lab/lab07-week8/problemK-Fibonacci.cpp
 * @Description: https://juejin.cn/post/6979930265921519624
 * 斐波那契数列从O(2^n)到O(1)
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

/*
 * @Author: Frank Chu
 * @Date: 2022-10-06 14:40:24
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-06 14:53:21
 * @FilePath: /Cpp/lab/lab04-week5/problemO-fibonacciSequence.cpp
 * @Description: https://juejin.cn/post/6979930265921519624
 * 斐波那契数列从O(2^n)到O(1)
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int fib(int numberOfFibonacci) {
    if (numberOfFibonacci == 0) { return 0; }
    if (numberOfFibonacci == 1 || numberOfFibonacci == 2) {
        // printf("1\n");
        return 1;
    }
    
    // printf("1 1 ");
    
    int previous = 1, current = 1, sumOfFibonacci = 2;
    // int sum = 2;
    for (int i = 3; i <= numberOfFibonacci; i++) {
        sumOfFibonacci = previous + current;
        // printf("%d ", sumOfFibonacci);
        previous = current;
        current = sumOfFibonacci;
        // sum += sumOfFibonacci;
    }
    // printf("\n");
    return sumOfFibonacci;
}

int main () {
    int numberInput;
    scanf("%d", &numberInput);
    while(numberInput > 0) {
        int endNumber;
        int numberOfIndex;
        scanf("%d", &endNumber);
        numberOfIndex = fib(endNumber);
        printf("%d\n", numberOfIndex);
        numberInput--;
    }
}
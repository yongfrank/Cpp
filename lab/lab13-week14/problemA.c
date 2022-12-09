/*
 * @Author: Frank Chu
 * @Date: 2022-12-04 15:58:53
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-04 17:59:48
 * @FilePath: /Cpp/lab/lab13-week14/problemA.c
 * @Description: 对于表达式 n^2 + n + 41，当n在（x,y）范围内取整数值时（包括x,y）(-39 <= x < y <= 50)，判定该表达式的值是否都为素数。
 * 输入数据有多组，每组占一行，由两个整数x，y组成，当x=0,y=0时，表示输入结束，该行不做处理。
 * https://blog.csdn.net/V5ZSQ/article/details/48104093
 * HDU 2012 素数判定（数论）
0 1
0 0
OK

int a[10];
memset(a,0,sizeof(a));	//将每个字节设置为0，此时每个int元素正好也为0
memset(a,1,sizeof(a));	//将每个字节设置为1，此时每个int元素为16843009 = 0x1010101
0x1010101 = 1000000010000000100000001(二进制)
memset()的功能是对str的每一个字节进行ASCII赋值，int占四个字节，所以对int数组进行非0赋值或初始化时不能用memset()函数，只能循环处理/定义时初始化；
https://blog.csdn.net/mayue_web/article/details/86551952
C/C++ int数组初始化

 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <math.h>
#include <memory.h>

int isPrimeNumber(int lhs, int rhs, char* primeArray);
void calculatePrime(char* primeArray);
int main() {
    int lhs, rhs;
    char primeArray[3000];
    // https://learn.microsoft.com/zh-cn/cpp/c-runtime-library/reference/memset-wmemset?view=msvc-170
    // 将缓冲区设置为指定的字符。
    memset(primeArray, '1', sizeof(primeArray));
    calculatePrime(primeArray);
    // test for primeArray
    // for(int position = 1; position < 3000; position++) {
    //     printf("%d: %c ", position, primeArray[position]);
    // }
    while(scanf("%d %d", &lhs, &rhs) != EOF) {
        if(lhs == 0 && rhs == 0) { break; }
        if(isPrimeNumber(lhs, rhs, primeArray) == 1) {
            printf("OK\n");
        } else {
            printf("Sorry\n");
        }
    }
}

void calculatePrime(char* primeArray) {
    
    primeArray[0] = primeArray[1] = '0';
    for(int position = 2; position * position < 3000; position++) {
        if(primeArray[position] == '1') {
            for(int temp = position * position; temp < 3000; temp += position) {
                primeArray[temp] = '0';
            }
        }
    }
    // for(int position = 1; position < 3000; position++) {
    //     printf("%d: %d ", position, primeArray[position]);
    // }
}

int isPrimeNumber(int lhs, int rhs, char* primeArray) {
    for(int i = lhs; i <= rhs; i++) {
        int numberToBeTested = pow(i, 2) + i + 41;
        // printf("%d\n", numberToBeTested);
        // printf("%c\n", primeArray[numberToBeTested]);
        if(primeArray[numberToBeTested] == '0') {
            return 0;
        }
    }
    return 1;
}
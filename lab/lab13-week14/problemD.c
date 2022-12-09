/*
 * @Author: Frank Chu
 * @Date: 2022-12-04 20:33:20
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-04 21:00:26
 * @FilePath: /Cpp/lab/lab13-week14/problemD.c
 * @Description: 有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面m个数，如下图：
 * https://blog.csdn.net/m0_55251293/article/details/120289639
 * 1.1（数构作业）编写函数move(inta[,intn,intm)实现将一个大小为n的整数数组循环左移m位,如：1,2,3,4,5,6,7,8 循环左移三位后结果是4,5,6,7,8,1,2,3。
 * https://blog.csdn.net/weixin_45485719/article/details/103189487
 * Problem F: 指针：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面m个数
 * https://www.cnblogs.com/Camilo/p/3364005.html
 * 有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面m个数。
4 2
1 4 5 6

5 6 1 4

5 3
1 2 3 4 5

3 4 5 1 2
 * 调用后移函数move(move函数自己编写，用来移动数，可采用递归调用，当循环次数m为0时停止调用）
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void moveLastMNumberToFirst(int* array, int amountOfNumber, int mNumbersToFirst) {
    int temp;
    temp = array[amountOfNumber - 1];
    for(int position = amountOfNumber - 1; position > 0; position--) {
        array[position] = array[position - 1];
    }
    array[0] = temp;
    mNumbersToFirst--;
    if(mNumbersToFirst > 0) {
        moveLastMNumberToFirst(array, amountOfNumber, mNumbersToFirst);
    }
}
int main() {
    int amountOfNumber, mNumbersToFirst;
    while(scanf("%d %d", &amountOfNumber, &mNumbersToFirst) != EOF) {
        int array[amountOfNumber];
        for(int i = 0; i < amountOfNumber; i++) {
            scanf("%d", &array[i]);
        }
        moveLastMNumberToFirst(array, amountOfNumber, mNumbersToFirst);
        for(int i = 0; i < amountOfNumber; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
}
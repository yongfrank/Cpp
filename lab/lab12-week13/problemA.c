/*
 * @Author: Frank Chu
 * @Date: 2022-11-28 09:20:13
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-28 09:30:28
 * @FilePath: /Cpp/lab/lab12-week13/problemA.c
 * @Description:  
 * 众所周知，黄山市一片山（而不是一座山）。假设这些山排成了一排，每座山有各自的高度。现在游客们从最左边看山，有些山因为高度没有它左边的某座山高，就会被遮住，游客们就无法看到。
 * 现在请告诉游客，他能看到几座山（看到山顶即可被认为看到了，如果恰好山顶被遮住了，这座山也不算被看到）
5
3 7 7 2 8

3
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>
#include <stdlib.h>

int countMountainToBeSeen(int* mountains, int size);
int main() {
    int amountOfMountain;
    while(scanf("%d", &amountOfMountain) != EOF) {

        // 使用malloc为指针分配内存空间 https://blog.csdn.net/DucklikeJAVA/article/details/63699040
        int* mountains = malloc(amountOfMountain * sizeof(int));

        for(int i = 0; i < amountOfMountain; i++) {
            scanf("%d", mountains + i);
        }
        printf("%d\n", countMountainToBeSeen(mountains, amountOfMountain));
        // for(int i = 0; i < amountOfMountain; i++) {
        //     printf("%d", *(mountains + i));
        // }
    }
}

int countMountainToBeSeen(int* mountains, int size) {
    int max = *(mountains);
    int canBeSeen = 1;

    for(int i = 1; i < size; i++) {
        if(*(mountains + i) > max) {
            canBeSeen++;
            max = *(mountains + i);
        }
    }
    return canBeSeen;
}
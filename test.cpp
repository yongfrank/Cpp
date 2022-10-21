/*
 * @Author: Frank Chu
 * @Date: 2022-10-21 19:58:01
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-21 21:41:09
 * @FilePath: /Cpp/test.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
#include <stdlib.h> //qsort()

/// @brief x_void - y_void: ascend 1 2 3 4 5
///        y_void - x_void: descend 5 4 3 2 1
/// @param x_void pointer to x
/// @param y_void pointer to y
/// @return whether exchange x with y
int compare(const void* x_void, const void* y_void) {
    // *(pointer) is number
    return *(int*) x_void - *(int*) y_void;
    // return *(float*) x_void - *(float*) y_void;
    // return &(y_void) - &(x_void);
}

/// @brief print sorted array
/// @param size the size of array to be sort
void outputSortedArray(int size) {
    //     int x[] = {4,5,2,3,1,0,9,8,6,7};
    int a[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // IMPORTANT
    // void qsort(
    //              void *__base,  -> array
    //              size_t __nel,  -> size of a element in array, or sizeof(int/float)
    //              size_t __width,  -> width of full array
    //              int (*__compar)(const void *, const void *))
    // posix_memalign is now declared in _malloc.h
    // *array is first element of array
    qsort(a, sizeof(a) / sizeof(*a), sizeof(*a), compare);
    // IMPORTANT ENDS HERE

    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    outputSortedArray(4);
}
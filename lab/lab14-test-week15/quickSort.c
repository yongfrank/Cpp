/*
 * @Author: Frank Chu
 * @Date: 2022-12-12 10:40:51
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-12 12:54:22
 * @FilePath: /Cpp/lab/lab14-test-week15/quickSort.c
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
void quickSortMiddle(int array[], int left, int right) {
    if (left >= right) { return; }
    int i = left - 1;
    int j = right + 1;
    int key = array[0];
    while (i < j) {
        // while (array[i] < key) { i++; }
        // while (array[j] > key) { j--; }
        do { i++; } while(array[i] < key);
        do { j--; } while(array[j] > key);
        if (i < j) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    // quickSort(array, left, j);
    // quickSort(array, j + 1, right);
}

void quickSort(int array[], int left, int right) {
    if (left >= right) {
        return;
    }
    int i = left;
    int j = right;
    int key = array[left];
    while (i < j) {
        while (i < j && array[j] >= key) {
            j--;
        }
        array[i] = array[j];
        while (i < j && array[i] <= key) {
            i++;
        }
        array[j] = array[i];
    }
    array[i] = key;
    quickSort(array, left, i - 1);
    quickSort(array, i + 1, right);
}
    
// int* sortArray(int* array, int n, int* return_size){
//     quickSort(array, 0, n - 1);
//     return array;
// }
int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    quickSort(array, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
// int main() {
//     int n;
//     scanf("%d", &n);
//     int array[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &array[i]);
//     }
//     int* arr = sortArray(array, n, &n);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", *(arr + i));
//     }
//     return 0;
// }
// [5,1,1,2,0,0]
// 6 5 1 1 2 0 0
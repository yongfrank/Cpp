/*
 * @Author: Frank Chu
 * @Date: 2022-12-12 12:48:50
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-12 14:16:03
 * @FilePath: /Cpp/lab/lab14-test-week15/mergesort.c
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>

void combine(int array[], int left, int mid, int right) {
    int temp[right - left + 1];
    int tempIndex = 0;
    int leftIndex = left;
    int rightIndex = mid + 1;
    while(leftIndex <= mid && rightIndex <= right) {
        if(array[leftIndex] <= array[rightIndex]) {
            temp[tempIndex] = array[leftIndex];
            leftIndex++;
            tempIndex++;
        } else {
            temp[tempIndex] = array[rightIndex];
            tempIndex++;
            rightIndex++;
        }
    }
    while(leftIndex <= mid) {
        temp[tempIndex] = array[leftIndex];
        tempIndex++;
        leftIndex++;
    }
    while(rightIndex <= right) {
        temp[tempIndex] = array[rightIndex];
        tempIndex++;
        rightIndex++;
    }
    for(int i = left, j = 0; i <= right; i++, j++) {
        array[i] = temp[j];
    }
}

void mergeSort(int array[], int left, int right) {
    if (left < right) {
        int midIndex = (left + right) / 2;
        mergeSort(array, left, midIndex);
        mergeSort(array, midIndex + 1, right);
        combine(array, left, midIndex, right);
    }
}

// #include <stdio.h>

// void combine(int array[], int left, int mid, int right) {
//     int temp[right - left + 1];
//     int i = left;
//     int j = mid + 1;
//     int k = 0;
//     while (i <= mid && j <= right) {
//         if (array[i] <= array[j]) {
//             temp[k++] = array[i++];
//         } else {
//             temp[k++] = array[j++];
//         }
//     }
//     while (i <= mid) {
//         temp[k++] = array[i++];
//     }
//     while (j <= right) {
//         temp[k++] = array[j++];
//     }
//     for (int i = left, j = 0; i <= right; i++, j++) {
//         array[i] = temp[j];
//     }
// }

// void mergeSort(int array[], int left, int right) {
//     if (left >= right) {
//         return;
//     }
//     int mid = (left + right) / 2;
//     mergeSort(array, left, mid);
//     mergeSort(array, mid + 1, right);
//     combine(array, left, mid, right);
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     int array[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &array[i]);
//     }
//     mergeSort(array, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", array[i]);
//     }
//     return 0;
// }
// // 6 5 1 1 2 0 0
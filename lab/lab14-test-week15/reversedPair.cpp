/*
 * @Author: Frank Chu
 * @Date: 2022-12-12 15:09:41
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-12 15:46:31
 * @FilePath: /Cpp/lab/lab14-test-week15/reversedPair.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

// int n, a[500010], c[500010];
// long long ans;

// // 直接用冒泡排序会TLE，因为这题本质在求逆序对，而归并排序可以快速求逆序对，故用此法
// void msort(int b, int e)
// {
// 	if (b == e)
// 		return;

// 	int mid = (b + e) / 2, i = b, j = mid + 1, k = b;
// 	msort(b, mid), msort(mid + 1, e);

// 	while (i <= mid && j <= e)
// 	{
// 		if (a[i] <= a[j])
// 		{
// 			c[k++] = a[i++];
// 		}
// 		else
// 		{
// 			c[k++] = a[j++], ans += mid - i + 1; // 统计答案
// 		}
// 	}
// 	while (i <= mid)
// 	{
// 		c[k++] = a[i++];
// 	}
// 	while (j <= e)
// 	{
// 		c[k++] = a[j++];
// 	}
// 	for (int l = b; l <= e; l++)
// 	{
// 		a[l] = c[l];
// 	}
// }

// int reversePairs(int* nums, int numsSize){
//     for(int i = 1; i <= numsSize; i++) {
//         a[i] = nums[i - 1];
//     }
// 	for(int i = 1; i <= numsSize; i++) {
//         printf("%d ", a[i]);
//     }
// 	printf("Start\n");
// 	n = numsSize;
//     msort(1, n);
//     return ans;
// }

void combineArrays(int array[], int left, int mid, int right, int* ans) {
    int tempArray[right - left + 1];
    int tempIndex = 0;
    int leftIndex = left;
    int rightIndex = mid + 1;
    while(leftIndex <= mid && rightIndex <= right) {
        if(array[leftIndex] <= array[rightIndex]) {
            tempArray[tempIndex++] = array[leftIndex++];
        } else {
            tempArray[tempIndex++] = array[rightIndex++];
            *ans = *ans + mid - leftIndex + 1;
        }
    }
    while(leftIndex <= mid) {
        tempArray[tempIndex++] = array[leftIndex++];
    }
    while(rightIndex <= right) {
        tempArray[tempIndex++] = array[rightIndex++];
    }

    tempIndex = 0;
    int arrayIndex = left;
    while(arrayIndex < rightIndex) {
        array[arrayIndex++] = tempArray[tempIndex++];
    }
}

int mergeSort(int array[], int left, int right) {
	int answer = 0;
    int* ans = &answer;
    if (left < right) {
        int midIndex = (left + right) / 2;
        mergeSort(array, left, midIndex);
        mergeSort(array, midIndex + 1, right);
        combineArrays(array, left, midIndex, right, ans);
    }
    answer = *ans;
	return answer;
}

int reversePairs(int* nums, int numsSize){
    return mergeSort(nums, 0, numsSize - 1);
}

int main() {
    int array[] = {1, 5, 3, 4, 2};
    int size = sizeof(array) / sizeof(array[0]);
    printf("%d", reversePairs(array, size));
}
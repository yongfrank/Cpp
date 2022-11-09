/*
 * @Author: Frank Chu
 * @Date: 2022-11-09 10:34:55
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-09 11:12:20
 * @FilePath: /Cpp/lab/lab09-week10/problem1.cpp
 * @Description: 指针：调用自定义交换函数，完成三个数整从小到大排列
 * https://blog.csdn.net/z2431435/article/details/84697467
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
void swap(int *p1, int *p2)
{
    int t;
    if (*p1 > *p2)
    {
        t = *p1; //*p1即p1代表的地址所指的变量，在这里是int型，即a
        *p1 = *p2;
        *p2 = t;
    }
}
int main()
{
    int a, b, c;
    while (scanf("%d%d%d", &a, &b, &c) != EOF)
    {
        swap(&a, &b); //三个式子顺序很重要，swap(a,b)或swap(*p,*q)都是错的
        swap(&a, &c);
        swap(&b, &c);
        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}
// #include <stdio.h>

// #include <iostream>
// #include <algorithm>
// #include <vector>
// int main () {
//     int x = 20, y = 30;
//     std::swap(x, y);
//     std::cout << x << " " << y << "\n";

//     std::vector<int> v {1, 7, 9, 4, 5, 2, 0};

//     auto i = std::max_element(begin(v), end(v));

//     std::cout << *i << std::endl;
// }

// #include <stdio.h>

// void swap(int* a, int* b);
// void outputSortedArray(int a, int b, int c);
// int main() {
//     int a, b, c;
//     while(scanf("%d %d %d", &a, &b, &c) != EOF) {
//         outputSortedArray(a, b, c);
//     }
// }

// void outputSortedArray(int a, int b, int c) {
//     const int length = 3;
//     int arr[] = {a, b, c};

//     for(int i = 0; i < length; i++) {
//         for(int j = 0; j < length - i; j++) {
//             if(arr[j] > arr[j + 1]) {
//                 swap(&arr[j], &arr[j + 1]);
//             }
//         }
//     }

//     for(int i = 0; i < length; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// void swap(int* lhs, int* rhs) {
//     int temp = *lhs;
//     *lhs = *rhs;
//     *rhs = temp;
// }
'''
Author: Frank Chu
Date: 2022-12-12 09:42:51
LastEditors: Frank Chu
LastEditTime: 2022-12-12 09:45:38
FilePath: /Cpp/lab/lab14-test-week15/bubblesort.py
Description: 

Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
'''
def bubble_sort(arr):
    times = 0
    for i in range(len(arr)):
        for j in range(len(arr)-1-i):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                times += 1
    
    return times

if __name__ == "__main__":
    test_cases = int(input())
    array = input()
    l = list(map(int,array.split(' ')))
    print(bubble_sort(l))
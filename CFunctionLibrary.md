<!--
 * @Author: Frank Chu
 * @Date: 2022-10-21 19:56:01
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-21 11:43:10
 * @FilePath: /Cpp/CFunctionLibrary.md
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
-->
# C Function Library

## Sort

[`std::sort` - cppreference.com](https://en.cppreference.com/w/cpp/algorithm/sort)

```cpp
// cpp std::sort
#include <array>
#include <iostream>

int main() {
    // int arrayOfNumber[10] = {1, 2, 5, 4, 3};
    std::array<int, 5> arrayOfNumber = {1, 2, 5, 4, 3};

    auto print = [&arrayOfNumber](std::string_view const rem) {
        for (auto a : arrayOfNumber) {
            std::cout << a << ' ';
        }
        std::cout << ": " << rem << '\n';
    };

    // IMPORTANT
    std::sort(arrayOfNumber.begin(), arrayOfNumber.end());
    print("sorted with the default operator<");
    // IMPORTANT ENDS HERE

    std::sort(arrayOfNumber.begin(), arrayOfNumber.end(), std::greater<int>());
    print("sorted with the standard library compare function object");
}
```

[C library function to perform sort](https://stackoverflow.com/questions/1787996/c-library-function-to-perform-sort)

```c
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
```

## Sieve of Eratosthenes

```cpp
#include<iostream>

// memset()
#include <string.h>
void SieveOfEratosthenes(int startNumber, int endNumber) {

    // Create a boolean array "prime[0...n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool primeBoolArray[endNumber + 1];

    // void	*memset(void *__b, int __c, size_t __len);
    memset(primeBoolArray, 1, sizeof(primeBoolArray));
    primeBoolArray[0] = false;
    primeBoolArray[1] = false;
    
    for (int positon = 2; positon * positon <= endNumber; positon++) {
        // If prime[positon] is not changed, then it is a prime
        if (primeBoolArray[positon] == true) {
            // Update all multiples of position greater than or 
            // equal to the square of it numbers which are
            // multiple of p and are less than position^2 are
            // already been marked.
            for (int i = positon * positon; i <= endNumber; i += positon) {
                primeBoolArray[i] = false;
            }
        }
    }

    // Print Part
    for (int position = startNumber; position < endNumber; position++) {
        if (primeBoolArray[position]) {
            std::cout << position << " ";
        }
    }
}
```

## Input of Array in C

### `fgets`

* [How to remove trailing newline character from fgets input?](https://aticleworld.com/remove-trailing-newline-character-from-fgets/)
* [从fgets()输入中删除尾部换行符的方法](https://juejin.cn/post/7109794485525020703)
* [Get span until character in string](https://cplusplus.com/reference/cstring/strcspn/)
* [C 库函数 - fgets()](https://www.runoob.com/cprogramming/c-function-fgets.html)

```c
#include <stdio.h>
#include <string.h>
#define  BUFFER_SIZE 24
int main(void)
{
    char buf[BUFFER_SIZE];
    printf("Enter the data = ");
    if (fgets(buf, sizeof(buf), stdin) == NULL) {
        printf("Fail to read the input stream");
    } else {
        buf[strlen(buf) - 1] = '\0';
    }
    printf("Entered Data = %s\n",buf);
    return 0;
}
```

### `gets`

It's unsafe

```c
#define ARRAYSIZE 100
char str[ARRAYSIZE];

while(gets(str) != NULL) {

}
```

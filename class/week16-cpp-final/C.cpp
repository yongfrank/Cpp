/*
 * @Author: Frank Chu
 * @Date: 2022-12-23 10:19:13
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-23 10:25:51
 * @FilePath: /Cpp/class/week16-cpp-final/C.cpp
 * @Description: 
以下类模板是对一个 T 类型的数组查找其最大值和最小值。请按程序说明实现各方法并在 main 函数中实例化该模板并测试之。

答案需包括完整的类方法实现和测试用的main函数。
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <iostream>

/**
 * @brief 以下类模板是对一个 T 类型的数组查找其最大值和最小值。请按程序说明实现各方法并在 main 函数中实例化该模板并测试之。
 * @tparam T 模版参数
 */
template<class T>
class Array
{
    T* array; // 内部指针，指向T类型数组
    int length; // 数组元素个数
public:
    Array(T array[], int n);
    //通过数组构建 Array 对象，将T型数组 array 深度拷贝至内部指针指向的堆数组对象
    int max(); // 返回数组内元素的最大值所处的位置；
    int min(); // 返回数组内元素最小值所处的位置；
    T operator[](int); // 重载下标运算符
    ~Array(); //释放 array 所指之堆数组对象
};

template<class T>
Array<T>::Array(T array[], int n) {
    this->length = n;
    this->array = new T[n];
    for (int i = 0; i < n; i++) {
        this->array[i] = array[i];
    }
}

template<class T>
int Array<T>::max() {
    int max = 0;
    for (int i = 0; i < this->length; i++) {
        if (this->array[i] > this->array[max]) {
            max = i;
        }
    }
    return max;
}

template<class T>
int Array<T>::min() {
    int min = 0;
    for (int i = 0; i < this->length; i++) {
        if (this->array[i] < this->array[min]) {
            min = i;
        }
    }
    return min;
}

template<class T>
T Array<T>::operator[](int index) {
    return this->array[index];
}

template<class T>
Array<T>::~Array() {
    delete[] this->array;
}

int main() {
    int a[] = {10, 1, 2, 3, 4, 5};
    Array<int> array(a, 6);
    std::cout << array.max() << std::endl;
    std::cout << array.min() << std::endl;
    std::cout << array[0] << std::endl;

    return 0;
}

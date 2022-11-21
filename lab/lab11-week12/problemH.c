/*
 * @Author: Frank Chu
 * @Date: 2022-11-21 12:13:20
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-21 12:20:58
 * @FilePath: /Cpp/lab/lab11-week12/problemH.c
 * @Description:
 * 下面程序中"____ N ____"是根据程序功能需要填充部分，请完成程序填充（注意：不得加行、减行、加句、减句，否则后果自负）。
 * 该程序功能：调用函数f，将1个整数首尾倒置，若程序输入12345，则输出54321；若程序输入-34567，则输出-76543。
```c
#include <stdio.h>
long f(long n)
{
    long m, y = 0;
    m = fabs(n);
    while (m != 0)
    {
        y = y * 10 + m % 10;
        ______1______;
    }
    if (_______2_____)
        return y;
    else
        return -y;
}
int main()
{
    printf("%ld\n", f(12345));
    printf("%ld\n", f(-34567));
    return 0;
}
```
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */

#include <stdio.h>
#include <math.h> // fabs()
// #include <stdlib.h> // abs() labs()

/**
 * @brief 
 * @param  n                My Param doc
 * @return long 
 * @see
 * * c语言中，abs()和fabs()的区别？ https://blog.csdn.net/sunshineacm/article/details/80084845
 * * C fabs() https://www.programiz.com/c-programming/library-function/math.h/fabs
 */
long f(long n)
{
    long m, y = 0;
    m = fabs(n);
    while (m != 0)
    {
        y = y * 10 + m % 10;
        m /= 10;
    }
    if (n > 0)
        return y;
    else
        return -y;
}
int main()
{
    printf("%ld\n", f(12345));
    printf("%ld\n", f(-34567));
    return 0;
}
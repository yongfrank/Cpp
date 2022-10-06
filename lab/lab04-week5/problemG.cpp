/*
 * @Author: Frank Chu
 * @Date: 2022-10-06 12:01:25
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-06 12:02:29
 * @FilePath: /Cpp/lab/lab04-week5/problemG.cpp
 * @Description:
 * 作者：超级摆烂王
 * 链接：https://juejin.cn/post/7080805161148350500
 * 来源：稀土掘金
 * 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>
#include <math.h>
int main()
{
    double fact(int n);
    int i;
    double x, s;
    // while (scanf("%lf", &x) != EOF)
    // {
        scanf("%lf", &x);
        i = 1;
        s = 0;
        while (pow(x, i) * 1.0 / fact(i) >= 0.00001) //满足成立条件，前提
        {
            s += pow(x, i) * 1.0 / fact(i); //即s=s+pow(x,i)*1.0/fact(i)
            i++;                            // 1,2,3数字不断增大
        }                                   //本次循环结束，要输出s的值
        printf("%.3f\n", s);
    // }
    return 0;
}
double fact(int n) //定义fact（）即阶乘，看起来更方便清楚
{
    double sum = 1; //老道理：叠乘设一，叠加设零
    while (n > 0)
    { //循环成立条件
        sum = sum * n;
        n--;
    }           //从n开始叠乘，n！=n*（n-1）*（n-2）*。。。。*1
    return sum; //返回到原值，刚才设什么返回什么，这边不能return 0
}
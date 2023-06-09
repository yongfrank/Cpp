/*
 * @Author: Frank Chu
 * @Date: 2022-12-19 09:54:03
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-19 10:02:22
 * @FilePath: /Cpp/lab/lab15-week16-c/problemD.cpp
 * @Description: 
问题 D: 传送阵
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 128 MB

提交问题列表
题目描述

 诗曰：混沌未分天地乱，茫茫渺渺无人见。自从盘古破鸿蒙，开辟从兹清浊辨。
    覆载群生仰至仁，发明万物皆成善。欲知造化会元功，快码佳编释厄传。
正当中华步入昌盛之时，先有中兴遭封杀，后有华为遇围剿。中华科技遇千年难逢之际，又陷百年未有之困境。在这个时候快码佳编诞生了。他们担负起中国科技青少年教育的重担。快码佳编四兄弟姐妹分别为快快、码码、佳佳和编编。
为了更好地能将中华五千年文化融入到科技教育中，他们决定到远古时期去走一走。他们知道杭州黄龙洞有一座传送阵，可以传送到古代。
那天，他们来到了黄龙洞，发现传送阵上有四个按钮，每个按钮上有个算式，说出2个正整数a和b,然后代入这个算式，

计算出来的结果如果能被2整除，那么他们将回到夏朝，
如果能被3整除，他们将回到汉朝，
如果能被5整除，他们将回到唐朝，
能被7整除，他们将回到元朝，
如果上述情况都不行，传送送将不起作用，如果能被多个整除，将按上述顺序第一个的生效。

现在知道这四个算式为
(1)a*2+b*3-7ab
(2)5a+9
(3)7a-4b
(4)ab
输入

 输入3个正整数，分别为a b和算式号

输出

输出分2行，第1行输出算式的值，第2行根据传送朝代输出拼音，
夏朝  汉朝    唐朝    元朝   未能传送
xia     han    tang    yuan   wei
样例输入 Copy

1 3 2
样例输出 Copy

14
xia
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <cstdio>
#include <string>

std::string getDynasty(int a, int b, int& result, int equationNumber) {

    switch (equationNumber) {
        case 1:
            result = a * 2 + b * 3 - 7 * a * b;
            break;
        case 2:
            result = 5 * a + 9;
            break;
        case 3:
            result = 7 * a - 4 * b;
            break;
        case 4:
            result = a * b;
            break;
    }

    int dynasty = 0;
    if (result % 2 == 0) {
        dynasty = 2;
    } else if (result % 3 == 0) {
        dynasty = 3;
    } else if (result % 5 == 0) {
        dynasty = 5;
    } else if (result % 7 == 0) {
        dynasty = 7;
    }
    
    switch (dynasty) {
        case 2:
            return "xia";
        case 3:
            return "han";
        case 5:
            return "tang";
        case 7:
            return "yuan";
        default:
            return "wei";
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int result = 0;
    std::string dynasty = getDynasty(a, b, result, c);
    printf("%d\n", result);
    printf("%s", dynasty.c_str());
}
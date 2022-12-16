/*
 * @Author: Frank Chu
 * @Date: 2022-12-10 15:46:12
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-10 15:58:17
 * @FilePath: /Cpp/lab/lab14-week15/problemF-complexity.c
 * @Description: https://www.cnblogs.com/chenlong991223/p/10168752.html
问题 F: 深入浅出学算法003-计算复杂度
[命题人 : 外部导入]
时间限制 : 1.000 sec  内存限制 : 64 MB

提交问题列表
题目描述

算法复杂度一般分为：时间复杂度、空间复杂度、编程复杂度。 这三个复杂度本身是矛盾体，不能一味地追求降低某一复杂度，否则会带来其他复杂度的增加。
在权衡各方面的情况下，降低时间复杂度成为本课程学习的重点之一。 
请计算下面几个程序段的复杂程度，分别用1、logn、n、nlogn、n^2、n^3或2^n来表示

程序片段1： x=x+1;
程序片段2： for(k=1;k<=n;k++) { x=x+1; }
程序片段3： for(k=1,t=1;k<=n;k++) { t=t*2; for(j=1;j<=t;j++) x=x+j; } 
程序片段4： for(k=1;k<=n;k++) { for(j=1;j<=k;j++) x=x+j; } 
程序片段5： m=0; for(k=1,t=1;k<=n;k++) { t=t*2; for(j=t;j<=n;j++) m++; } 
程序片段6： m=0; for(k=1;k<=n;k++) { for(j=1;j<=n;j++) m++; } 
程序片段7： m=0; for(k=1;k<=n;k++) { for(j=1;j<=n;j++) for(i=1;i<=n;i++) m++; }

输入
多组测试数据，首先在第一行输入整数T表示提问次数 然后是n行，每行是1个整数，表示程序片段号

输出
对于每次提问，在1行输出对应程序片段对应的复杂程度（注意必须按前面提示的输出，注意大小写

样例输入 Copy

2
1
2
样例输出 Copy

1
n
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>

int main() {
    int TTestCase;
    scanf("%d", &TTestCase);
    while (TTestCase--) {
        int n;
        scanf("%d", &n);
        switch (n) {
            case 1:
                printf("1\n");
                break;
            case 2:
                printf("n\n");
                break;
            case 3:
                printf("2^n\n");
                break;
            case 4:
                printf("n^2\n");
                break;
            case 5:
                printf("nlogn\n");
                break;
            case 6:
                printf("n^2\n");
                break;
            case 7:
                printf("n^3\n");
                break;
        
        }
    }
            
}
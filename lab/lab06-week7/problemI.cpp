/*
 * @Author: Frank Chu
 * @Date: 2022-10-15 11:02:55
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-15 11:04:49
 * @FilePath: /Cpp/lab/lab06-week7/problemI.cpp
 * @Description: https://juejin.cn/post/7080805923668623374
 * 打印所有低于平均分的分数（数组）
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
int main()
{
    int n, i, flag;
    float ave, s;
    while (scanf("%d", &n) != EOF)
    {
        s = 0; // s=0要放在while里面不然第二次时判定s为上一次的值
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            s += (float)a[i]; //要求输入整数a【i】但s为float型，必须在a【i】前加（float）
        }
        ave = s / n;
        flag = 1; // flag=1放在外面，放在for内则每次自动使得flag=1
        for (i = 0; i < n; i++)
        {

            if (a[i] < ave)
            {
                if (flag == 1) //能确定次数则用for语句方便格式表现，无法确定则利用flag
                {
                    printf("%d", a[i]);
                    flag = 0;
                }
                else if (flag == 0) //这边的else必须加
                    printf(" %d", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
/*
 * @Author: Frank Chu
 * @Date: 2022-12-04 21:02:49
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-04 21:09:42
 * @FilePath: /Cpp/lab/lab13-week14/problemE.c
 * @Description: 
 * 为了方便接待，学校已经将暗号提前告诉来宾了，你只需要将来宾的暗号——一个数，对7取余+1，就可以安排给相应的学院。学院数字对应表如下
信息学院 1 xinxi
理学院   2 li
机控学院 3 jikong
服装学院 4 fuzhuang
建筑学院 5 jizhu
经管学院 6 jingguan
其他学院 7 other

多组测试数据，先输入一个整数t,表示来的客人，然后是t个整数，为客人的暗号
对于每个客人，你需要输出一行，内容为学院对应的拼音码（见上表）
2
49
6

xinxi
other
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void printCollege(int guestNumber) {
    guestNumber = guestNumber % 7 + 1;
    switch (guestNumber)
    {
        case 1:
            printf("xinxi\n");
            break;
        case 2:
            printf("li\n");
            break;
        case 3:
            printf("jikong\n");
            break;
        case 4:
            printf("fuzhuang\n");
            break;
        case 5:
            printf("jizhu\n");
            break;
        case 6:
            printf("jingguan\n");
            break;
        case 7:
            printf("other\n");
            break;
        default:
            break;
    }
}

int main() {
    int guestAmount;
    while(scanf("%d", &guestAmount) != EOF) {
        int guestNumber;
        for(int i = 0; i < guestAmount; i++) {
            scanf("%d", &guestNumber);
            printCollege(guestNumber);
        }
    }
}
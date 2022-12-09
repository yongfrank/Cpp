/*
 * @Author: Frank Chu
 * @Date: 2022-12-04 21:37:51
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-04 22:32:19
 * @FilePath: /Cpp/lab/lab13-week14/problemH-OpenChest.c
 * @Description: https://www.cnblogs.com/chenlong991223/p/10198007.html
 * Problem A&B: 开宝箱 1/2 （最沙雕的做法）（未用指针做） 改：附上一种指针做法
 * https://www.twblogs.net/a/5e54a5b1bd9eee2117c54a70/?lang=zh-cn
 * 青蛙过河 猴子爬山 兔子繁殖 开宝箱2 找气球 指针函数 铺地砖

第一行两个数字n,m.(1<=n,m<=20)
接下来n个数字ai表示密码表上序号1到序号n的密码分别是多少。(1 <=ai<=100)
接下来m行每行两个数字u,v。(1 <= u<=m,1<= v <=n)

然后给你一个T，表示T次操作。(1<=T<= 20)
接下来的T行，每行的第一个数字op，表示第op种操作。
第1种操作：接下来有一个数字x，表示宝箱上的数字。(1<=x<=m)。
第2种操作：接下来有三个数字x,u,v，表示x号地点的数字改成u，v。

每次执行第一种操作1后，输出一个数字表示最后的密码。（每个数字占1行）。

5 4
1 2 3 4 5
2 4
3 3
1 2
2 5
4
1 1
2 1 4 2
1 1
1 2

3
5
2
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

int searchForPassword(int* passwordTable, int* placesDirections) {
    return passwordTable[placesDirections[1] - 1];
}

void changePlacesDirections(int* placeToBeChanged, int uFirstNumberOnPlace, int vSecondNumberOnPlace){
    placeToBeChanged[0] = uFirstNumberOnPlace;
    placeToBeChanged[1] = vSecondNumberOnPlace;
}

int main() {
    int nPasswordTable, mNumberOfPlaces;
    while(scanf("%d %d", &nPasswordTable, &mNumberOfPlaces) != EOF) {
        
        int passwordTable[nPasswordTable];
        for(int i = 0; i < nPasswordTable; i++) {
            scanf("%d", &passwordTable[i]);
        }
        
        int placesLists[mNumberOfPlaces][2];
        for(int i = 0; i < mNumberOfPlaces; i++) {
            scanf("%d %d", &placesLists[i][0], &placesLists[i][1]);
        }

        int tOperationTimes, operationType;
        scanf("%d", &tOperationTimes);
        for(int i = 0; i < tOperationTimes; i++) {
            scanf("%d", &operationType);
            if(operationType == 1) {
                int placeToBeSearched;
                scanf("%d", &placeToBeSearched);
                placeToBeSearched = placesLists[placeToBeSearched - 1][0];
                printf("%d\n", searchForPassword(passwordTable, placesLists[placeToBeSearched - 1]));
            } else if(operationType == 2) {
                int placeToBeChanged, uFirstNumberOnPlace, vSecondNumberOnPlace;
                scanf("%d %d %d", &placeToBeChanged, &uFirstNumberOnPlace, &vSecondNumberOnPlace);
                changePlacesDirections(placesLists[placeToBeChanged - 1], uFirstNumberOnPlace, vSecondNumberOnPlace);
            }
        }
    }
}
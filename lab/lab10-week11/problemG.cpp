/*
 * @Author: Frank Chu
 * @Date: 2022-11-14 16:54:08
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-14 22:11:24
 * @FilePath: /Cpp/lab/lab10-week11/problemG.cpp
 * @Description: 问题 G: 部分复制字符串
 * https://blog.csdn.net/z2431435/article/details/84710533
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include "stdio.h"
#include "string.h"
#include <stdio.h>
#include <string.h>
int main()
{
    void copystr(char *,char *,int);
    int m;
    char str1[80],str2[80];
    while(scanf("%d",&m)!=EOF)
    {
        gets(str1);
        if(strlen(str1)>=m)
        {
            copystr(str1,str2,m);
            printf("%s\n",str2);
        }
    }
    return 0;
}

void copystr(char *p1,char *p2,int m)
{
    p1=p1+m;
    while(*p1!='\0')//判断条件，*p1是否为空即是否已结束
    {
        *p2=*p1;
        p1++;
        p2++;
    }
    *p2='\0';//最后一位要补上‘\0’

}
// int main() {
//     char* stringInput = NULL;
//     int index;
//     size_t size = 0;
//     while(scanf("%d ", &index) != EOF) {
//         getline(&stringInput, &size, stdin);

//         int i = 0;
//         while(*(stringInput + i) != '\n') { i++; }
//         *(stringInput + i) = '\0';
        
//         char newString[100];
//         strcpy(newString, stringInput + index - 1);

//         puts(newString);
//     }
// }
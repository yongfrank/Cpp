/*
 * @Author: Frank Chu
 * @Date: 2022-11-04 13:35:39
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-04 13:52:48
 * @FilePath: /Cpp/class/week9/test.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */

#include <stdio.h>

void squeeze(char s[],char c)

{

        int i, j;

for( i= j =0;s[i] != '\0';i++)

{

        if(s[i]!=c)

       {

        s[j] = s[i];

           j++;

}

}

s[j]='\0';

}

int main () {
    char str[] = "apple";
    squeeze(str, 'p');
    puts(str);
    printf("%c", str);
}
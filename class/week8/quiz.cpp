/*
 * @Author: Frank Chu
 * @Date: 2022-10-28 13:35:54
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-28 14:57:52
 * @FilePath: /Cpp/class/week8/quiz.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
   # include "stdio.h"
   int main( )
   { 
       int a[3][2]={1, 2, 3, 4, 5, 6};
      for(int k=0; k<3; k++)
        for(int j=0; j<2; j++)
          printf("%d,", a[k][j]);
    }
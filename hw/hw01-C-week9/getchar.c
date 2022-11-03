/*
 * @Author: Frank Chu
 * @Date: 2022-11-03 11:13:10
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-11-03 11:18:18
 * @FilePath: /Cpp/hw/hw01-C-week9/getchar.c
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{ 
    int ch;
    while ((ch=getchar()) != EOF)   /* read/print "abcde" from stdin */
          printf("%c", ch);
 
    /* Test reason for reaching EOF. */
    if (feof(stdin))          /* if failure caused by end-of-file condition */
       puts("End of file reached");
    else if (ferror(stdin))   /* if failure caused by some other error      */
         {
            perror("getchar()");
            fprintf(stderr,"getchar() failed in file %s at line # %d\n", __FILE__,__LINE__-9);
            exit(EXIT_FAILURE);
         }
 
    return EXIT_SUCCESS;
}
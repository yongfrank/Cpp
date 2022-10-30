/*
 * @Author: Frank Chu
 * @Date: 2022-10-30 11:16:19
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-30 11:16:38
 * @FilePath: /Cpp/lab/lab08-week9/problemP-caesar-cipher-extended.cpp
 * @Description:
 *
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved.
 */
#include <stdio.h>

int main()
{
    char message[100], ch;
    int i, key;
    printf("Enter a message to encrypt: ");
    gets(message);
    printf("Enter key: ");
    scanf("%d", &key);
    for (i = 0; message[i] != '\0'; ++i)
    {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch + key;
            if (ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }
            message[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + key;
            if (ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
            message[i] = ch;
        }
    }
    printf("Encrypted message: %s", message);
    return 0;
}
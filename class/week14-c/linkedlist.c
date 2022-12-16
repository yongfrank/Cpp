/*
 * @Author: Frank Chu
 * @Date: 2022-12-09 15:28:02
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-09 15:59:37
 * @FilePath: /undefined/Users/yongfrank/Developer/Cpp/class/week14-c/linkedlist.c
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct link
{
    char name[10];
    int mark;
    struct link *next;
};

void insert(char *, int);
struct link *head = NULL;

int main()
{
    char name[10];
    int mark;
    struct link *t;
    while (1)
    {
        scanf("%s %d", name, &mark);
        if (strcmp(name, "#") == 0) break;
        insert(name, mark);
    }
    for (t = head; t != NULL; t = t->next)
        printf("<%s>: %d\n", t->name, t->mark);
}
void insert(char *name, int mark)
{
    struct link *p;
    p = (struct link*)malloc(sizeof(struct link));
    strcpy(p->name, name);
    p->mark = mark;
    p->next = NULL;
    if (head != NULL)
        p->next = head;
    head = p;
}

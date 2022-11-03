/*
 * @Author: Frank Chu
 * @Date: 2022-10-31 22:43:03
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-10-31 23:02:41
 * @FilePath: /Cpp/lab/lab08-week9/TestCode.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#include<stdio.h>
int main(void)
{
	char array[101];
	int n,i,k;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		int a=0,e=0,I=0,o=0,u=0;
		getchar();
		gets(array);
		printf("%s\n", array);
		for(i=0;array[i]!='\0';i++)
		{
			switch(array[i])
			{
				case 'a':{
					a++;
					break;
				}
				case 'e':{
					e++;
					break;
				}
				case 'i':{
					I++;
					break;
				}
				case 'o':{
					o++;
					break;
				}
				case 'u':{
					u++;
					break;
				}
				default:break;
			}
		}
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d",a,e,I,o,u);
		if(k!=n) printf("\n\n");
	}
	return 0;
}

//

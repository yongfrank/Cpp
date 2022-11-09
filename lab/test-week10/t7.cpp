#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

int main()
{
	std::string stringToBeSearched, findValue;
	std::cin >> stringToBeSearched >> findValue;

	char *wholeString, *search;
	wholeString = &stringToBeSearched[0];
	search = &findValue[0];

	int count = 0;
	while (*wholeString != '\0') {
		wholeString = std::strstr(wholeString, search);
		if (wholeString != NULL) {
			count++;
			wholeString = wholeString + strlen(search);
		} else {
			break;
		}
	} 
	printf("%d\n", count);
	return 0;
}
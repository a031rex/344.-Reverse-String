/*
Write a function that takes a string as input and returns the string reversed.

Example:
Given s = "hello", return "olleh".
*/

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char* reverseString(char* s) {
    int i=0;
	int size = strlen(s);
	char tmp;
	for(i=0 ; i < (size/2) ;i++)
	{
		tmp = s[size-i-1];
		s[size-i-1] = s[i];
		s[i] = tmp;
	}
	return s;
}

void main()
{
	char s[] ="hello";
	char *result = reverseString(s);
	int i=0;
	
	for(i=0;i<strlen(s);i++) 
	{
		printf("%c", result[i]);
	}
}

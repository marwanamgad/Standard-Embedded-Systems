/*
 * ex14.c
 *
 *  Created on: Feb 19, 2025
 *      Author: marwan
 */


#include <stdio.h>
#include<string.h>

void reverse_string(char s[])
{
	int i=0;
	int j;
	char temp;
	j = strlen(s)-1;

	while(i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
int main() {
	 char str[1000];
	   printf("Enter the string :");
	   fflush(stdout);
	   gets(str);

	   reverse_string(str);

	   printf("Reverse string is :%s", str);
	   return (0);
}

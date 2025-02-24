/*
 * ex2.c
 *
 *  Created on: Feb 24, 2025
 *      Author: marwan
 */

#include<stdio.h>

int string_length(char *ptr)
{
	int string_count = 0;
	while(*ptr != '\0') // loop until end of the string
	{
		string_count++;
		ptr++; //increment the pointer to get to next character
	}
	return string_count;
}

int main(void)
{
	char str[20];
	int length;

	printf("Please enter the string : ");
	fflush(stdout);
	gets(str);


	length = string_length(str);

	printf("The length of the given string \"%s\" is : %d", str, length);

	return 0;

}

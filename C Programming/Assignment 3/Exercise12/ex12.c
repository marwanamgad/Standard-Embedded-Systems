/*
 * ex12.c
 *
 *  Created on: Jan 31, 2025
 *      Author: marwan
 */

#include<stdio.h>

int String_length(char str[])
{
	int i=0;
	while(str[i]!= '\0')
	{
		i++;
	}
	i++;

	return i;
}

int main (void)
{
	char str[20] = "Marwan";


	printf("%d",String_length(str));
}

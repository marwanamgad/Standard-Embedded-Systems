/*
 * ex2.c
 *
 *  Created on: Jan 31, 2025
 *      Author: marwan
 */




// Write a function which, given a string, return TRUE if all
//characters are distinct and FALSE if any character is repeated.


#define TRUE 1
#define FALSE 0
#include<stdio.h>



int isDistinct(char string[])
{
	int i = 0;
	int j = 0;
	int res = TRUE;

	while(string[i]!='\0')
	{
		j = i+1;

		while(string[j]!='\0')
		{
			if(string[i]==string[j])
			{
				res = FALSE;
			}
			j++;
		}
		i++;
	}
	return res;
}

int main(void)
{
	char str[20];
	int results;
	printf("please enter the string: ");
	fflush(stdout);
	gets(str);

	results = isDistinct(str);

	if(results == TRUE)
	{
		printf("All Characters are distinct");
	}
	else
	{
		printf("All Characters are not distinct");
	}

}

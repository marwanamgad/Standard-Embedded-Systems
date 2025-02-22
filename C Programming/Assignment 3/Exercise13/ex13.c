/*
 * ex13.c
 *
 *  Created on: Jan 31, 2025
 *      Author: marwan
 */


//Write a function to remove all characters in a string expect alphabet
#include<stdio.h>
void remove_all_except_alphabet(char str[])
{
	int i, j;

	for(i=0;str[i]!='\0';++i)
	{
		while(!((str[i]>='a'&& str[i]<='z') || (str[i]>='A' && str[i]<='Z')) && (str[i]!= '\0'))
		{
			for(j=i;str[j]!='\0';++j)
			{
				str[j] = str[j+1];
			}
		}

	}
}

int main(void)
{
	char string[1000];
	printf("Enter the string: ");
	fflush(stdout);
	gets(string);

	remove_all_except_alphabet(string);


	printf("Output string: ");
	puts(string);

}









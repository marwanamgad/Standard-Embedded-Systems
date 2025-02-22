/*
 * ex11.c
 *
 *  Created on: Jan 31, 2025
 *      Author: marwan
 */



// Write a function that prints the frequency of a certain character in a string

#include<stdio.h>

int character_frequency(char key,char str[])
{
	int i=0;
	int count = 0;
	while(str[i]!='\0')
	{
		if(str[i]== key)
		{
			count++;
		}
		i++;
	}

	return count;
}

int main(void)
{
	int x;
	char ch;

	char string[50];
	printf("please enter the string: ");
	fflush(stdout);
	gets(string);

	printf("please enter the character: ");
	fflush(stdout);
	scanf("%c",&ch);



	x = character_frequency(ch,string);

	printf("%d",x);



}

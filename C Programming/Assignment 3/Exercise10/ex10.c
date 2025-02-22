/*
 * ex10.c
 *
 *  Created on: Jan 31, 2025
 *      Author: marwan
 */

// Write a function which, given a string, converts all uppercase
//letters to lowercase, leaving the others unchanged.


#include<stdio.h>

void upperToLower(char s[])
{
	int i=0;
	while(s[i]!='\0'){
		if(s[i]>='A' && s[i]<='Z')
		{
			s[i] = s[i]+32;
		}
		i++;
	}
}

int main(void){

	char str[20] = "MARWAN LOVES SARA";

	upperToLower(str);

	printf("%s",str);
}

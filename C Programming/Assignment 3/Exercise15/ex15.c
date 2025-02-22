/*
 * ex15.c
 *
 *  Created on: Feb 20, 2025
 *      Author: marwan
 */

#include<stdio.h>
void string_cat(char str1[],char str2[]){

	int i,j;

	for(i=0;str1[i]!='\0';i++){

	}

	for(j=0;str2[j]!='\0';j++,i++)
	{
		str1[i]=str2[j];
	}
	str1[i] = '\0';
}

int main(void)
{
	char s1[100], s2[50];
	printf("Please Enter String 1 : \n");
	fflush(stdout);
	gets(s1);

	printf("Please Enter String 2 : \n");
	fflush(stdout);
	gets(s2);

	string_cat(s1,s2);

	printf("The concatenated string is: %s ",s1 );
}

/*
 * ex18.c
 *
 *  Created on: Jan 26, 2025
 *      Author: marwan
 */



/*Write a program to display half pyramid using stars
pattern.
*
* *
* * *
* * * *
* * * * * */


#include<stdio.h>

int main(void)
{
	char c = '*';
	int rows,columns;
	int i = 5;

	for(rows=0;rows<i;rows++)
	{
		for(columns=0;columns<=rows;columns++)
		{
			printf("%c",c);
		}
			printf("\n");
	}


}

/*
 * ex19.c
 *
 *  Created on: Jan 26, 2025
 *      Author: marwan
 */



 /*Write a program to display inverted half pyramid using
stars pattern.
* * * * *
* * * *
* * *
* *
*
*/


#include<stdio.h>

int main(void)
{
	char c = '*';
	int rows,columns;
	int i = 5;

	for(rows=0;rows<i;rows++)
	{
		for(columns=i;columns>rows;columns--)
		{
			printf("%c",c);
		}
			printf("\n");
	}
}


/*
 * ex17.c
 *
 *  Created on: Jan 28, 2025
 *      Author: marwan
 */

//Write a program to count number of digits in a decimal number.

#include <stdio.h>

int main(void)
{

	int num = 127;
	int count = 0;

	while(num!=0)
	{
		num/=10;
		count++;

	}

	printf("number of digits is %d",count);

}






/*
 * ex16.c
 *
 *  Created on: Jan 26, 2025
 *      Author: marwan
 */

//Write a program to reverse a number.

#include<stdio.h>

int main(void)
{
	int num, reversed = 0, remainder ;

	printf("Enter the number: ");
	fflush(stdout);
	scanf("%d",&num);

	while(num!=0)
	{
		remainder = num % 10;
		reversed = reversed*10 + remainder;
		num/= 10;
	}

	printf("The reversed number is %d" ,reversed);

}

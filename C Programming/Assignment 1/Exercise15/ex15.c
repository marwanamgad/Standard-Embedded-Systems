/*
 * ex15.c
 *
 *  Created on: Jan 26, 2025
 *      Author: marwan
 */



 //Write a program to calculate the power of a number
 //The number and its power are input from user.

#include<stdio.h>

int main(void)
{
	int number,power,i;
    int res = 1;

	printf("Enter the Number: ");
	fflush(stdout);
	scanf("%d",&number);

	printf("Enter the power: ");
	fflush(stdout);
	scanf("%d",&power);

	for(i=0;i<power;i++)
	{
		res *= number;
	}


	printf("%d power %d = %d",number,power,res);
}

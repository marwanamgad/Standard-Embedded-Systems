/*
 * ex12.c
 *
 *  Created on: Jan 26, 2025
 *      Author: marwan
 */


//Write a program that reads a positive integer and computes the factorial.

#include<stdio.h>

int main(void){

	int x,i;
	long long fac = 1;

	printf("Enter the number : ");
	fflush(stdout);
	scanf("%d",&x);

	for(i=1;i<=x;i++)
	{
		fac = fac * i ;

	}



	printf("The Factorial of the given number is %lld ",fac);




}

/*
 * ex9.c
 *
 *  Created on: Feb 23, 2025
 *      Author: marwan
 */



//Fibonacci numbers

#define ARR_SIZE 10
#include<stdio.h>

int main(void)
{
	int arr[ARR_SIZE],i;

	arr[0] = 1;
	arr[1] = 1;


	for(i=1;i<ARR_SIZE;	i++)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}

	printf("The 7th term is %d",arr[6]);



}

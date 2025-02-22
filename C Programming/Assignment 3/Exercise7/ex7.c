/*
 * ex7.c
 *
 *  Created on: Jan 31, 2025
 *      Author: marwan
 */


/*
 Write a program that computes the nth term of the arithmetic
series:
1, 3, 5, 7, 9, …
Run the program to compute the 100th term of the given series.
*/


#define ARR_SIZE 100
#include<stdio.h>

int main(void)
{
	int arr[ARR_SIZE],i;

	arr[0] = 1;
	for(i=1;i<ARR_SIZE;	i++)
	{
		arr[i] = arr[i-1]+2;
	}
	printf("The %dth term is %d",ARR_SIZE,arr[99]);




}

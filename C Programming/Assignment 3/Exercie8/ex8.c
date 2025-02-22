/*
 * ex8.c
 *
 *  Created on: Jan 31, 2025
 *      Author: marwan
 */


/*Write a program that computes the nth term of the geometric
series:
1, 3, 9, 27, …
Run the program to compute the 10th term of the given series. */

#define ARR_SIZE 10
#include<stdio.h>

int main(void)
{
	int arr[ARR_SIZE],i;
	int num_index;
	printf("please enter the element index: ");
	fflush(stdout);
	scanf("%d",&num_index);


	arr[0] = 1;
	for(i=1;i<ARR_SIZE;	i++)
	{
		arr[i] = arr[i-1]*3;
	}
	printf("The %dth term is %d",ARR_SIZE,arr[num_index-1]);




}


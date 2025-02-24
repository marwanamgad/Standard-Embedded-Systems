/*
 * ex1.c
 *
 *  Created on: Feb 23, 2025
 *      Author: marwan
 */


// C Program to compute sum of the array elements using pointers

#include<stdio.h>

int main (void)
{
	int arr[10];
	int i, sum = 0;
	int *ptr;

	printf("Enter the 10 elements of the array : ");
	fflush(stdout);

	for(i=0;i<10;i++)
	{
		scanf("%d", &arr[i]);
	}

	ptr = arr; //pointer point to the first element in the array

	for(i=0;i<10;i++)
	{
		sum = sum + (*ptr);
		ptr++;// increment pointer to the next array element
	}

	printf("The sum of elements in the array is : %d", sum);
}

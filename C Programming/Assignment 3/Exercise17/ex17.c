/*
 * ex17.c
 *
 *  Created on: Feb 23, 2025
 *      Author: marwan
 */


#include<stdio.h>


int * Swap (int a_size,int *a,int b_size,int *b)
{
	int temp;
	int i;

	for(i=0;i<b_size;i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}

	return a;
}

int main(void)
{
	int i;
	int arr1[5] = {11,22,33,44,55};
	int arr2[5] = {2,543,111,43,99};
	printf("Array1 before the swap ");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr1[i]);
	}

	printf("\n");

	Swap(5,arr1,5,arr2);

	printf("Array1 after the swap ");
	for(i=0;i<5;i++)
		{
			printf("%d ",arr1[i]);
		}
}

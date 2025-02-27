/*
 * ex4.c
 *
 *  Created on: Feb 27, 2025
 *      Author: marwan
 */

#include<stdio.h>
#define ARR_SIZE 5

int findSmallestElement(int *ptr, int arr_size)
{
	int i;
	int min = ptr[0];
	for(i=1;i<arr_size;i++)
	{
		if(ptr[i]<min)
		{
			min = ptr[i];
		}
	}
	return min;

}

int main(void)
{
	int arr[ARR_SIZE] = {3,5,1,8,9};
	int minimum;
	minimum = findSmallestElement(arr,ARR_SIZE);
	printf("The smallest Element in the Array is : %d",minimum);
}

/*
 * ex5.c
 *
 *  Created on: Jan 29, 2025
 *      Author: marwan
 */


#include<stdio.h>
#define ARR_SIZE 6

int firstOccurrence(int arr[], int key)
{
	int i;
	for(i=0;i<ARR_SIZE;i++)
	{
		if(arr[i] == key)
		{
			return i;
		}
	}

	return -1;

}

int main(void)
{
	int array[ARR_SIZE] = {1,2,3,4,4,4};
	int key = 4;
	int res;
	res  = firstOccurrence(array,4);
	printf("The first occurence of %d is at index : %d",key,res);


}

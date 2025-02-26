/*
 * ex6.c
 *
 *  Created on: Feb 26, 2025
 *      Author: marwan
 */


#include<stdio.h>
#define ARR_SIZE 6

int lastOccurrence(int arr[], int key)
{
	int i;
	for(i=ARR_SIZE;i>=0;i--)
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
	res  = lastOccurrence(array,4);
	printf("The last occurence of %d is at index : %d",key,res);


}

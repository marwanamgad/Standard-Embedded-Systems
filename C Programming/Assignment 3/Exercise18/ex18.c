/*
 * ex18.c
 *
 *  Created on: Feb 22, 2025
 *      Author: marwan
 */


#include<stdio.h>

int longest_Consecutive_Occur(int array_size, int *array, int num )
{
	int i;
	int count = 0;
	int longest_count = 0;

	for(i=0;i<array_size;i++)
	{
		if(num == array[i])
		{
			//incrementing the current consecutive count each time the number is found
			count++;

			//compare the cureent consecutive count with longest count
			if(count > longest_count)
					{
						longest_count = count;
					}
		}
		else
		{
			count = 0;
		}

	}

	return longest_count;

}


int main(void)
{
	int arr[10] = {1,2,3,3,3,3,3,4,3,3};
	int res = 0;

	/* find the maximum consecutive occurance of 3 */
	res = longest_Consecutive_Occur(10,arr,3);

	printf("The maxium occurence of number 3 is : %d",res);

}

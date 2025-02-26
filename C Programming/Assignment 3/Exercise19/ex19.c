/*
 * ex19.c
 *
 *  Created on: Feb 26, 2025
 *      Author: marwan
 */


#include<stdio.h>
#define ARR_SIZE 5


int isIdentical(int arr1[],int arr2[])
{
	int i;
	for(i=0;i<ARR_SIZE;i++)
	{
		if(arr1[i]!=arr2[i])
		{
			return 0;
		}
	}
	return 1;
}

int main(void)
{
	int a[] = {1,2,3,3,5};
	int b[] = {1,2,3,4,5};

	int res = isIdentical(a,b);

	printf("%d",res);

}

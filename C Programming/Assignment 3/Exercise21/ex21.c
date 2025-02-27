/*
 * ex21.c
 *
 *  Created on: Feb 26, 2025
 *      Author: marwan
 */



#include <stdio.h>

/* Global array is empty and will be filled by PrintReverseInclusive function */
int OutputArray[256];

int * PrintReverseExclusive(int LowerNumber,int UpperNumber,int * result_size)
{
	int i;
	*result_size = 0;
	/* check the exit conditions */
	if((LowerNumber>=UpperNumber) || (UpperNumber-1 == LowerNumber))
	{
		OutputArray[0] = 0xFF;
		OutputArray[1] = 0xFF;
		*result_size = 2;
	}
	else
	{
		/* start looping from UpperNumber-1 until LowerNumber+1 to fill the array */
		for(i=UpperNumber;i>=LowerNumber;i--)
		{
			OutputArray[*result_size] = i;
			(*result_size)++;
		}
	}
	return OutputArray;
}

int main(void) {
	int count;
    int n1 = 5,n2=10;
    int *ptr;
	int arr_size_used = 0;

	ptr = PrintReverseExclusive(n1,n2,&arr_size_used);

	printf("Output Array = ");

	/* start looping from 0 to the last used element in the array */
	for(count=0;count<arr_size_used;count++)
	{
		/* access the global array using the ptr */
		printf("%d ",ptr[count]);
	}
	printf("\nOutput Array Size = %d",arr_size_used);
	return 0;
}

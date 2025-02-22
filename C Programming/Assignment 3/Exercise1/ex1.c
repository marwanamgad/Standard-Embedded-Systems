/*
 * ex1.c
 *
 *  Created on: Jan 29, 2025
 *      Author: marwan
 */

//Sum of elements in array

#include <stdio.h>

 int summation(int numbers_size, int* numbers)
 {
	 int i=0;
	 int sum =0;

	 for(i=0;i<numbers_size;i++)
	 {
		 sum += numbers[i];
	 }

	 return sum;
 }






int main(void)
{
	int a[] = {1,2,3,4};
	int res;


	//if we want to take numbers as input
	/*int i;
	printf("please enter number: ");

	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}*/



	res = summation(4,a);

	printf("The sum of numbers in array : %d",res);

}




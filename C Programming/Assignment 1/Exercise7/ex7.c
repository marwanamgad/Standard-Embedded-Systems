/*
 * ex7.c
 *
 *  Created on: Jan 25, 2025
 *      Author: marwan
 */


#include <stdio.h>

int main(void)
{
	int num1,num2,num3;
	printf("num1 : ");
	fflush(stdout);
	scanf("%d",&num1);

	printf("num2 : ");
	fflush(stdout);
	scanf("%d",&num2);

	printf("num3 : ");
	fflush(stdout);
	scanf("%d",&num3);

	if((num1<num2)&&(num1<num3))
	{
		printf("The smallest number is num1: %d",num1);
	}
	else if ((num2<num1)&&(num2<num3))
	{
		printf("The smallest number is num2: %d",num2);
	}
	else
	{
		printf("The smallest number is num3: %d",num3);
	}
}

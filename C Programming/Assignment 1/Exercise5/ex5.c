/*
 * ex5.c
 *
 *  Created on: Jan 25, 2025
 *      Author: marwan
 */


#include <stdio.h>
int main(void)
{
	char Character;

	printf("Enter the Character : ");
	fflush(stdout);
	scanf("%c",&Character);

	printf("The ASCII Value of Character %c is %d" , Character , Character);

}

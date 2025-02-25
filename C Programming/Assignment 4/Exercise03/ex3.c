/*
 * ex3.c
 *
 *  Created on: Feb 25, 2025
 *      Author: marwan
 */


#include<stdio.h>

#define ARR_SIZE 10

int main(void)
{
   int i, arr[ARR_SIZE];
   int *ptr;

   ptr = &arr[0]; //point to the first array element

   printf("\nEnter integers into array: ");
   fflush(stdout);

   for (i = 0; i < ARR_SIZE; i++)
   {
      scanf("%d", ptr); // take array element from user
      ptr++; // increment pointer to get the next array element
   }

   ptr = &arr[ARR_SIZE - 1]; //point to the last array element

   printf("\nElements of array in reverse order are : ");

   for (i = ARR_SIZE - 1; i >= 0; i--)
   {
      printf("%d", *ptr);
      ptr--;
   }

   return 0;
}

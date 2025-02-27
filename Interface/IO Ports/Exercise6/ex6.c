/*
 * ex6.c
 *
 *  Created on: Feb 15, 2025
 *      Author: marwan
 */


#include<avr/io.h>
#include<util/delay.h>

int main (void)
{
	unsigned char num = 0;
	DDRD &= ~(1<<PD4);//Configure PIN4 in PORTD as input pin
	DDRC |= 0x0F;  //Configure first four Pins in PORTC as Output pins
	PORTC &= 0xF0;  //Initialize the 7 segments with value 0

	while(1)
	{
		if(PIND & (1<<4)) //check if the push button is pressed or not
		{
			_delay_ms(30);

			if(PIND & (1<<4))// second check to avoid switch debounce effect
			{
				if((PORTC & 0x0F) == 9) //check if overflow occurs
				{
					num = 0;
				}
				else{
					num++; //increment 7-segment every press
				}
				PORTC = (PORTC & 0xF0) | (num & 0x0F);// Display the required number on the 7-segment
			}

			while(PIND & (1<<PD4)){} //wait until switch is relased
		}

	}
}

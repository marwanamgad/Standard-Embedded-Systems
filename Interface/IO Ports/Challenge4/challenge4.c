/*
 * challenge4.c
 *
 *  Created on: Feb 15, 2025
 *      Author: marwan
 */


//Control a led using PIR sensor

#include<avr/io.h>

int main(void)
{
	DDRC &= ~(1<<PC0); //Configure pin0 in PORTC as input pin
	DDRB |= (1<<PB0); //Configure pin0 in PORTC as output pin
	PORTB&= ~(1<<PB0);// set the value of the pin with 0 at the beginning (Led Off)

	while(1)
	{
		if(PINC & (1<<PC0)) //check for high signal (motion detected)
		{
			PORTB |= (1<<PB0); //LED ON
		}
		else
		{
			PORTB&= ~(1<<PB0);//(Led Off)
		}
	}
}

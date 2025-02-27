/*
 * challenge2.c
 *
 *  Created on: Feb 15, 2025
 *      Author: marwan
 */


#include<avr/io.h>
#include<util/delay.h>

int main (void)
{
	DDRA &= ~(1<<PA3)| ~(1<<PA4);//Configure Pin3 and pin4 in PORTA as input pins
	DDRD |= 0xFF;  //Configure All the Pins in PORTD as Output pins
	PORTD = 0x00;   //Turn OFF all the leds at the beginning by clearing all bits in PORTD

	while(1)
	{
		if(PINA & (1<<PA3)) // check if the first push button at PA3 is pressed or not
		{
			PORTD |= 0b10101010; // Turn on even LEDS numbers
			_delay_ms(500);
			PORTD = 0x00;
			_delay_ms(500);// Turn off all LEDS

		}
		else if(PINA & (1<<PA4))// check if the second push button at PA4
		{
			PORTD |= 0b01010101;// Turn on odd LEDS numbers
			_delay_ms(500);
			PORTD = 0x00;// Turn off all LEDS
			_delay_ms(500);

		}

		else
		{
			PORTD = 0x00;// Turn off all LEDS
		}
	}
}

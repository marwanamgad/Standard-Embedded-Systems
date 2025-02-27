/*
 * ex2.c
 *
 *  Created on: Feb 14, 2025
 *      Author: marwan
 */

#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRC |= (1<<PC2); //Configure pin 2 in PORTC as output pin.
	PORTC &= ~(1<<PC2); //set pin 2 in PORTC with value 0 at the beginning (LED OFF)

	while(1)
	{

		PORTC &= ~(1<<PC2); //set pin 2 in PORTC with value 0 (LED OFF)
		_delay_ms(1000);//delay for 1000 ms (1 second)

		PORTC = PORTC | (1<<PC2); //set pin2 in PORTC with value 1 (LED ON)
		_delay_ms(1000); //delay for 1000 ms (1 second)

	}


}

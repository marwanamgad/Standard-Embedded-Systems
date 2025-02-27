/*
 * ex4.c
 *
 *  Created on: Feb 15, 2025
 *      Author: marwan
 */

#include<avr/io.h>
#include<util/delay.h>

int main(void) {
	unsigned char flag = 0;

	DDRB = DDRB & ~((1<<PB0)); //Configure pin 0 and pin 1  in PORTB as input pins.

	PORTB = PORTB | (1 << PB0); //Activate internall pull up

	DDRC |= (1 << PC0);   //Configure pin 0 in PORTC as output pins.

	PORTC |= (1 << PC0); //Set pin 0 in PORTC with value 1 at the beginning (LEDS OFF).

	while (1) {
		if (!(PINB & (1 << PB0))) //check if button 1 is pressed or not
		{
			_delay_ms(30);

			if (!(PINB & (1 << PB0))) {

				if (flag == 0) {
					PORTC = PORTC ^ (1 << PC0); //Toggle Led
					flag = 1;
				}
			}
		}
		else
		{
			flag = 0; //reset the flag to 0
		}
	}

}

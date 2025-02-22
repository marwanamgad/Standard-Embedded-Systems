/*
 * ex1.c
 *
 *  Created on: Feb 21, 2025
 *      Author: marwan
 */


#include<avr/io.h>
#include<avr/interrupt.h>

ISR(INT0_vect)
{
	PORTC = PORTC ^ (1<<PC0); //Toggle value of PIN 0 in PORTC (Led Toggle)
}

void INT0_Init()
{
	DDRD &= ~(1<<PD2);//configure pin2 in PORTD as input pin
	SREG = SREG|(1<<7); //Enable the I-bit in the special register for the global interrupt enable
	GICR|= (1<<6);//set the value of the INT0 to 1 to enable Interrupt
	MCUCR |= (1<<ISC00)|(1<<ISC01);// Trigger INT0 with the raising edge

}
int main(void)
{

	INT0_Init();//Enable external INT0

	DDRC |= (1<<PC0);//configure pin0 in PORTC as output pin
	PORTC |= (1<<PC0);//set pin0 in PORTC with value 1 at the beginning (LED OFF)


	while(1)
	{

	}


}

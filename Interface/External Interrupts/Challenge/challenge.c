/*
 * challenge.c
 *
 *  Created on: Feb 22, 2025
 *      Author: marwan
 */


#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>


unsigned char count = 0;

ISR(INT2_vect)
{

	if((PORTC&0x0F) == 9)
	{
		count = 0;
	}
	else{
		count++;
	}

	PORTC = (PORTC & 0xF0)|(count & 0x0F);
}


void INT2_Init()
{
	DDRB &= ~(1<<PB2);//configure pin2 in PORTB as input pin
	SREG = SREG|(1<<7); //Enable the I-bit in the special register for the global interrupt enable
	GICR|= (1<<5);//set the value of the INT2 to 1 to enable Interrupt
	MCUCSR |= (1<<ISC2);// Trigger INT2 with the raising edge

}
int main(void)
{
	DDRC |= 0X0F;
	PORTC &= 0xF0;

	INT2_Init();//Enable external INT0

	while(1)
	{

	}


}

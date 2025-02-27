/*
 * ex2.c
 *
 *  Created on: Feb 21, 2025
 *      Author: marwan
 */


#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>


ISR(INT1_vect)
{
	int i;
	for(i=0;i<5;i++){

		PORTC |= 0x07; // Turn on all the three leds (PC0=1,PC1=1,PC2=1)
		_delay_ms(500);
		PORTC &= 0xF8;// Turn off all the three leds (PC0=0,PC1=0,PC2=0)
		_delay_ms(500);

	}


}

void INT1_Init()
{
	DDRD &= ~(1<<PD3);//configure pin3 in PORTD as input pin
	SREG = SREG|(1<<7); //Enable the I-bit in the special register for the global interrupt enable
	GICR|= (1<<7);//set the value of the INT1 to 1 to enable Interrupt
	MCUCR |= (1<<ISC10)|(1<<ISC11);// Trigger INT1 with the raising edge

}
int main(void)
{

	INT1_Init();//Enable external INT0

	DDRC |= 0X07;
	PORTC &= 0xF8;

	while(1)
	{
		PORTC = 0x01;
		_delay_ms(500);
		PORTC = 0x02;
		_delay_ms(500);
		PORTC = 0x04;
		_delay_ms(500);
	}


}

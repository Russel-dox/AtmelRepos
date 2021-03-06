/*
 * pwm.c
 *
 * Created: 2/8/2015 4:23:02 PM
 *  Author: Marius
 */ 
#include <avr/io.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "/AtmelRepos/Piatra/Piatra/Headers/USART.h"

void pwm_init()
{
	//Set the direction pins as output for the motor driver.
	DDRB |= (1 << DDB4) | (1 << DDB7);
	DDRC |= (1 << DDC7);
	DDRF |= (1 << DDF7);
	DDRB |= (1 << DDB5)|(1 << DDB6);//PWM pins
	
	TCCR1A |= (1 << COM1A1) | (1 << COM1B1);
	TCCR1A |= (1 << WGM11);
	TCCR1B |= (1 << WGM13) | (1 <<WGM12);
	TCCR1B |= (1 << CS10);
	ICR1=0xFF;
	uart_print("PWM initialization finished!\r\n");
	//uart_flush();
	
}
void setOC1A(uint8_t value)
{
	OCR1A = value;
}
void setOC1B(uint8_t value)
{
	OCR1B = value;
}

void forward(uint8_t value)
{
	OCR1A = value;
	OCR1B = value;
	
	PORTC |= (1 << PORTC7);
	PORTB |= (1 << PORTB7);
	PORTF &= ~(1 << PORTF7);
	PORTB &= ~(1 << PORTB4);
}
void backwords(uint8_t value)
{
	OCR1A = value;
	OCR1B = value;
	
	PORTC &= ~(1 << PORTC7);
	PORTB &= ~(1 << PORTB7);
	PORTF |= (1 << PORTF7);
	PORTB |= (1 << PORTB4);
}
void left_f(uint8_t value, uint8_t direction)
{
		OCR1A = 0;
		OCR1B = value;
		
		PORTC |= (1 << PORTC7);
		PORTB |= (1 << PORTB7);
		PORTF &= ~(1 << PORTF7);
		PORTB &= ~(1 << PORTB4);
}
void right(uint8_t value, uint8_t direction)
{
		OCR1A = value;
		OCR1B = 0;
		
		PORTC |= (1 << PORTC7);
		PORTB |= (1 << PORTB7);
		PORTF &= ~(1 << PORTF7);
		PORTB &= ~(1 << PORTB4);
}
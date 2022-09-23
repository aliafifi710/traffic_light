/*
 * INTERRUPT.c
 *
 * Created: 12/09/2022 04:23:56 م
 *  Author: 3m
 */ 

#include "INTERRUPT.h"


void INT0_Init(void)
{
	SREG  &= ~(1<<7);      // Disable interrupts by clearing I-bit
	 GPIO_setupPinDirection(PORTD_ID, PIN2_ID, PIN_INPUT);  // Configure INT0/PD2 as input pin
	GPIO_writePin(PORTD_ID,PIN2_ID,LOGIC_HIGH)  ;   // Enable the internal pull up resistor at PD2 pin
	GICR  |= (1<<INT0);    // Enable external interrupt pin INT0
	// Trigger INT0 with the rising edge
	MCUCR |= (1<<ISC00);
	MCUCR |= (1<<ISC01);
	SREG |= (1<<7);       // Enable interrupts by setting I-bit
}

































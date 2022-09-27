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


ISR(INT0_vect)
{
	
	if((GPIO_readPin(PORTA_ID,PIN0_ID)) || (GPIO_readPin(PORTA_ID,PIN1_ID)) )  //if green or yellow LED is on
	{
		LEDs_OFF();  //all LEDs are off at the beginning
		
		// the pedestrian Red LED will be on
		LED_ON(PORTB_ID,PIN2_ID);  //PED. RED LED ON
		
		yellow_blink();    // BOTH YELLOW LEDS BLINK FOR 5 SEC
		
		LED_OFF(PORTA_ID,PIN1_ID);  //CARS YELLOW LED OFF
		LED_OFF(PORTB_ID,PIN1_ID);  // YELLOW LED OFF
		LED_OFF(PORTB_ID,PIN2_ID);  //PED. RED LED OFF
		// cars' Red LED and pedestrian Green LEDs are on for five seconds,
		LED_ON(PORTA_ID,PIN2_ID);  //CARS RED LED ON
		LED_ON(PORTB_ID,PIN0_ID);  //PED. GREEN LED ON
		Timer0_Delay_5_sec();
		LED_OFF(PORTA_ID,PIN2_ID);  //CARS RED LED OFF
		
		yellow_blink();    // BOTH YELLOW LEDS BLINK FOR 5 SEC
		LED_OFF(PORTB_ID,PIN0_ID);  //PED. GREEN LED OFF
		LED_ON(PORTA_ID,PIN0_ID);  //CARS GREEN LED ON
		LED_ON(PORTB_ID,PIN2_ID);  //PED. RED LED ON
		Timer0_Delay_5_sec();
		LED_OFF(PORTA_ID,PIN0_ID);  //CARS GREEN LED ON
		LED_OFF(PORTB_ID,PIN2_ID);  //PED. RED LED ON

	}
	else if(GPIO_readPin(PORTA_ID,PIN2_ID))   //check for cars red led on
	{
		LEDs_OFF();
		
		LED_ON(PORTA_ID,PIN2_ID);  // CARS RED LED ON
		LED_ON(PORTB_ID,PIN0_ID);  // PED. GREEN LED ON
		Timer0_Delay_5_sec();      //delay for 5 seconds until pedestrian cross the street
	}
	
	

}

































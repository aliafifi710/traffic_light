/*
 * test.c
 *
 * Created: 26/09/2022 07:14:58 م
 *  Author: 3m
 */ 
#include "test.h"

uint8 test_GPIO()
{
	GPIO_setupPinDirection(PORTA_ID,PIN0_ID,PIN_OUTPUT);
	GPIO_writePin(PORTA_ID,PIN0_ID,LOGIC_HIGH);
			return OK;

}

uint8 test_timer()
{
	timer_init();
	GPIO_setupPinDirection(PORTA_ID,PIN0_ID,PIN_OUTPUT);
	GPIO_writePin(PORTA_ID,PIN0_ID,LOGIC_HIGH);
	Timer0_Delay_5_sec();	
	GPIO_writePin(PORTA_ID,PIN0_ID,LOGIC_LOW);
		Timer0_Delay_5_sec();
		return OK;

}

uint8 test_interrupt()
{
	INT0_Init();
			return OK;

	
}
uint8 test_LED()
{
	LED_INIT(PORTA_ID,PIN0_ID);
	LED_ON(PORTA_ID,PIN0_ID);
			return OK;

}
uint8 test_button()
{
	LED_INIT(PORTA_ID,PIN0_ID);
	Button_Init(PORTD_ID,PIN2_ID);
	if(!(button_state(PORTD_ID,PIN2_ID)))    //CHECK IF BUTTON IS PRESSED
	{
		LED_ON(PORTA_ID,PIN0_ID);
				return OK;
	}
	else 
	{
		LED_OFF(PORTA_ID,PIN0_ID);
				return OK;
	}
}

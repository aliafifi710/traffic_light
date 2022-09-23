/*
 * PUSHBUTTON.c
 *
 * Created: 12/09/2022 04:22:31 م
 *  Author: 3m
 */ 
#include "PUSHBUTTON.h"

void Button_Init(uint8 port_num,uint8 pin_num)
{
	GPIO_setupPinDirection(port_num,pin_num,PIN_INPUT);
	 GPIO_writePin(port_num,pin_num,LOGIC_HIGH);  //enable pull up resistor
}

uint8 button_state(uint8 port_num,uint8 pin_num)
{	
	return GPIO_readPin(port_num,pin_num);
}
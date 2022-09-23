/*
 * LED.C
 *
 * Created: 12/09/2022 04:20:34 م
 *  Author: 3m
 */ 
#include"LED.h"
void LED_INIT(uint8 port_num,uint8 pin_num)
{
	 GPIO_setupPinDirection( port_num,  pin_num, PIN_OUTPUT); //SET DIRECTION AS OUTPUT

}

void LED_ON(uint8 port_num,uint8 pin_num)
{
	 GPIO_writePin(port_num, pin_num, LOGIC_HIGH);

}

void LED_OFF(uint8 port_num,uint8 pin_num)
{
	 GPIO_writePin(port_num, pin_num, LOGIC_LOW);

}

void LED_TOGGLE(uint8 port_num,uint8 pin_num)
{
	if (BIT_IS_SET(port_num,pin_num))
	{
	 GPIO_writePin(port_num, pin_num, LOGIC_LOW);
	}
	else
	{
			 GPIO_writePin(port_num, pin_num, LOGIC_HIGH);

	}
		
}

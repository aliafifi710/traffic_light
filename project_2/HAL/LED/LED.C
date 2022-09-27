/*
 * LED.C
 *
 * Created: 12/09/2022 04:20:34 م
 *  Author: 3m
 */ 
#include"LED.h"
uint8 LED_INIT(uint8 port_num,uint8 pin_num)
{
	 GPIO_setupPinDirection( port_num,  pin_num, PIN_OUTPUT); 
return OK;
}

uint8 LED_ON(uint8 port_num,uint8 pin_num)
{
	 GPIO_writePin(port_num, pin_num, LOGIC_HIGH);
return OK;

}

uint8 LED_OFF(uint8 port_num,uint8 pin_num)
{
	 GPIO_writePin(port_num, pin_num, LOGIC_LOW);
return OK;

}

uint8 LED_TOGGLE(uint8 port_num,uint8 pin_num)
{
	if (BIT_IS_SET(port_num,pin_num))
	{
	 GPIO_writePin(port_num, pin_num, LOGIC_LOW);
	 return OK;

	}
	else
	{
	 GPIO_writePin(port_num, pin_num, LOGIC_HIGH);
return OK;

	}
		
}
uint8 LEDs_OFF()
{
	LED_OFF(PORTA_ID,PIN0_ID);
	LED_OFF(PORTA_ID,PIN1_ID);
	LED_OFF(PORTA_ID,PIN2_ID);
	LED_OFF(PORTB_ID,PIN0_ID);
	LED_OFF(PORTB_ID,PIN1_ID);
	LED_OFF(PORTB_ID,PIN2_ID);
	
	return OK;
}
void yellow_blink()
{
	
	LED_ON(PORTA_ID,PIN1_ID);
	LED_ON(PORTB_ID,PIN1_ID);
	Timer0_Delay_1_sec();
	LED_OFF(PORTA_ID,PIN1_ID);
	LED_OFF(PORTB_ID,PIN1_ID);
	Timer0_Delay_1_sec();
	LED_ON(PORTA_ID,PIN1_ID);
	LED_ON(PORTB_ID,PIN1_ID);
	Timer0_Delay_1_sec();
	LED_OFF(PORTA_ID,PIN1_ID);
	LED_OFF(PORTB_ID,PIN1_ID);
	Timer0_Delay_1_sec();
	LED_ON(PORTA_ID,PIN1_ID);
	LED_ON(PORTB_ID,PIN1_ID);
	Timer0_Delay_1_sec();
	LED_OFF(PORTA_ID,PIN1_ID);
	LED_OFF(PORTB_ID,PIN1_ID);


}
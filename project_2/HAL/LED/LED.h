/*
 * LED.h
 *
 * Created: 12/09/2022 04:22:05 م
 *  Author: 3m
 */ 
#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO/DIO.h"


uint8 LED_INIT(uint8 port_num,uint8 pin_num);  //set the direction as output pin

uint8 LED_ON(uint8 port_num,uint8 pin_num);    //turn any LED On

uint8 LED_OFF(uint8 port_num,uint8 pin_num);  //turn any LED Off

uint8 LED_TOGGLE(uint8 port_num,uint8 pin_num);    //Toggle any LED 

uint8 LEDs_OFF();                 //all LEDS off

void yellow_blink();   






#endif /* LED_H_ */
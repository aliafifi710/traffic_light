/*
 * LED.h
 *
 * Created: 12/09/2022 04:22:05 م
 *  Author: 3m
 */ 
#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO/DIO.h"


void LED_INIT(uint8 port_num,uint8 pin_num);

void LED_ON(uint8 port_num,uint8 pin_num);

void LED_OFF(uint8 port_num,uint8 pin_num);

void LED_TOGGLE(uint8 port_num,uint8 pin_num);





#endif /* LED_H_ */
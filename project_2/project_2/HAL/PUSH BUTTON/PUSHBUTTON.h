/*
 * PUSHBUTTON.h
 *
 * Created: 12/09/2022 04:22:55 م
 *  Author: 3m
 */ 


#ifndef PUSHBUTTON_H_
#define PUSHBUTTON_H_
#include "../../MCAL/DIO/DIO.h"

void Button_Init(uint8 port_num,uint8 pin_num);

uint8 button_state(uint8 port_num,uint8 pin_num);


#endif /* PUSHBUTTON_H_ */
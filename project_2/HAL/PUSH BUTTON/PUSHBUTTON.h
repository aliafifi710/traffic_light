/*
 * PUSHBUTTON.h
 *
 * Created: 12/09/2022 04:22:55 م
 *  Author: 3m
 */ 


#ifndef PUSHBUTTON_H_
#define PUSHBUTTON_H_
#include "../../MCAL/DIO/DIO.h"

uint8 Button_Init(uint8 port_num,uint8 pin_num);    //initialize the push button make it input pin and activate internal pull up resistor

uint8 button_state(uint8 port_num,uint8 pin_num);   // returns the button state whether it's pressed or not


#endif /* PUSHBUTTON_H_ */
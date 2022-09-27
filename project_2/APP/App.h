/*
 * App.h
 *
 * Created: 13/09/2022 02:28:51 م
 *  Author: 3m
 */ 
#include "../HAL/LED/LED.h"
#include "../HAL/PUSH BUTTON/PUSHBUTTON.h"
#include "../standard_types.h"

#include "../MCAL/INTERRUPT/INTERRUPT.h"
#include "../MCAL/TIMER/TIMER.h"

#ifndef APP_H_
#define APP_H_


void App_INIT();   //initializing the whole application
void App_start();   //launch the application in the while 1




#endif /* APP_H_ */
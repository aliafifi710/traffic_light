/*
 * test.h
 *
 * Created: 26/09/2022 07:15:24 م
 *  Author: 3m
 */ 


#ifndef TEST_H_
#define TEST_H_
#include "../MCAL/TIMER/TIMER.h"
#include "../MCAL/INTERRUPT/INTERRUPT.h"
#include "../MCAL/DIO/DIO.h"

uint8 test_GPIO();

uint8 test_timer();

uint8 test_interrupt();

uint8 test_LED();

uint8 test_button();



#endif /* TEST_H_ */
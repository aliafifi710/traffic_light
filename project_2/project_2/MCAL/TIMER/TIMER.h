/*
 * TIMER.h
 *
 * Created: 12/09/2022 04:24:50 م
 *  Author: 3m
 */ 
#include <avr/io.h>
#include <avr/interrupt.h>
#include "../../standard_types.h"

#ifndef TIMER_H_
#define TIMER_H_

#define NUMBER_OF_OVERFLOWS_PER_SECOND 4
#define NUMBER_OF_OVERFLOWS_PER_5_SECOND 20
void timer_init();

void Timer0_Delay_1_sec(void); //delay for 1 sec
void Timer0_Delay_5_sec(void); //delay for 5 sec


#endif /* TIMER_H_ */
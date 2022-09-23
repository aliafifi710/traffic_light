/*
 * TIMER.c
 *
 * Created: 12/09/2022 04:25:03 م
 *  Author: 3m
 */ 
#include"TIMER.h"
void timer_init()
{
	TCNT0 = 0; // Set Timer0 initial value to 0

	/* Configure the timer control register
	 * 1. Non PWM mode FOC0=1
	 * 2. Normal Mode WGM01=0 & WGM00=0
	 * 3. Normal Mode COM00=0 & COM01=0
	 * 4. clock = F_CPU/1024 CS00=1 CS01=0 CS02=1
	 */
	TCCR0 = (1<<FOC0) | (1<<CS02) | (1<<CS00);
}
void Timer0_Delay_1_sec(void)
{
	uint8 counter=0;
	
    while (counter !=NUMBER_OF_OVERFLOWS_PER_SECOND){

	while(!(TIFR & (1<<TOV0))); // Wait until the Timer0 Overflow occurs (wait until TOV0 = 1)

	TIFR |= (1<<TOV0); // Clear TOV0 bit by set its value
	counter++;
}

	//TCCR0 = 0; // Stop Timer0 by clear the Clock bits (CS00, CS01 and CS02)
}
void Timer0_Delay_5_sec(void)
{
	uint8 counter=0;
	
    while (counter !=NUMBER_OF_OVERFLOWS_PER_5_SECOND){

	while(!(TIFR & (1<<TOV0))); // Wait until the Timer0 Overflow occurs (wait until TOV0 = 1)

	TIFR |= (1<<TOV0); // Clear TOV0 bit by set its value
	counter++;
}
    
	//TCCR0 = 0; // Stop Timer0 by clear the Clock bits (CS00, CS01 and CS02)
}



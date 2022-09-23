/*
 * project_2.c
 *
 * Created: 12/09/2022 03:52:49 
 * Author : 3m
 */ 

#include <avr/io.h>
#include "APP/App.h"
#include "HAL/LED/LED.h"
#include "MCAL/TIMER/TIMER.h"

int main(void)
{
	
    App_INIT();

    /* Replace with your application code */
    while (1) 
    {
		App_start();
		
    }
}


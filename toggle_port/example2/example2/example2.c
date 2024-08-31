/*
 * project_led.c
 *
 * Created: 5/3/2024 11:03:50 AM
 *  Author: elsawah
 */ 


#include <avr/io.h> 
#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED.h"
int main(void)
{
	led_init('D',0);
	led_init('D',1);
	led_init('D',2);
	led_init('D',3);
	led_init('D',4);
	led_init('D',5);
	led_init('D',6);
	led_init('D',7);	
	signed char i;
    while(1)
    {
		for(i=0;i<=7;i++)
		{
			led_on('D',i);
			_delay_ms(250);
		}
		for(i=7;i>=0;i--)
		{
			led_off('D',i);
			_delay_ms(250);
		}
    }
}
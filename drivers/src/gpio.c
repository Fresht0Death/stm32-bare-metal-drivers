/*
 * gpio.c
 *
 *  Created on: Jun 11, 2026
 *      Author: Freshmai
 */


#include "stm32f4xx.h"
#include <stdio.h>
#include "gpio.h"


void gpioa_enable(void)
{

	RCC->AHB1ENR |= GPIOAEN;

}





void gpioa_set_mode(uint8_t mode, uint8_t pin)
{

	/*
	 * 	Different Modes:
	 *
	 * 0 = 	00: Input (reset state)
	 * 1 = 	01: General purpose output mode
	 * 2 =	10: Alternate function mode
	 * 3 =	11: Analog mode
	 *
	 * */


	/* Only for modes allowed therefore our range is from 0-3*/
	if(((mode < 0) || (mode > 3)))
	{
        fprintf(stderr, "Error: Acceptable mode range [0,3] (%d).\r\n", mode);
        return;


	}else if(((pin < 0) || (pin > 15)))
	{
		fprintf(stderr, "Error: Acceptable pin range [0,15] (%d).\r\n", pin);
		return;
	}
	else{

		int8_t bitPin1 = pin 	 * 2;
		int8_t bitPin2 = bitPin1 + 1;



		switch(mode)
		{
		case 0:
			GPIOA->MODER &=~ (1U<<bitPin1);
			GPIOA->MODER &=~ (1U<<bitPin2);
			break;
		case 1:
			GPIOA->MODER |= (1U<<bitPin1);
			GPIOA->MODER &=~ (1U<<bitPin2);
			break;
		case 2:
			GPIOA->MODER &=~ (1U<<bitPin1);
			GPIOA->MODER |= (1U<<bitPin2);
			break;
		case 3:
			GPIOA->MODER |= (1U<<bitPin1);
			GPIOA->MODER |= (1U<<bitPin2);
			break;
		default:
			break;


		}



	}



}


void toggle_pa5_led(void)
{
	gpioa_enable();

	gpioa_set_mode(1, 5);

	GPIOA->ODR ^= PA5;

}


void shit_delay(void)
{

	for(int i = 0; i < 1000000; i++);


}

/*
 * gpio.h
 *
 *  Created on: Jun 11, 2026
 *      Author: Freshmai
 */

#ifndef GPIO_H_
#define GPIO_H_

void toggle_pa5_led(void);
void gpioa_set_mode(uint8_t mode, uint8_t pin);
void gpioa_enable(void);
void shit_delay(void);
#define GPIOAEN		    (1U<<0)
#define PA5				(1U<<5)




#endif /* GPIO_H_ */

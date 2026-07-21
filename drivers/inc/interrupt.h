/*
 * interrupt.h
 *
 *  Created on: Jul 17, 2026
 *      Author: Freshmai
 */

#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include <stdint.h>

void pc13_user_button_exti_init(void);
void tim2_periodic_interrupt_init_ms(uint32_t durationMs);
void usart2_interrupt_init(void);



#endif /* INTERRUPT_H_ */

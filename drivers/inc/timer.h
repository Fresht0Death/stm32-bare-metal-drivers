/*
 * timer.h
 *
 *  Created on: Jul 1, 2026
 *      Author: Freshmai
 */

#ifndef TIMER_H_
#define TIMER_H_

/* \/ General Timer Struct \/ */

typedef struct{

	TIM_TypeDef* timerInstance;
	uint16_t timerPrescaler;


} TimerHandle;
/* /\ End of General Timer Struct /\ */


/* \/ Start of extending the scope of our timer handles \/ */

extern TimerHandle TIMER_1;
extern TimerHandle TIMER_2;
extern TimerHandle TIMER_3;
extern TimerHandle TIMER_4;
extern TimerHandle TIMER_5;
extern TimerHandle TIMER_6;
extern TimerHandle TIMER_7;
extern TimerHandle TIMER_8;
extern TimerHandle TIMER_9;
extern TimerHandle TIMER_10;
extern TimerHandle TIMER_11;
extern TimerHandle TIMER_12;
extern TimerHandle TIMER_13;
extern TimerHandle TIMER_14;
/* /\ End of extending the scope of our timer handles /\ */


/* \/ Start of function prototypes \/ */

void systick_init(void);
uint8_t systick_delay_ms(uint32_t delay_ms);
void timer_init(TimerHandle *timer);
uint8_t startTimer(uint32_t durationMs, TimerHandle *timer);
uint8_t check_timer_flag(TimerHandle *timer);
/* /\ End of function prototypes /\ */



#endif /* TIMER_H_ */

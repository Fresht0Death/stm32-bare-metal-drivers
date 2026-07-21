/*
 * adc.h
 *
 *  Created on: Jul 18, 2026
 *      Author: Freshmai
 */

#ifndef ADC_H_
#define ADC_H_

void single_polling_adc1_pa0_init(void);
uint32_t read_adc1_pa0_value(void);
float adc_to_voltage3V3(uint32_t adc_value);
uint32_t adc_to_voltage5V_integer_part(uint32_t adc_value);
uint32_t adc_to_voltage5V_decimal_part(uint32_t adc_value);
uint32_t adc1_pa0_avg_voltage(uint32_t sample);
void adc2_pa4_interrupt_oneshot_int(void);
void adc2_pa4_interrupt_continuous_init(void);
void adc1_pa0_single_polling_timed_init(uint32_t delayMs, TimerHandle *timer);

uint32_t num_of_samples(void);

#endif /* ADC_H_ */

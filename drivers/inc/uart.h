/*
 * uart.h
 *
 *  Created on: Jun 23, 2026
 *      Author: Freshmai
 */

#ifndef UART_H_
#define UART_H_



void usart2_init(void);
void read_line(char *buffer, int max_len);
void usart1_tx_init(void);
void usart1_write(int chr);






#endif /* UART_H_ */

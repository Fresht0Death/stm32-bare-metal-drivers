## `examples/02_usart_console/main.c`

```c
/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Jahmai Cabrera
 * @brief          : USART2 console validation example
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "uart.h"

int main(void)
{
    /*
     * USART2 is connected to the ST-Link Virtual COM Port
     * on the NUCLEO-F446RE.
     *
     * Settings:
     * - PA2: USART2_TX
     * - PA3: USART2_RX
     * - AF7
     * - 115200 baud
     * - 8-N-1
     */
    usart2_init();

    printf("USART2 console test\r\n");
    printf("printf over USART2 works\r\n");

    while (1)
    {
    }

    return 0;
}

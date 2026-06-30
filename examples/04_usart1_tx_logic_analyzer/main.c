## `examples/04_usart1_tx_logic_analyzer/main.c`

```c
/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Jahmai Cabrera
 * @brief          : USART1 TX logic analyzer validation example
 ******************************************************************************
 */

#include <stdint.h>
#include "stm32f4xx.h"
#include "uart.h"

int main(void)
{
    /*
     * USART1 TX validation:
     * - PA9: USART1_TX
     * - AF7
     * - 115200 baud
     * - 8-N-1
     *
     * Connect a logic analyzer input channel to PA9
     * and decode the signal as async serial.
     */
    usart1_tx_init();

    usart1_write('U');
    usart1_write('S');
    usart1_write('A');
    usart1_write('R');
    usart1_write('T');
    usart1_write('1');
    usart1_write(' ');
    usart1_write('T');
    usart1_write('X');
    usart1_write(' ');
    usart1_write('W');
    usart1_write('o');
    usart1_write('r');
    usart1_write('k');
    usart1_write('s');
    usart1_write('.');

    while (1)
    {
    }

    return 0;
}

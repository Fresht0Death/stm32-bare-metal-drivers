## `examples/03_usart_readline/main.c`

```c
/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Jahmai Cabrera
 * @brief          : USART2 readline validation example
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "uart.h"

int main(void)
{
    /*
     * USART2 console setup:
     * - PA2: USART2_TX
     * - PA3: USART2_RX
     * - AF7
     * - 115200 baud
     * - 8-N-1
     */
    usart2_init();

    char name[100];

    printf("Line input test\r\n");

    while (1)
    {
        printf("What is your name?\r\n>> ");

        read_line(name, sizeof(name));

        printf("You typed: %s\r\n", name);
    }

    return 0;
}

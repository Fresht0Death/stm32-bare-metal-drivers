# USART2 Console Example

## Purpose

This example validates USART2 transmit output using a blocking polling-based driver and `printf` retargeting.

USART2 is used as a debug console over the ST-Link Virtual COM Port.

## Hardware

- Board: NUCLEO-F446RE
- MCU: STM32F446RE
- USART peripheral: USART2
- TX pin: PA2
- RX pin: PA3
- Alternate function: AF7
- Connection: ST-Link Virtual COM Port over USB

## Serial Settings

- Baud rate: 115200
- Data bits: 8
- Parity: None
- Stop bits: 1
- Flow control: None

## What This Example Tests

- USART2 clock enable
- GPIOA clock enable
- PA2/PA3 alternate function configuration
- USART2 baud rate setup
- Blocking transmit using TXE polling
- `printf` retargeting through `__io_putchar`

## Test Procedure

1. Flash the firmware to the NUCLEO-F446RE.
2. Open a serial terminal connected to the ST-Link Virtual COM Port.
3. Configure the terminal for 115200 baud, 8-N-1.
4. Reset or run the board.
5. Confirm that the expected message prints in the terminal.

## Expected Output

```text
USART2 console test
printf over USART2 works

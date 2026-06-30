# USART2 Readline Example

## Purpose

This example validates USART2 transmit and receive using a blocking polling-based driver.

The firmware prompts the user for input, echoes typed characters, stores the input in a buffer, and prints the completed string back to the terminal.

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

- USART2 transmit using TXE polling
- USART2 receive using RXNE polling
- `printf` retargeting through `__io_putchar`
- Character input through USART2
- Basic line input using `read_line`
- Character echo back to the terminal

## Test Procedure

1. Flash the firmware to the NUCLEO-F446RE.
2. Open a serial terminal connected to the ST-Link Virtual COM Port.
3. Configure the terminal for 115200 baud, 8-N-1.
4. Reset or run the board.
5. Confirm that the program prints the line input prompt.
6. Type a name into the terminal.
7. Press Enter.
8. Confirm that the input is echoed and printed back by the firmware.

## Expected Output

```text
Line input test
What is your name?
>> Jahmai
You typed: Jahmai
What is your name?
>>

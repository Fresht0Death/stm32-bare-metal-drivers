# USART2 Console Validation

## Test Purpose

Validate that USART2 works as a blocking polling-based debug console using `printf`, character echo, and line input.

## Hardware Setup

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

## Test Procedure

1. Flash the firmware to the NUCLEO-F446RE.
2. Open a serial terminal connected to the ST-Link Virtual COM Port.
3. Configure the terminal for 115200 baud, 8-N-1.
4. Confirm that the program prints the line input prompt.
5. Type a name into the terminal.
6. Press Enter.
7. Confirm that the input is echoed and printed back by the firmware.

## Expected Result

The terminal should display the prompt, echo the typed characters, and print the full entered string back to the user.

Example output:

```text
Line input test
What is your name?
Jahmai
>> You typed: Jahmai
What is your name?

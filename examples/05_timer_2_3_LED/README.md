# TIM2/3 Example

## Purpose

This example validates TIM2 and TIM3 being initialized and starting the count passed in 'main.c'.

## Hardware

- Board: NUCLEO-F446RE
- MCU: STM32F446RE
- USART peripheral: TIMER
- Assumed Clock Speef: 16 MHz
- Connection: ST-Link Virtual COM Port over USB

## Serial Settings

- Baud rate: 115200
- Data bits: 8
- Parity: None
- Stop bits: 1
- Flow control: None

## What This Example Tests

- Initializing Timers using abstraction
- Catching values to big for specific timer
- GPIOA clock enable
- Correct time tracking by timers
- Checking timers through polling
- Being able to toggle onboard LED

## Test Procedure

1. Flash the firmware to the NUCLEO-F446RE.
2. Open a serial terminal connected to the ST-Link Virtual COM Port.
3. Configure the terminal for 115200 baud, 8-N-1.
4. Pass 65537U to TIM3 which is too large
5. Pass valid value for TIM2
6. Reset or run the board.
7. Confirm that the board toggles the LEDs at the times passed.

## Expected Output

-Only TIM2 turns ON/OFF the onbaord LED

1. Toggle LED on 

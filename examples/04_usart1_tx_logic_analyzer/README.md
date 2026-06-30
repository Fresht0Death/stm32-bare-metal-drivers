# USART1 TX Logic Analyzer Example

## Purpose

This example validates USART1 transmit-only output on PA9 using a logic analyzer.

The firmware sends a fixed ASCII message over USART1. A logic analyzer is used to decode the signal as async serial data.

## Hardware

- Board: NUCLEO-F446RE
- MCU: STM32F446RE
- USART peripheral: USART1
- TX pin: PA9
- Alternate function: AF7
- Test equipment: Logic analyzer

## Serial Settings

- Baud rate: 115200
- Data bits: 8
- Parity: None
- Stop bits: 1
- Idle state: High

## What This Example Tests

- USART1 clock enable
- GPIOA clock enable
- PA9 alternate function configuration
- USART1 baud rate setup
- Blocking transmit using TXE polling
- Logic analyzer UART decoding

## Test Procedure

1. Flash the firmware to the NUCLEO-F446RE.
2. Connect the logic analyzer ground to the board ground.
3. Connect the logic analyzer input channel to PA9.
4. Configure the analyzer for async serial decoding:
   - 115200 baud
   - 8 data bits
   - No parity
   - 1 stop bit
   - Idle high
5. Reset or run the board.
6. Confirm that the analyzer decodes the USART1 message.

## Expected Output

The logic analyzer should decode the following ASCII text:

```text
USART1 TX Works.

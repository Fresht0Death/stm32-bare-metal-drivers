# USART1 TX Logic Analyzer Validation

## Test Purpose

Validate that USART1 can transmit data on PA9 using register-level configuration and confirm the signal with a logic analyzer.

## Hardware Setup

- Board: NUCLEO-F446RE
- MCU: STM32F446RE
- USART peripheral: USART1
- TX pin: PA9
- Alternate function: AF7
- Test equipment: Logic analyzer
- Analyzer mode: Async Serial / UART decode

## Serial Settings

- Baud rate: 115200
- Data bits: 8
- Parity: None
- Stop bits: 1
- Idle state: High

## Test Procedure

1. Flash the firmware to the NUCLEO-F446RE.
2. Connect the logic analyzer ground to the board ground.
3. Connect the logic analyzer input channel to PA9.
4. Configure the analyzer for async serial decoding at 115200 baud, 8-N-1.
5. Run the firmware.
6. Confirm that the analyzer decodes the transmitted USART1 message.

## Expected Result

The logic analyzer should decode the USART1 TX output as readable ASCII text.

Expected decoded message:

```text
USART1 TX Works.

# NUCLEO-F446RE Board Notes

## Board

- Board: NUCLEO-F446RE
- MCU: STM32F446RET6
- Architecture: ARM Cortex-M4
- Vendor: STMicroelectronics

## Clock Assumptions

This project currently assumes the default clock configuration:

- Clock source: HSI
- HSI frequency: 16 MHz
- System clock: 16 MHz
- APB1 peripheral clock: 16 MHz
- APB2 peripheral clock: 16 MHz

USART baud rate calculations in the current driver are based on these default 16 MHz peripheral clocks.

## USART Pin Mapping

| Peripheral | Function | Pin | Alternate Function |
|---|---:|---:|---:|
| USART2 | TX | PA2 | AF7 |
| USART2 | RX | PA3 | AF7 |
| USART1 | TX | PA9 | AF7 |

## Serial Settings

All USART examples currently use:

- Baud rate: 115200
- Data bits: 8
- Parity: None
- Stop bits: 1
- Flow control: None

## Validation Notes

- USART2 is used as the debug console through the ST-Link Virtual COM Port.
- USART2 TX/RX was validated using a serial terminal.
- USART1 TX on PA9 was validated using a logic analyzer with async serial decoding.

## Current Limitations

- Drivers currently use blocking polling mode.
- USART baud rate assumes the default 16 MHz clock configuration.
- Timeout-based reads/writes are not implemented yet.
- Interrupt-driven RX is not implemented yet.

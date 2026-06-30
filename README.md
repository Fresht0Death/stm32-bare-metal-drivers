## STM32 Bare-Metal Drivers

Register-level peripheral drivers for STM32 microcontrollers, built to learn embedded systems fundamentals without relying on STM32 HAL for peripheral configuration.

This repository is focused on writing, testing, and documenting bare-metal drivers for the NUCLEO-F446RE development board.

## Target Hardware

- Board: NUCLEO-F446RE
- MCU: STM32F446RET6
- Core: Arm Cortex-M4
- Current clock assumption: default HSI 16 MHz
- Debug/programming: ST-LINK Virtual COM Port over USB

More board-specific notes are documented in:

```text
boards/nucleo-f446re.md

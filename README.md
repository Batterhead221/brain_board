# brain_board
Custom STM32H753 brain board with USB-C power/input selection, 3.3V buck regulation, microSD, CAN, RS-485, FRAM, flash, debug/programming access, and expansion connectors.

STM32H753-based main controller board for modular motion and control projects.

Brain_Board is the central controller in a modular hardware system. It handles the clean logic side of the design: MCU control, communication, debugging/programming, storage, sensor inputs, and daughter-board interfaces. Noisy power and motor-driving jobs are moved onto external boards such as Dirty_MTR_Board.

## Overview

Brain_Board is built around the STM32H753 in an LQFP-144 package. The board is intended as a reusable controller platform for future daughter boards, including motor driver boards, manual jog input boards, sensor boards, and communication/control modules.


## Key Specs

| Item | Value |
|---|---|
| MCU | STM32H753ZITx |
| Package | LQFP-144 |
| Logic rail | +3.3 V |
| USB | USB-C |
| External communication | RS485, CAN |
| Storage | microSD |
| Nonvolatile memory | SPI FRAM |
| Debug/programming | SWD / debug UART headers |
| Daughter-board support | Motor/control, analog I/O, manual jog, external flags |
| Power options | USB or VIN path with jumper selection |
| Board role | Main controller / system brain |

## Main Features

- STM32H753 main MCU
- USB-C connector for USB data/power path
- USB VBUS fused input
- VIN input path
- Jumper-selectable power source
- +3.3 V regulation and local decoupling
- RS485 transceiver interface
- CAN interface connector
- SPI FRAM
- microSD card interface
- SWD programming/debug header
- Debug UART header
- User switch
- Boot button
- Reset button
- Status LEDs
- Analog input header
- Daughter-board connectors
- Motor-control signals routed to external motor driver board
- Active-low home/crash/manual-jog style inputs
- Labeled test points and silkscreen notes

## System Role

Brain_Board is the clean logic/control board.

It does **not** directly drive the stepper motor coils. Motor power and phase switching are handled by a dedicated daughter board such as the Dirty_MTR_Board.

Typical system stack:
Host / USB / RS485 / CAN
        ↓
Brain_Board
        ↓
STEP / DIR / SPI / GPIO
        ↓
Dirty_MTR_Board
        ↓
Stepper motor
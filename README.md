# BRAIN_BOARD

<p align="center">
  <img src="Outputs/IMG/3D-T.png" alt="BRAIN_BOARD top 3D board render" width="700">
</p>

<p align="center">
  <img src="Outputs/IMG/3D-B.png" alt="BRAIN_BOARD bottom 3D board render" width="700">
</p>

Custom STM32H753 main controller board for modular motion, control, storage, communication, and daughter-board expansion.

BRAIN_BOARD is the clean logic/control board in a modular hardware system. It handles MCU control, communication, debugging/programming, storage, sensor inputs, and daughter-board interfaces. Noisy motor power and phase switching are kept on external boards such as DIRTY_MTR_BOARD.

## Project Status

In progress. Main controller schematic and PCB layout under development/review.

## System Role

```text
Host / USB / RS485 / CAN
        ↓
BRAIN_BOARD
        ↓ STEP / DIR / SPI / GPIO
DIRTY_MTR_BOARD / daughter boards
        ↓
Motor / sensors / external hardware
```

BRAIN_BOARD does not directly drive stepper motor coils. Motor current, switching, and noisy power handling belong on dedicated daughter boards.

## Key Specs

| Item | Value |
|---|---|
| MCU | STM32H753ZITx |
| Package | LQFP-144 |
| Logic rail | +3.3V |
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
- +3.3V regulation and local decoupling
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

## Power Architecture

BRAIN_BOARD is intended to keep logic power clean and separate from noisy motor power.

```text
USB-C / VIN input path
        ↓
power selection / protection
        ↓
+3.3V logic rail
        ↓
STM32H753 + memory + communication interfaces
```

Motor power is not generated or switched directly on BRAIN_BOARD.

## Daughter-Board Strategy

Planned or related daughter boards include:

- DIRTY_MTR_BOARD for motor driving and noisy power handling
- DUMB_MANUAL_MTR_BOARD for external manual jog buttons
- Sensor / analog input boards
- Communication or debug helper boards

Manual jog style inputs are intended to be active-low. External buttons pull the signal to GND when pressed.

## PCB Notes

Design priorities:

- Keep MCU decoupling tight and local
- Keep the ground system solid and low impedance
- Route communication interfaces cleanly
- Keep noisy motor-driver current off the main controller board
- Use clear connector labels and test points
- Preserve clean SWD/debug access

## Repository Output Images

Expected image paths for GitHub README rendering:

```text
Outputs/
  IMG/
    3D-T.png
    3D-B.png
    SCHEMATIC.png
    L1-SIG.png
    L2-3V3.png
    L3-GND.png
    L4-MIX.png
```

## Safety / Design Note

BRAIN_BOARD is a low-voltage controller PCB. Motor power, external loads, and high-current switching should be handled on separate boards with appropriate power routing, protection, and review.
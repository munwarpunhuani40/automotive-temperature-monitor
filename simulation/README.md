# Arduino Simulation

## Overview

This folder contains instructions for running the Automotive Temperature Monitoring System in an Arduino simulator.

The first version uses a potentiometer to simulate temperature changes.

## Simulator

Wokwi: https://wokwi.com/

## Components

- Arduino Uno
- Potentiometer
- Green LED
- Yellow LED
- Red LED
- Three 220-ohm resistors

## How to Run

1. Open the saved Wokwi project.
2. Check that the Arduino and components are connected.
3. Open the Arduino sketch.
4. Start the simulation.
5. Open the Serial Monitor.
6. Set the serial speed to 9600 baud if necessary.
7. Turn the potentiometer to change the simulated input.
8. Observe the status messages and LED indicators.

## Circuit Connections

- Potentiometer middle pin to A0.
- Potentiometer side pins to 5V and GND.
- Green LED through a resistor to D8.
- Yellow LED through a resistor to D9.
- Red LED through a resistor to D10.
- All LED cathodes to GND.

## Limitations

The potentiometer is a simulated input and does not measure real temperature.

This project does not implement CAN communication and is not intended for real vehicle control.

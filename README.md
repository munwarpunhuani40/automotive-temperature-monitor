# Automotive Temperature Monitoring System

## 1. Project Overview

This is a beginner-level embedded systems project inspired by temperature monitoring in automotive electronic control units (ECUs).

The program reads an analog input from a potentiometer, converts the reading into a simulated temperature, checks temperature limits, and reports the system status through serial communication.

## 2. Project Objectives

- Learn basic microcontroller programming.
- Read analog input using Arduino.
- Implement threshold-based control logic.
- Control LEDs using digital output pins.
- Send diagnostic data through serial communication.
- Practice embedded software testing and documentation.

## 3. Technologies Used

- Arduino Uno
- Arduino C++ sketch
- Analog input and digital output
- Serial communication
- Wokwi simulator
- GitHub

## 4. System Architecture

The system follows these steps:

1. Read the potentiometer value.
2. Convert the analog reading into a simulated temperature.
3. Compare the temperature with predefined limits.
4. Turn on the appropriate LED.
5. Send the reading and status to the Serial Monitor.

## 5. Temperature Status

| Simulated Temperature | System Status |
|---|---|
| Below 60 degrees | NORMAL |
| 60 to 79 degrees | WARNING |
| 80 degrees or above | CRITICAL |

These limits are demonstration values only.
They are not validated automotive temperature limits.

## 6. Hardware Components

- Arduino Uno
- One potentiometer
- One green LED
- One yellow LED
- One red LED
- Three 220-ohm resistors
- Connecting wires

## 7. Pin Connections

| Component | Arduino Pin |
|---|---|
| Potentiometer middle pin | A0 |
| Green LED anode through resistor | D8 |
| Yellow LED anode through resistor | D9 |
| Red LED anode through resistor | D10 |
| LED cathodes | GND |
| Potentiometer side pins | 5V and GND |

Connect each LED through its own current-limiting
resistor.

## 8. How to Run

1. Open the project in Arduino IDE or Wokwi.
2. Select Arduino Uno as the board.
3. Connect the components according to the pin table.
4. Paste the program into the Arduino sketch editor.
5. Start the simulation or upload the program.
6. Open Serial Monitor at 9600 baud.
7. Change the potentiometer to simulate temperature.
8. Observe the temperature status and LED indicators.

## 9. Example Serial Output

    SensorValue,Temperature,Status
    256,25,NORMAL
    614,60,WARNING
    819,80,CRITICAL

The values are illustrative. Actual readings depend
on the potentiometer position.

## 10. Testing

Test scenarios and expected results are documented
in [docs/test-cases.md](docs/test-cases.md).

Record actual results only after executing each test.

## 11. Simulation

See [simulation/README.md](simulation/README.md)
for simulation instructions and the project link.

## 12. Limitations

- A potentiometer simulates the temperature input.
- The program does not measure real temperature.
- The thresholds are not validated for a real vehicle.
- The project is an educational prototype, not an
  automotive-grade electronic control unit.
- CAN communication is not implemented in this version.

## 13. Future Improvements

- Connect a real temperature sensor.
- Add sensor fault detection.
- Improve handling of unexpected input values.
- Add automated tests where practical.
- Explore CAN communication with suitable hardware.
- Explore embedded debugging and software architecture.

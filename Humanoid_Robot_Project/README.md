# Humanoid Robot: Servo Motor Control 🤖

## Project Overview 📚
This project demonstrates how to control **6 servo motors** using an **Arduino Uno**. The motors perform two main actions:  
1. **Sweep Movement:** All motors sweep from 0° to 180° for 2 seconds.  
2. **Hold at 90°:** After the sweep, all motors hold at a 90° position.

---

## Components Used 🛠️
- Arduino Uno
- 6 Servo Motors (SG90)
- Breadboard
- 9V Battery + Barrel Jack
- Multiple Jumper Wires

## Circuit Setup ⚡

1️⃣ Power Connections (Without Voltage Regulator)
✅ Since there is no voltage regulator, we will use the 5V pin from Arduino to power the servos.
Connect the 9V battery to the Arduino via the Barrel Jack.
DO NOT connect the 9V battery directly to the servo motors.
Use the 5V pin on Arduino to provide power to the servos. 

2️⃣ Connecting the Servo Motors
Each servo has 3 wires:
(🔴 VCC - Red Wire):
Connect to the 5V pin on Arduino.
(⚫ GND - Black/Brown Wire):
Connect to the GND pin on Arduino.
(🟡 Signal - Yellow/Orange Wire):
Connect to one of the Arduino digital pins:
Servo Motor
Arduino Digital Pin

Servo 1 - Pin 2
Servo 2 - Pin 3
Servo 3 - Pin 4
Servo 4 - Pin 5
Servo 5 - Pin 6
Servo 6 - Pin 7 

3️⃣ Ground (GND) Connections
- Connect all servo motor GND wires to the GND pin on Arduino.
- Ensure that the 9V battery GND is connected to the Arduino GND for circuit stability.
---
## Arduino Code 💻
------

## Steps to Run the Project 📌

- Assemble the circuit as per the wiring guide above.
- Upload the Arduino code using the Arduino IDE.
- Observe the servo motors:
First, they will execute a Sweep motion for 2 seconds.
Then, they will hold at 90°.
-------

## Project Instructions 🚀
1. Connect all servo motors as described in the circuit setup.  
2. Upload the provided code using the Arduino IDE.  
3. Observe the sweep motion for 2 seconds, then all servos hold at a 90° position.  

---


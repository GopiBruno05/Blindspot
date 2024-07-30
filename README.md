
# Arduino based Blindspot Detection System for construction workers

This Arduino project utilizes ultrasonic sensors to detect obstacles in the blind spots and triggers a vibration motor to alert the user. It's an ideal project for enhancing safety in various applications, such as automotive blindspot detection.

## Components

- Arduino Uno (or compatible board)
- 2 x Ultrasonic Sensors (HC-SR04)
- Vibration Motor
- Jumper Wires
- Breadboard

## Installation

1. **Clone the repository:**


2. **Open the project in Arduino IDE:**

    - Launch Arduino IDE
    - Open `blindspot.ino` from the cloned repository

3. **Upload the code to your Arduino:**

    - Connect your Arduino board to your computer
    - Select the correct board and port from the Tools menu
    - Click on the Upload button

## Code Explanation

The code sets up two ultrasonic sensors to measure distances and a vibration motor that is triggered when an obstacle is detected within a specified range.

### Pin Configuration

- **Ultrasonic Sensor 1:**
  - Trigger Pin: 2
  - Echo Pin: 3

- **Ultrasonic Sensor 2:**
  - Trigger Pin: 6
  - Echo Pin: 7

- **Vibration Motor:**
  - Motor Pin: 4

### Main Logic

- The ultrasonic sensors emit pulses and measure the time it takes for the echo to return.
- The distance is calculated based on the duration of the pulse.
- If an obstacle is detected within 40 cm by either sensor, the vibration motor is activated to alert the user.


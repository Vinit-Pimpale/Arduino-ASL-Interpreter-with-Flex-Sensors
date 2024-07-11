# Arduino ASL Interpreter with Flex Sensors

## Overview:
This Arduino project utilizes flex sensors as input to interpret American Sign Language (ASL) gestures and display corresponding messages on an LCD screen. Flex sensors are analog devices that detect the degree of bending, providing variable input values based on hand gestures.

## Features:
Flex Sensor Input: Analog readings from flex sensors (connected to Arduino's analog pins) detect hand gestures.
ASL Interpretation: Real-time interpretation of ASL gestures based on predefined thresholds for flex sensor readings.
LCD Output: Messages corresponding to recognized ASL gestures are displayed on a 16x2 LCD screen.
Custom Character Display: Custom characters on the LCD enhance visual feedback, potentially displaying ASL hand shapes or indicators.

## Functionality:
- Initialization: The system initializes the LCD and creates custom characters representing different ASL signs.
- Sensor Reading: Analog readings from flex sensors (A0, A1) are converted to voltage and interpreted to determine the ASL gesture.
- Message Display: Depending on the detected gesture (e.g., letters, words), corresponding messages ("Hi!", "You", "Good?") are displayed on the LCD.

## Usage:

- Setup: Connect flex sensors to analog pins A0 and A1 of the Arduino. Connect the LCD according to the specified pin configuration.
- Operation: Upon powering on, the system initializes and waits for input gestures. It continuously reads sensor values, interprets ASL gestures, and updates the LCD display with appropriate messages.

## Future Enhancements:
- Integration with a gesture recognition library for more complex ASL interpretation.
- Adding voice output for accessibility.
- Enhancing user interface with graphical representation of ASL signs.

## Requirements:
- Arduino UNO or compatible board.
- Flex sensors (2x).
- 16x2 LCD screen.
- Arduino IDE for code development.

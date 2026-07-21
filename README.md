# Wireless Gesture Controlled Robot

## Overview

The main objective of our project is to control a robot using gestures of our hand. A Gesture Controlled robot is a kind of robot which can be controlled by human gestures. The basic working principle for our robot is passage of the data signals of accelerometer readings to the microcontroller board fitted on the robot. We need to wear a small transmitting device on our hand which includes an acceleration meter. This will transmit an appropriate command to the robot so that it can do whatever we want. The transmitting device includes a comparator for analog to digital conversion and an encoder to convert the four bit data into serial and then it will transmit by an RF Transmitter module. At the receiving end an RF Receiver module receives the encoded data and decodes using a decoder. This ...

> Full details available in [docs/full-documentation.md](docs/full-documentation.md)

## Key Components

- 7805
- 8051
- Accelerometer
- Adc
- Arduino
- At89C51
- Battery
- Buzzer
- Comparator
- Counter
- Dc Motor
- Decoder
- Encoder
- Gsm
- Ht12D
- Ht12E
- L293D
- Ldr
- Led
- Motor Driver
- Oled
- Pic
- Rf Module
- Servo
- Voltage Regulator

## Project Structure

```
07_Wireless-Gesture-Controlled-Robot/
  docs/
    full-documentation.md    # Complete project documentation
  images/
    # Circuit diagrams, block diagrams, photos
  code/                     # Source code (add your code files here)
  README.md                 # This file
```

## Getting Started

1. Read the full documentation in `docs/full-documentation.md`
2. Check circuit diagrams in `images/`
3. Upload source code to `code/` directory

## Technologies

- **Microcontroller**: Pic, 8051, At89C51, Arduino
- **Communication**: Gsm, Rf Module
- **Sensors**: Accelerometer, Ldr
- **Actuators**: Servo, Motor Driver, Dc Motor, Buzzer
- **Power**: Voltage Regulator, Battery, 7805

---

*Part of the [Engineering Projects Collection](../) repository.*

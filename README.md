# Musical Device

A touchless musical instrument built with Arduino. Uses an ultrasonic distance sensor to control pitch and a photoresistor as an on/off switch — no physical contact needed to play.

## How It Works

- **Photoresistor** — acts as the trigger: shine a flashlight at it (threshold: 950) to activate sound
- **Ultrasonic Distance Sensor (HC-SR04)** — controls pitch: closer = higher frequency (800 Hz), farther = lower frequency (200 Hz), mapped across 5–200 cm
- **Buzzer** — outputs the resulting tone

## Components

| Component | Pin |
|-----------|-----|
| Buzzer | D8 |
| HC-SR04 TRIG | D6 |
| HC-SR04 ECHO | D5 |
| Photoresistor | A0 |

## Setup

1. Wire components according to `schematic.jpg`
2. Upload `code.ino` to your Arduino Uno via Arduino IDE
3. Open Serial Monitor at 9600 baud to read live light values
4. Point a flashlight at the photoresistor and move your hand in front of the distance sensor to play

## Demo

See `demo-files/` for a photo of the setup and a short video preview.

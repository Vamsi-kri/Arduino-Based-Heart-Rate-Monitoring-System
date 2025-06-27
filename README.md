# Arduino-Based Heart Rate Monitoring System

A low-cost, portable heart rate monitor built with Arduino and a 16x2 LCD. This DIY project lets you measure your pulse rate easily using a fingertip sensor, with real-time results and engaging LCD animations.

---

## Features

- **Real-time pulse detection** with a fingertip sensor
- **Automatic Beats Per Minute (BPM) calculation**
- **Heart rate classification**: Low, Good, or High
- **ECG-like LCD waveform animation** during measurement
- **Live countdown timer** for a 10-second measurement window
- **Automatic reset** after displaying results
- **Beginner-friendly Arduino code** (no external libraries except LiquidCrystal)
- **Ideal for students, DIYers, and academic projects**

---

## Components Required

- Arduino Uno
- 16x2 LCD Display
- Analog Pulse Sensor
- Push Button
- Jumper Wires
- 2K Potentiometer
- External 5V Power Supply (for stable LCD and sensor readings)

---

## How It Works

1. **Place finger** on the pulse sensor.
2. **Press the Start button** to begin measurement.
3. **Measurement (10 seconds):**
   - Arduino counts detected pulses.
   - LCD shows animated ECG-style waveform and countdown timer.
4. **Result Display:**
   - BPM is calculated and shown.
   - Heart rate is classified as Low, Good, or High.
5. **Auto-reset** after a few seconds, ready for the next measurement.

---

## LCD Display Flow

| Phase         | LCD Top Row           | LCD Bottom Row   |
| ------------- | --------------------- | ---------------- |
| Start         | Place Finger &        | Press Start      |
| Measuring     | Waveform Animation    | Time Left: 10s   |
| BPM Result    | Heart Rate:           | 72 BPM           |
| Category      | Result:               | Good HR          |
| Reset         | Restarting...         |                  |

---

## Notes

- **Adjustable sensitivity:** You can fine-tune threshold and pulse detection parameters in the code for your specific sensor.
- **Animation disclaimer:** The LCD animation is for visual effect only and **not medically accurate**.

---

## Getting Started

1. **Wiring:** Connect components as described above.
2. **Programming:** Upload the Arduino code (see `/src` directory) to your Uno.
3. **Power Up:** Supply 5V external power for best LCD brightness and sensor stability.
4. **Measure:** Place your finger, press Start, and view your heart rate.

---

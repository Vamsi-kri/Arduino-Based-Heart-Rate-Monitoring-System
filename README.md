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


### ✅ **LCD (16x2) Display to Arduino UNO:**

| LCD Pin               | Arduino UNO Pin                        |
| --------------------- | -------------------------------------- |
| RS (Register Select)  | Pin 6                                  |
| E (Enable)            | Pin 5                                  |
| D4                    | Pin 3                                  |
| D5                    | Pin 2                                  |
| D6                    | Pin 1                                  |
| D7                    | Pin 0                                  |
| VSS (Ground)          | GND                                    |
| VDD (+5V)             | 5V                                     |
| VO (Contrast Control) | Middle pin of 2K Potentiometer (RPOT1) |
| RW (Read/Write)       | GND (for Write Mode)                   |
| LED+ (Backlight +)    | Through 220Ω resistor (R1) to 5V       |
| LED- (Backlight -)    | GND                                    |

---

### ✅ **Pulse Sensor:**

| Pulse Sensor Wire | Arduino Pin       |
| ----------------- | ----------------- |
| Signal            | A0 (Analog Input) |
| VCC               | 5V                |
| GND               | GND               |

---

### ✅ **Start Button (S1):**

| Button Pin | Arduino Pin                               |
| ---------- | ----------------------------------------- |
| One side   | Pin 7 (Digital Input with `INPUT_PULLUP`) |
| Other side | GND                                       |

*Note: Internal pull-up resistor is enabled in code.*

---

### ✅ **Contrast Potentiometer (RPOT1 - 2K Ohm):**

| Potentiometer Pin | Connection            |
| ----------------- | --------------------- |
| One side          | 5V                    |
| Middle (Wiper)    | LCD VO pin (Contrast) |
| Other side        | GND                   |

---

### ✅ **Power Supply:**

* The Arduino is powered via USB or external 5V adapter.
* LCD and Pulse Sensor both get 5V and GND from Arduino.

---

## ✅ Summary of Arduino Pin Usage:

| Arduino Pin | Function                                 |
| ----------- | ---------------------------------------- |
| Pin 0 to 3  | LCD Data (D4-D7)                         |
| Pin 5, 6    | LCD Control (E, RS)                      |
| Pin 7       | Start Button                             |
| A0          | Pulse Sensor Analog Signal               |
| 5V, GND     | Power for LCD, Sensor, and Potentiometer |

---
### License:
This project is open-source under the MIT License.
Feel free to modify, improve, and use it for educational and personal projects.

Happy Building!

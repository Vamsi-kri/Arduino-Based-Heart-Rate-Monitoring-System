# Arduino-Based-Heart-Rate-Monitoring-System

This project is a low-cost, portable heart rate monitoring system built using an Arduino microcontroller and a 16x2 LCD display. It allows users to measure their pulse rate by simply placing their finger on an analog pulse sensor and pressing a start button.

##  Features:

- Real-time heart rate (pulse) detection using a fingertip sensor
- Calculates Beats Per Minute (BPM)
- Heart rate classification: **Low**, **Good**, or **High**
- Dynamic waveform-style LCD animation during measurement (ECG-like effect)
- Live countdown timer during the 10-second measurement window
- Auto-reset after displaying the results
- Simple and easy-to-understand Arduino code
- No external libraries required beyond standard Arduino LiquidCrystal library
- Designed for students, DIY electronics enthusiasts, and academic projects

##  Components Used:

- Arduino Uno 
- 16x2 LCD Display
- Analog Pulse Sensor 
- Push Button 
- Jumper Wires
- Potentiometer (2K)
- External 5V power source (for stable LCD brightness and sensor reading)

##  How It Works:

1. User places their finger on the pulse sensor.
2. Press the start button to begin measurement.
3. For the next 10 seconds:
   - The Arduino counts the number of detected pulses.
   - An animated waveform is shown on the LCD for visual feedback.
   - A countdown timer is shown on the LCD.
4. After 10 seconds:
   - The BPM (Beats Per Minute) is calculated.
   - The BPM value is displayed on the LCD.
   - The system shows whether the heart rate is Low, Good, or High.
5. After a few seconds, the system auto-resets for the next measurement.

##  LCD Display Flow:

| Phase | LCD Top Row | LCD Bottom Row |
|---|---|---|
| Start | Place Finger & | Press Start |
| Measuring | Waveform Animation | Time Left: 10s |
| BPM Result | Heart Rate: | 72 BPM |
| Category | Result: | Good HR |
| Reset | Restarting... |  |

##  Note:

- Threshold and pulse detection sensitivity can be adjusted in code as per your sensor.
- The LCD animation gives an ECG-like experience but is **just for visual effect**, not medically accurate.

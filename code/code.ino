#include <LiquidCrystal.h>

// LCD connections: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(6, 5, 3, 2, 1, 0);

// Pin definitions
int data = A0;
int start = 7;
int count = 0;
unsigned long startTime = 0;
bool pulseDetected = false;

void setup() {
  lcd.begin(16, 2);
  pinMode(data, INPUT);
  pinMode(start, INPUT_PULLUP);
  randomSeed(analogRead(A1));  // For waveform randomness
}

void displayHeartRateCategory(int bpm) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Result:");

  lcd.setCursor(0, 1);
  if (bpm < 60) {
    lcd.print("Low HR");
  } else if (bpm >= 60 && bpm <= 100) {
    lcd.print("Good HR");
  } else {
    lcd.print("High HR");
  }

  delay(3000);
}

void drawWaveform(int pos, bool isPulse) {
  if (isPulse) {
    // Show spike: block on both rows
    lcd.setCursor(pos, 0);
    lcd.write(byte(255));
    lcd.setCursor(pos, 1);
    lcd.write(byte(255));
  } else {
    // Normal small wave: random row
    int row = random(0, 2);  // 0 or 1
    lcd.setCursor(pos, row);
    lcd.write(byte(255));
  }
}

void loop() {
  count = 0;

  // ----------- Start Screen -----------
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Place Finger &");
  lcd.setCursor(0, 1);
  lcd.print("Press Start");

  // Wait for button press
  while (digitalRead(start) > 0);
  delay(200);  // Debounce

  lcd.clear();
  startTime = millis();
  int animationPos = 0;

  // ----------- Measurement Phase -----------
  for (int secondsLeft = 10; secondsLeft > 0; secondsLeft--) {
    unsigned long secondStart = millis();

    while (millis() - secondStart < 1000) {
      pulseDetected = false;

      // Pulse detection
      if (analogRead(data) < 100) {
        count++;
        pulseDetected = true;
        delay(150);  // Simple debounce
        while (analogRead(data) < 100);
      }

      // Waveform animation
      drawWaveform(animationPos, pulseDetected);
      animationPos++;
      if (animationPos >= 16) {
        animationPos = 0;
        lcd.clear();
      }

      // Countdown Display (always bottom right)
      lcd.setCursor(7, 1);
      lcd.print("Time:");
      lcd.print(secondsLeft);
      lcd.print("s ");

      delay(100);  // Animation speed
    }
  }

  // ----------- BPM Display -----------
  int bpm = count * 6;
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Heart Rate:");

  lcd.setCursor(0, 1);
  lcd.print(bpm);
  lcd.print(" BPM");

  delay(5000);

  // ----------- Result Category -----------
  displayHeartRateCategory(bpm);

  // ----------- Restart Message -----------
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Restarting...");
  delay(2000);

  // Auto-reset to start screen
}

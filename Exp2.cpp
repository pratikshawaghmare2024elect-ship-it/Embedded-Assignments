#include <Arduino.h>

unsigned long last = 0;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // Non-blocking (millis)
  if (millis() - last >= 500) {
    last = millis();
    digitalWrite(9, !digitalRead(9));
  }

  // Delay method (use this alone if you want only the delay version)
  // digitalWrite(8, HIGH); delay(1000);
  // digitalWrite(8, LOW);  delay(1000);
}

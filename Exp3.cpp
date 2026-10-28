#include <Arduino.h>

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(8, OUTPUT);
}

void loop() {
  if (digitalRead(2) == LOW) {
    delay(50);                       // debounce
    if (digitalRead(2) == LOW) {
      digitalWrite(8, !digitalRead(8));
      while (digitalRead(2) == LOW); // wait for release
    }
  }
}

#include <Arduino.h>

// Serial receive works on interrupt internally (UART RX interrupt)
void setup() {
  Serial.begin(9600);
  Serial.println("Type something:");
}

void loop() {
  if (Serial.available()) {
    String s = Serial.readStringUntil('\n');
    Serial.print("You sent: ");
    Serial.println(s);
  }
}

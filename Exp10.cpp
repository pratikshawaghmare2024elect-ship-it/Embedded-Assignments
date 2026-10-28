#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  long sum = 0;
  for (int i = 0; i < 10; i++) {     // average of 10 readings = filter
    sum += analogRead(A0);
    delay(10);
  }
  Serial.print("Filtered ADC: ");
  Serial.println(sum / 10);
  delay(500);
}

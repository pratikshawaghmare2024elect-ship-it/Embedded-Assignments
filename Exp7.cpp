#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
}

void loop() {
  long high = pulseIn(7, HIGH);
  long low = pulseIn(7, LOW);
  long period = high + low;          // microseconds

  Serial.print("Period (us): ");
  Serial.println(period);
  Serial.print("Frequency (Hz): ");
  Serial.println(1000000.0 / period);
  delay(1000);
}

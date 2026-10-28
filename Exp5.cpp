#include <Arduino.h>
#include <TimerOne.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void blinkLED() {
  digitalWrite(8, !digitalRead(8));
}

void setup() {
  pinMode(8, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  lcd.init();
  lcd.backlight();
  Timer1.initialize(1000000);       // 1 second
  Timer1.attachInterrupt(blinkLED);
}

void loop() {
  lcd.setCursor(0, 0);
  if (digitalRead(2) == LOW) lcd.print("Pressed    ");
  else lcd.print("Not Pressed");
}

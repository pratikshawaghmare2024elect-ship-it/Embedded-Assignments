#include <Arduino.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &SPI, 9, 8, 10);   // DC, RESET, CS

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC);
  display.clearDisplay();
  display.drawLine(10, 0, 10, 55, WHITE);      // Y axis
  display.drawLine(10, 55, 127, 55, WHITE);    // X axis
  display.drawLine(10, 50, 40, 40, WHITE);     // graph
  display.drawLine(40, 40, 70, 45, WHITE);
  display.drawLine(70, 45, 100, 15, WHITE);
  display.display();
}

void loop() {}

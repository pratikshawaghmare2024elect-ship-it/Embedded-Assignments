// Arduino Uno Blink Program
// Purpose: To verify that the Arduino Uno is working correctly
// and that the IDE, board selection, and COM port are configured properly.

void setup()
{
  // Configure built-in LED connected to digital pin 13 as OUTPUT
  pinMode(13, OUTPUT);
}

void loop()
{
  // Turn ON the built-in LED
  digitalWrite(13, HIGH);

  // Wait for 1 second (1000 milliseconds)
  delay(1000);

  // Turn OFF the built-in LED
  digitalWrite(13, LOW);

  // Wait for 1 second
  delay(1000);
}

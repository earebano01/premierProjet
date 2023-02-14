#include <Arduino.h>

void signalOutput(char pin, int ms)
{
  digitalWrite(pin, HIGH);
  delay(ms);
  digitalWrite(pin, LOW);
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  signalOutput();
}
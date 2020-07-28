#include <Arduino.h>

void setup()
{
  pinMode(8, INPUT);
  digitalWrite(8, HIGH);

  pinMode(7, OUTPUT);
}

void loop()
{
  if (digitalRead(8) == LOW)
  {
    digitalWrite(7, HIGH);
  }
  else
  {
    digitalWrite(7, LOW);
  }
}
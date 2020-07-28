#include <Arduino.h>

void setup()
{
  for (int i = 8; i <= 10; i++)
  {
    pinMode(i, INPUT);
    digitalWrite(i, HIGH);
  }
  for (int i = 11; i <= 13; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  if (digitalRead(10) == LOW)
  {
    tone(7, 2093);
    digitalWrite(13, HIGH);
  }
  else
  {
    noTone(7);
    digitalWrite(13, LOW);
  }
  if (digitalRead(9) == LOW)
  {
    tone(7, 2637);
    digitalWrite(12, HIGH);
  }
  else
  {
    noTone(7);
    digitalWrite(12, LOW);
  }
  if (digitalRead(8) == LOW)
  {
    tone(7, 2093);
    digitalWrite(11, HIGH);
  }
  else
  {
    noTone(7);
    digitalWrite(11, LOW);
  }
}
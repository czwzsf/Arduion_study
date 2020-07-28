#include <Arduino.h>
int level = 0;
void setup()
{
  for (int i = 9; i <= 11; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for (int i = 9; i <= 11; i++)
  {
    analogWrite(i, ++level);
    delay(50);
    if (level > 6)
    {
      level = 0;
    }
  }
}
#include <Arduino.h>

void setup()
{
  pinMode(6, OUTPUT); //模拟输出
  Serial.begin(9600);
}

void loop()
{
  analogRead(A0); //区间[0,1023],采样精度2^10，答主用的是uno，因此精度只能到这样
  analogWrite(6, analogRead(A0) / 4);
  Serial.println(analogRead(A0) / 4);
  delay(200);
}

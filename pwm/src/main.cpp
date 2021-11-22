#include <Arduino.h>
#define led 11

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 256; i++)
  {
    analogWrite(led, i);
    delay(10);
  }
  for (int i = 255; i > 0; i--)
  {
    analogWrite(led, i);
    delay(10);
  }
}
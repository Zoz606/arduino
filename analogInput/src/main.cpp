#include <Arduino.h>
#define an A0
int value = 0;
float volt = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int i = 0; i < 10; i++)
  {
    value += analogRead(an);
    delay(50);
  }

  value /= 10;
  volt = (5.0 / 1023.0) * value;
  Serial.println(volt);
  value = 0;
}
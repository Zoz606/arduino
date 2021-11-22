#include <Arduino.h>
#define led 13
char rec = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  if (Serial.available())
  {
    delay(10);
    rec = Serial.read();
    if (rec == '1')
    {
      digitalWrite(led, HIGH);
      Serial.println("ON");
    }
    else if (rec == '0')
    {
      digitalWrite(led, LOW);
      Serial.println("OFF");
    }
  }
}
#include <Arduino.h>
#define sw 2
#define led LED_BUILTIN
#define gnd 4

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(sw, INPUT_PULLUP);
  pinMode(gnd, OUTPUT);
  digitalWrite(gnd, LOW);
}

void loop()
{
  if (digitalRead(sw) == LOW)
  {
    delay(10);
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  Serial.println(digitalRead(sw));
}
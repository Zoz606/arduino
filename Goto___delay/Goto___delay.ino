#define led LED_BUILTIN

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
 digitalWrite(led, 1);
 delay(500);
 digitalWrite(led, 0);
 delay(500);
}

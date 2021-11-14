
int d = 500;
void setup() {
  // put your setup code here, to run once:
  for (int i = 5; i <= 10; i++) {
      pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int j = 5; j <= 10; j++) {
        digitalWrite(j, HIGH);
        delay(d);
        digitalWrite(j, LOW);
  }
  for(int j = 9; j >= 5; j--) {
        digitalWrite(j, HIGH);
        delay(d);
        digitalWrite(j, LOW);
  }
}

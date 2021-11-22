#define sw 2
  void setup() {
  Serial.begin(9600);
  pinMode(sw, INPUT);
}

void loop() {
  Serial.println(digitalRead(sw));
}

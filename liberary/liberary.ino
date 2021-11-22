int i = 0;
long t = 0, duration = 0;
void setup() {
 Serial.begin(9600);
 pinMode(13, OUTPUT);
 pinMode(2, INPUT_PULLUP);
 pinMode(4, OUTPUT);
 digitalWrite(4, LOW);
 t = millis();
}

void loop() {
  duration = millis() - t;
  if (duration >= 1000) {
    Serial.println(i);
      i++;
      t = millis();  
  }
  if (digitalRead(2) ==LOW) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  
  //delay(1000);
}

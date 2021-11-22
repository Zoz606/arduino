int SETPOINT = 90;
int feedbackSpeed;
int error = SETPOINT - feedbackSpeed;
int kp = 1;
int ki; 
int u= kp * error;
void setup() {
  int pwm = (int) fabs(u);
  if (pwm > 255) {
    pwm = 255;
  }
}

void loop() {
  

}

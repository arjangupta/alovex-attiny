const int pwm_pin = PIN4;

void setup() {                
  pinMode(pwm_pin, OUTPUT); // set the pin to output mode
}

void loop() {
  analogWrite(pwm_pin, 255); // 100% duty cycle, or on
  delay(1000);
  analogWrite(pwm_pin, 128); // 50% duty cycle
  delay(1000);
  analogWrite(pwm_pin, 0);   // 0% duty cycle, or off
  delay(1000);
}
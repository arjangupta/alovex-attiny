const uint8_t PWM_PIN = PIN4;
const uint8_t INITIAL_DUTY_CYCLE = 204; // 80% duty cycle

void setup() {                
  pinMode(PWM_PIN, OUTPUT); // set the pin to output mode
}

void loop() {
  uint8_t duty_cycle = INITIAL_DUTY_CYCLE; // initialize for count-down
  // Progressively decrease the duty cycle
  for (uint8_t i = 0; i < INITIAL_DUTY_CYCLE; ++i)
  {
    analogWrite(PWM_PIN, --duty_cycle);
    delay(15);
  }
  // Wait for a small interval at the end
  delay(250);
  // Progressively increase the duty cycle
  for (uint8_t i = 0; i < INITIAL_DUTY_CYCLE; ++i)
  {
    analogWrite(PWM_PIN, ++duty_cycle);
    delay(15);
  }
}
const uint8_t pwm_pin = PIN4;
const uint8_t BYTE_MAX = 255;

void setup() {                
  pinMode(pwm_pin, OUTPUT); // set the pin to output mode
}

void loop() {
  uint8_t duty_cycle = BYTE_MAX; // Start 100% duty cycle, or fully illuminated
  for (size_t i = 0; i < BYTE_MAX; i++)
  {
    analogWrite(pwm_pin, --duty_cycle);
    delay(10);
  }
}
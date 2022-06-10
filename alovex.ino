const int blink_pin = PIN0;

void setup() {                
  pinMode(blink_pin, OUTPUT);      // on-board LED
}

void loop() {
  digitalWrite(blink_pin, HIGH);
  delay(1000); // wait 1 sec
  digitalWrite(blink_pin, LOW);
  delay(1000); // wait 1 sec
}
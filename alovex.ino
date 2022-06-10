void setup() {                
  pinMode(PIN1, OUTPUT);      // on-board LED
}

void loop() {
  digitalWrite(PIN1, HIGH);
  delay(1000); // wait 1 sec
  digitalWrite(PIN1, LOW);
  delay(1000); // wait 1 sec
}
void setup() {                
  pinMode(0, OUTPUT);      // LED on Model B
  pinMode(1, OUTPUT);      // LED on Model A   
}

void loop() {
  digitalWrite(0, HIGH);   // Turn the LED on
  digitalWrite(1, HIGH);
  delay(1000);             // Wait for a second
  digitalWrite(0, LOW);    // Turn the LED off
  digitalWrite(1, LOW); 
  delay(1000);             // Wait for a second
}

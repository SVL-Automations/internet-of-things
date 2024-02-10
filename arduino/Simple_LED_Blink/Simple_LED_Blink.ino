// Pin connected to the LED
const int ledPin = 13;

// Time interval for blinking (in milliseconds)
const int blinkInterval = 1000;

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  delay(blinkInterval); // Wait for the specified interval
  
  // Turn the LED off
  digitalWrite(ledPin, LOW);
  delay(blinkInterval); // Wait for the specified interval
}

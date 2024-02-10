// LDR sensor pin
const int ldrPin = A0;

// LED pin
const int ledPin = 13;

// Threshold value to determine relay on/off
const int threshold = 500;

void setup() {
  // Set the relay pin as an output
  pinMode(ledPin, OUTPUT);

  // Start the serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the LDR sensor
  int ldrValue = analogRead(ldrPin);

  // Print the sensor value to the serial monitor
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Check if the LDR value is above the threshold
  if (ldrValue > threshold) {
    digitalWrite(ledPin, HIGH);  // Turn the relay on
  } else {
    digitalWrite(ledPin, LOW);   // Turn the relay off
  }

  // Delay for a short interval before the next reading
  delay(500);
}

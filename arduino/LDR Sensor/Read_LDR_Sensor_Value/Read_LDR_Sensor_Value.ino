// LDR sensor pin
const int ldrPin = A0;

void setup() {
  // Start the serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the LDR sensor
  int ldrValue = analogRead(ldrPin);

  // Print the sensor value to the serial monitor
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Delay for a short interval before the next reading
  delay(500);
}

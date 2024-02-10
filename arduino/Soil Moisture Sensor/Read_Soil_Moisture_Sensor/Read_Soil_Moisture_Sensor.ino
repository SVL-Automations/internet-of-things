// Soil moisture sensor pin
const int moisturePin = A0;

void setup() {
  // Start the serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the soil moisture sensor
  int moistureValue = analogRead(moisturePin);

  // Convert the analog value to a percentage (0-100%)
  int moisturePercentage = map(moistureValue, 0, 1023, 0, 100);

  // Print the moisture percentage to the serial monitor
  Serial.print("Moisture Percentage: ");
  Serial.print(moisturePercentage);
  Serial.println("%");

  // Delay for a short interval before the next reading
  delay(1000);
}

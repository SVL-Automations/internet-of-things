// Soil moisture sensor pin
const int moisturePin = A0;

// LED pin
const int ledPin = 13;

// Threshold value to determine LED on/off
const int thresholdPercentage = 30;

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);

  // Start the serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the soil moisture sensor
  int moistureValue = analogRead(moisturePin);

  // Print the moisture value to the serial monitor
  Serial.print("Moisture Value: ");
  Serial.println(moistureValue);

  // Convert the analog value to a percentage (0-100%)
  int moisturePercentage = map(moistureValue, 0, 1023, 0, 100);

  // Print the moisture percentage to the serial monitor
  Serial.print("Moisture Percentage: ");
  Serial.print(moisturePercentage);
  Serial.println("%");  

  // Check if the moisture value is above the threshold
  if (moisturePercentage < thresholdPercentage) {
    digitalWrite(ledPin, HIGH);  // Turn the LED on
  } else {
    digitalWrite(ledPin, LOW);   // Turn the LED off
  }

  // Delay for a short interval before the next reading
  delay(1000);
}

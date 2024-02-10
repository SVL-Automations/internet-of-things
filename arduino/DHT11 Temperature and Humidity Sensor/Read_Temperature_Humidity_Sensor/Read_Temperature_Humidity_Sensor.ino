#include <DHT.h>

// DHT sensor type and pin
#define DHTPIN 0
#define DHTTYPE DHT11

// Initialize the DHT sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Start serial communication
  Serial.begin(9600);

  // Initialize the DHT sensor
  dht.begin();
}

void loop() {
  // Read the temperature and humidity values from the sensor
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check if any reading failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print the temperature and humidity values
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C\t");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Delay before the next reading
  delay(2000);
}

/*********
  SVL Automations
  https://svlautomations.in 
  https://svltrainings.in 
*********/

// Relay pin is controlled with D3. The active wire is connected to Normally Closed and common
int relay = 3;

void setup() {
  // Pin for relay module set as output
  pinMode(relay, OUTPUT);  
  // Serial communication for debugging purposes
  Serial.begin(9600);
}

void loop() {
    // The relay is turned off  
    digitalWrite(relay, HIGH);  
    Serial.println("OFF");  
    delay(1000);          // Wait for 1 second

    digitalWrite(relay, LOW);
    Serial.println("ON");
    delay(1000);          // Wait for 1 second

}

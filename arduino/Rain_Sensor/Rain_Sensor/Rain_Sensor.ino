/*
* SVL Automations
* https://svlautomations.in
* https://svltrainings.in
* 
*/

int rainPin = A0;
int greenLED = 6;
int redLED = 7;
// you can adjust the threshold value
int thresholdValue = 500;

void setup(){
  // Set rain sensor pin as Input
  pinMode(rainPin, INPUT);
  // Set Led sensor pin as Output
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  //Set led to off state
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(rainPin);
  Serial.print(sensorValue);
  if(sensorValue < thresholdValue){
    Serial.println(" - It's wet");
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);
  }
  else {
    Serial.println(" - It's dry");
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
  }
  delay(500);
}
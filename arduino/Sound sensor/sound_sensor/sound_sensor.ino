/*
* SVL Automations
* https://svlautomations.in
* https://svltrainings.in
* 
*/

int ledPin=13;
int sensorPin=7;
boolean val =0;

void setup(){
  // Pin for led set as output
  pinMode(ledPin, OUTPUT);
  // Sound sensor set as an input
  pinMode(sensorPin, INPUT);
  Serial.begin (9600);
}
  
void loop (){
  val =digitalRead(sensorPin);
  Serial.println (val);
  // when the sensor detects a signal above the threshold value, LED flashes
  if (val==HIGH) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
/*******
* SVL Automations
* https://svlautomations.in
* https://svltrainings.in

The MQ-2 smoke sensor is sensitive to smoke and to the following flammable gases:
LPG, Butane, Propane, Methane, Alcohol, Hydrogen
*******/

int redLed = 12;
int greenLed = 11;
int buzzer = 10;
int smokeA0 = A5;
// Your threshold value. You can change threshold value
int sensorThres = 400;

void setup() {
  //Set buzzer and led pins as Output
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  //Set sensor pins as Input
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);

  Serial.print("Sensor value A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    tone(buzzer, 1000, 200);
  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    noTone(buzzer);
  }
  delay(100);
}
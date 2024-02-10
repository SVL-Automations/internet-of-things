/*
* SVL Automations
* https://svlautomations.in
* https://svltrainings.in
* IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
* An IR detector/demodulator must be connected to the input RECV_PIN.
* To control the IR receiver, you need to install the IRremote Library  in the Arduino IDE.
* https://github.com/z3t0/Arduino-IRremote/archive/master.zip
* https://randomnerdtutorials.com/arduino-ir-remote-control/
*/

#include <IRremote.h>

int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
  delay(100);
}
/*
  This Sample is written for HCSR04 ultrasonic Module
  Author: Bonezegei (Jofel Batutay)
  Date: April 17, 2024 
  Set Max Distance 
  Default max distance is 200cm
*/

#include <Bonezegei_HCSR04.h>

const int TRIGGER_PIN = 26;
const int ECHO_PIN = 27;

Bonezegei_HCSR04 ultrasonic(TRIGGER_PIN, ECHO_PIN);

void setup() {
  Serial.begin(115200);
  ultrasonic.maxDistance= 400 ; //  Default max distance is 200cm
}

void loop() {
  int d=ultrasonic.getDistance(); // returns -1 if the value is out of range
  Serial.print("Distance:");
  Serial.print(d);
  Serial.println(" cm");
  delay(100);
}

/*
  This Sample is written for HCSR04 ultrasonic Module
  Author: Bonezegei (Jofel Batutay)
  Date: July 2023 
  Get ditance in CM
*/

#include <Bonezegei_HCSR04.h>

const int TRIGGER_PIN = 26;
const int ECHO_PIN = 27;

Bonezegei_HCSR04 ultrasonic(TRIGGER_PIN, ECHO_PIN);

void setup() {
  Serial.begin(115200);
}

void loop() {
  int d=ultrasonic.getDistance();
  Serial.print("Distance:");
  Serial.print(d);
  Serial.println(" cm");
  delay(100);
}

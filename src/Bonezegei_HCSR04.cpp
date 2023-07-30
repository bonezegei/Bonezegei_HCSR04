/*
  This Library is written for HCSR04 ultrasonic Module
  Author: Bonezegei (Jofel Batutay)
  Date: July 2023 
  
*/

#include "Bonezegei_HCSR04.h"
#include <Arduino.h>

Bonezegei_HCSR04::Bonezegei_HCSR04() {
}

Bonezegei_HCSR04::Bonezegei_HCSR04(int trigger, int echo) {
  _trigger = trigger;
  _echo = echo;
  pinMode(_trigger, OUTPUT);
  pinMode(_echo, INPUT);
  maxDistance = 200;
  timeout = 100;
}

void Bonezegei_HCSR04::begin() {
}

int Bonezegei_HCSR04::getDistance() {
  digitalWrite(_trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigger, LOW);

 unsigned long m = pulseIn(_echo, HIGH);
  float d= m * 0.034 / 2;

  if(d<=maxDistance){
    return (int)d;
  }
  else{
    return -1;
  }
}

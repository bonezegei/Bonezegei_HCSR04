/*
  This Library is written for HCSR04 ultrasonic Module
  Author: Bonezegei (Jofel Batutay)
  Date: July 2023 
  
*/
#ifndef _BONEZEGEI_HCSR04_H_
#define _BONEZEGEI_HCSR04_H_



class Bonezegei_HCSR04{
  public:
  Bonezegei_HCSR04();
  Bonezegei_HCSR04(int trigger, int echo);

  void begin();

  int getDistance();

  int _trigger; 
  int _echo;
  int maxDistance;
  int timeout;
};


#endif

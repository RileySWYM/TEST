#include "LED.h"



#include <Arduino.h>



void LED :: set_brightness (unsigned char b){
  brightness = b;
analogWrite (13 , brightness);
  
}

